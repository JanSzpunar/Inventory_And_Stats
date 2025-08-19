// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryController.h"

FAddItemResult UInventoryController::AddItemToInventory(FName InventoryName, FInventoryItem Item)
{
	return TryToAddItem(Item, true);
}

FRemoveItemResult UInventoryController::RemoveItemFromInventory(FName InventoryName, FName Item, int32 Amount, bool AllowPartial)
{
	return RemoveItemByID(Item, Amount, AllowPartial);
}

bool UInventoryController::HasItemInInventory(FName InventoryName, FName Item, int32 Amount)
{
	int32 totalAmount = 0;
	for (int32 i = 0; i < Inventory->Items.Num(); ++i)
	{
		if (Inventory->Items[i].ID == Item)
		{
			totalAmount += Inventory->Items[i].DynamicParameters.Amount;
			if (totalAmount >=Amount)
			{
				return true;
			}
		}
	}
	return false;
}

UInventory* UInventoryController::RequestInventory(FName InventoryName)
{
	return nullptr;
}

UInventory* UInventoryController::InitializeInventoryController(FName InventoryID, TSubclassOf<UInventory> InventoryClass, bool UseSaveData, FSaveInventoryData& SaveData, UDataTable* DataTable, FGameplayTag Equipable)
{
	Inventory = NewObject<UInventory>(this, InventoryClass);
	Inventory->SetID(InventoryID);
	InventoryDataTable = DataTable;
	EquipableTag = Equipable;
	Inventory->OnDragParametersRequested.AddDynamic(this, &UInventoryController::OnDragParametersRequested);
	Inventory->OnItemFrontendRequested.AddDynamic(this, &UInventoryController::OnItemFrontendRequested);
	Inventory->OnItemSizeRequested.AddDynamic(this, &UInventoryController::OnItemSizeRequested);
	Inventory->OnItemRemoveRequested.AddDynamic(this, &UInventoryController::OnItemRemoveRequested);
	Inventory->OnItemDivideRequested.AddDynamic(this, &UInventoryController::OnItemDivideRequested);
	Inventory->OnItemUseRequested.AddDynamic(this, &UInventoryController::OnItemUseRequested);
	Inventory->OnDragCancelRequested.AddDynamic(this, &UInventoryController::OnDragCancelRequested);
	Inventory->OnItemDroppedOnGrid.AddDynamic(this, &UInventoryController::OnItemDroppedOnGrid);
	Inventory->OnTryToEquipItem.AddDynamic(this, &UInventoryController::OnTryToEquipItem);
	Inventory->OnInventoryClose.AddDynamic(this, &UInventoryController::OnInventoryClose);

	if (UseSaveData)
	{
		Inventory->Items = SaveData.Items;
		Inventory->Size = SaveData.Size;
		FreeCells = SaveData.FreeCells;
	}
	else
	{
		for (int32 i = 0; i <= (Inventory->Size.X*Inventory->Size.Y)-1; ++i)
		{
			FreeCells.Add(i);
		}
		TArray<FInventoryItem> defaultItems = Inventory->Items;
		Inventory->ClearItems();
		for (FInventoryItem& Item : defaultItems)
		{
			TryToAddItem(Item, true);
		}
	}

	return Inventory;
}

FSaveInventoryData UInventoryController::GetSaveData() const
{
	return FSaveInventoryData(Inventory->Items,Inventory->Size,FreeCells);
}
///////////////////////////Internal/////////////////////////////////////

FInventoryItemStatic UInventoryController::CreateStaticItemData(FName ItemID)
{
	if(StaticData.Contains(ItemID))
	{
		return StaticData[ItemID];
	}

	FInventoryItemStatic* itemData = InventoryDataTable->FindRow<FInventoryItemStatic>(ItemID, TEXT("Item Fetch"));

	if (!itemData)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("No item in data table"));
		return FInventoryItemStatic();
	}
	StaticData.Add(ItemID, *itemData);
	return *itemData;

}

TSet<int32> UInventoryController::CalculateCellsNeededForItem(int32 Cell, FIntPoint ItemSize) const
{
	TSet<int32> tempCells;

	const int32 GridWidth = Inventory->Size.X;
	const int32 GridHeight = Inventory->Size.Y;

	const int32 StartRow = Cell / GridWidth;
	const int32 StartCol = Cell % GridWidth;

	if (StartCol + ItemSize.X > GridWidth)
	{
		return TSet<int32>(); 
	}

	// Check vertical bounds
	if (StartRow + ItemSize.Y > GridHeight)
	{
		return TSet<int32>(); 
	}

	for (int32 y = 0; y < ItemSize.Y; ++y)
	{
		for (int32 x = 0; x < ItemSize.X; ++x)
		{
			int32 cellIndex = (StartRow + y) * GridWidth + (StartCol + x);
			tempCells.Add(cellIndex);
		}
	}

	return tempCells;
}


void UInventoryController::SetAndSortFreeCells(TSet<int32> Cells)
{
	TArray<int32> SortedArray = Cells.Array();

	SortedArray.Sort();

	FreeCells = TSet<int32>(SortedArray);
}

bool UInventoryController::CheckGameplayTagCompatibility(FGameplayTagContainer ItemTags) const
{
	if(Inventory->AvailableTags.IsEmpty())
	{
		return true;
	}
	return Inventory->AvailableTags.HasAnyExact(ItemTags);
}

int32 UInventoryController::GetItemCount(FName ItemID) const
{
	int32 Count = 0;
	for (const FInventoryItem& InventoryItem : Inventory->Items)
	{
		if (InventoryItem.ID == ItemID)
		{
			Count += InventoryItem.DynamicParameters.Amount;
		}
	}
	return Count;
}

FInventoryItem& UInventoryController::SetItemAmount(FInventoryItem& Item, int32 Amount)
{
	if (Amount <= 0)
	{
		Item.DynamicParameters.Amount = 0;
		return Item;
	}
	Item.DynamicParameters.Amount = Amount;
	return Item;
}

FRemoveItemResult UInventoryController::RemoveItemByID(FName ItemID, int32 Amount, bool AllowPartial)
{
	if (ItemID.IsNone())
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("ItemID is None For Removal"));
		return FRemoveItemResult(false, Amount);
	}
	if(Amount <= 0)
	{
		for(int32 i = 0; i < Inventory->Items.Num(); ++i)
		{
			if(Inventory->Items[i].ID != ItemID)
			{
				continue;
			}
			SetAndSortFreeCells(FreeCells.Union(CalculateCellsNeededForItem(Inventory->Items[i].DynamicParameters.TopLeftCoordinate, CreateStaticItemData(ItemID).Dimensions)));
			Inventory->RemoveItem(i, Inventory->Items[i].DynamicParameters.TopLeftCoordinate, false);
		}
		return FRemoveItemResult(true, 0);
	}
	if(AllowPartial||GetItemCount(ItemID) >= Amount)
	{
		int32 AmountLeft = Amount;
		for(int32 i = 0; i < Inventory->Items.Num(); ++i)
		{
			FInventoryItem& Item = Inventory->Items[i];
			if(Item.ID != ItemID)
			{
				continue;
			}
			if (AmountLeft >= Item.DynamicParameters.Amount)
			{
				SetAndSortFreeCells(FreeCells.Union(CalculateCellsNeededForItem(Item.DynamicParameters.TopLeftCoordinate, CreateStaticItemData(ItemID).Dimensions)));
				AmountLeft -= Item.DynamicParameters.Amount;
				Inventory->RemoveItem(i, Item.DynamicParameters.TopLeftCoordinate, false);
				if (AmountLeft<=0)
				{
					return FRemoveItemResult(true, 0);
				}
			}
			else
			{
				SetItemAmount(Item, Item.DynamicParameters.Amount - AmountLeft);
				Inventory->UpdateItem(i, Item, true);
				return FRemoveItemResult(true, 0);
			}
		}
		return FRemoveItemResult(true, AmountLeft);
	}

	return FRemoveItemResult();
}

bool UInventoryController::ItemsAreTheSame(const FInventoryItem& ItemA, const FInventoryItem& ItemB) const
{
	return ItemA.ID == ItemB.ID;
}

FCellFitResult UInventoryController::CheckIfItemCanFitIntoCell(int32 Cell, FIntPoint ItemSize, FGameplayTagContainer ItemTags) const
{
	if(!CheckGameplayTagCompatibility(ItemTags))
	{
		return FCellFitResult{false, TSet<int32>()};
	}
	TSet<int32> cellsNeeded = FreeCells.Intersect(CalculateCellsNeededForItem(Cell, ItemSize));
	return FCellFitResult(cellsNeeded.Num() == ItemSize.X * ItemSize.Y, cellsNeeded);
}

TMap<FGameplayTag, float> UInventoryController::MergeStatsModifiers(const TMap<FGameplayTag, float>& Stats1,const TMap<FGameplayTag, float>& Stats2) const
{
	TMap<FGameplayTag, float> mergedStats = Stats1;

	for (const auto& Stat : Stats2)
	{
		if (mergedStats.Contains(Stat.Key))
		{
			mergedStats[Stat.Key] += Stat.Value;
		}
		else
		{
			mergedStats.Add(Stat.Key, Stat.Value);
		}
	}

	return mergedStats;
}

FFindItemResult UInventoryController::FindItemAtCell(int32 Cell) const
{
	for (int32 i = 0; i < Inventory->Items.Num(); ++i)
	{
		const FInventoryItem& Item = Inventory->Items[i];
		if (Item.DynamicParameters.TopLeftCoordinate == Cell)
		{
			return FFindItemResult{true, Item, i};
		}
	}
	
	return FFindItemResult(false, FInventoryItem(), -1);
}

FCellFitResult UInventoryController::CalculateDragResults(int32 Cell, FIntPoint ItemSize, FName DraggedItemID, FGameplayTagContainer ItemTags)
{
	FFindItemResult hoveredItemData = FindItemAtCell(Cell);
	if (hoveredItemData.Found)
	{
		FInventoryItemStatic staticItemData = CreateStaticItemData(hoveredItemData.Item.ID);
		TSet<int32> cellsNeeded = CalculateCellsNeededForItem(Cell, staticItemData.Dimensions);
		bool canFit = (staticItemData.MaxStackSize > hoveredItemData.Item.DynamicParameters.Amount) && (DraggedItemID == hoveredItemData.Item.ID) && (CheckGameplayTagCompatibility(ItemTags));
		return FCellFitResult( canFit, cellsNeeded );
	}

	return CheckIfItemCanFitIntoCell(Cell, ItemSize, ItemTags);
}

FAddItemResult UInventoryController::TryToAddToStack(FInventoryItem& Item, FInventoryItem& SameItem, int32 SameItemArrayIndex)
{
	int32 amountToAdd = Item.DynamicParameters.Amount;
	int32 FreeSpace = 0;
	int32 sameItemMaxStackSize = CreateStaticItemData(SameItem.ID).MaxStackSize;
	int32 sameItemAmount = SameItem.DynamicParameters.Amount;
	FreeSpace = sameItemMaxStackSize -sameItemAmount;
	if (FreeSpace <= 0)
	{
		return FAddItemResult(false, amountToAdd);
	}
	SetItemAmount(Item, FMath::Clamp(sameItemAmount + amountToAdd, 0, sameItemMaxStackSize));
	Inventory->UpdateItem(SameItemArrayIndex, SameItem, true);
	return FAddItemResult((amountToAdd - FreeSpace)<=0, amountToAdd-FreeSpace);
}

FAddItemResult UInventoryController::SearchAndTryToAddToStack(FInventoryItem& Item)
{
	int32 amountToAdd = Item.DynamicParameters.Amount;
	int32 FreeSpace = 0;
	for (int32 i = 0; i < Inventory->Items.Num(); ++i)
	{
		FInventoryItem& existingItem = Inventory->Items[i];
		if (!ItemsAreTheSame(existingItem, Item))
		{
			continue;
		}
		int32 existingItemMaxStackSize = CreateStaticItemData(existingItem.ID).MaxStackSize;
		int32 existingItemAmount = existingItem.DynamicParameters.Amount;
		FreeSpace = existingItemMaxStackSize - existingItemAmount;
		if (FreeSpace <= 0)
		{
			continue;
		}
		SetItemAmount(existingItem, amountToAdd <= FreeSpace ? existingItemAmount + amountToAdd : existingItemMaxStackSize);
		Inventory->UpdateItem(i, existingItem, true);
		amountToAdd = amountToAdd <= FreeSpace ? 0 : amountToAdd - FreeSpace;
		if (amountToAdd <= 0)
		{
			return FAddItemResult(true, 0);
		}
	}
	return FAddItemResult(false, amountToAdd);
}

FInventoryItem& UInventoryController::SetItemTopLeftCoordinate(FInventoryItem& Item, int32 NewTopLeftCoordinate)
{
	Item.DynamicParameters.TopLeftCoordinate = NewTopLeftCoordinate;
	return Item;
}

bool UInventoryController::AddItemAtSpecificCell(FInventoryItem& Item, int32 Cell, bool CheckAndGenerateCells, TArray<int32> ValidCells)
{
	if (CheckAndGenerateCells)
	{
		FInventoryItemStatic staticData = CreateStaticItemData(Item.ID);
		FCellFitResult cellFitResult = CheckIfItemCanFitIntoCell(Cell, staticData.Dimensions, staticData.Tags);
		if (!cellFitResult.Fits)
		{
			return false;
		}
		SetAndSortFreeCells(FreeCells.Difference(cellFitResult.CellsNeeded));
	}
	else
	{
		TSet<int32> ValidCellsTemp(ValidCells);
		SetAndSortFreeCells(FreeCells.Difference(ValidCellsTemp));
	}
	SetItemTopLeftCoordinate(Item, Cell);
	Inventory->AddItem(Item, true);
	return true;
}

FInventoryItem& UInventoryController::MergeItemModifiers(FInventoryItem& Item)
{
	if (!Item.DynamicParameters.MergeStatsWithDataTable)
	{
		return Item;
	}
	Item.DynamicParameters.StatBonus = MergeStatsModifiers(CreateStaticItemData(Item.ID).StatBonus, Item.DynamicParameters.StatBonus);
	Item.DynamicParameters.MergeStatsWithDataTable = false;
	return Item;
}

FCellFitResult UInventoryController::FindSpaceForItem(FIntPoint ItemSize, FGameplayTagContainer ItemTags)
{
	FCellFitResult result;
	for (const int32& Cell : FreeCells)
	{
		result = CheckIfItemCanFitIntoCell(Cell, ItemSize, ItemTags);
		if(result.Fits)
		{
			return result;
		}
	}
	// TODO Inform user that there is no space for item
	return FCellFitResult(false, TSet<int32>());
}

FAddItemResult UInventoryController::TryToAddItem(FInventoryItem& Item, bool TryToStack)
{
	FAddItemResult result;
	if (TryToStack)
	{
		result = SearchAndTryToAddToStack(Item);
		if(result.Success)
		{
			return FAddItemResult(true, 0);
		}
		SetItemAmount(Item, result.AmountLeft);
	}
	int32 amountToAdd = Item.DynamicParameters.Amount;
	while(amountToAdd > 0)
	{
		
		FInventoryItemStatic staticData = CreateStaticItemData(Item.ID);
		FCellFitResult cellFitResult = FindSpaceForItem(staticData.Dimensions, staticData.Tags);
		if (!cellFitResult.Fits)
		{
			break;
		}
		TArray<int32> cells = cellFitResult.CellsNeeded.Array();
		int32 maxStackSize = staticData.MaxStackSize;
		int32 newAmount = (amountToAdd <= maxStackSize) ? amountToAdd : maxStackSize;
		SetItemAmount(Item, newAmount);
		amountToAdd -= newAmount;
		AddItemAtSpecificCell(MergeItemModifiers(Item), cells[0], false, cells);
		
	}
	return FAddItemResult(amountToAdd<=0, amountToAdd);
}

bool UInventoryController::RemoveItemAtCell(int32 Cell)
{
	if (Cell < 0)
	{
		return false;
	}
	FFindItemResult result = FindItemAtCell(Cell);
	if (!result.Found)
	{
		return false;
	}
	FInventoryItemStatic staticData = CreateStaticItemData(result.Item.ID);
	TSet<int32> freedCells = CalculateCellsNeededForItem(Cell, staticData.Dimensions);
	freedCells.Append(FreeCells);
	SetAndSortFreeCells(freedCells);
	Inventory->RemoveItem(result.ArrayIndex, Cell, true);
	return true;
}

////////////////////Assigned Functions////////////////////
void UInventoryController::OnItemDivideRequested(int32 ItemTopLeftCoordinate) //@todo: COŒ TU JEST NIE TAK 
{
	FFindItemResult result = FindItemAtCell(ItemTopLeftCoordinate);
	if (!result.Found)
	{
		return;
	}
	int32 itemAmount = result.Item.DynamicParameters.Amount;
	if(itemAmount <= 1)
	{
		return;
	}
	FInventoryItemStatic staticData = CreateStaticItemData(result.Item.ID);
	FCellFitResult spaceResult = FindSpaceForItem(staticData.Dimensions, staticData.Tags);
	if (!spaceResult.Fits)
	{
		return;
	}
    int32 amountToAdd = itemAmount % 2 == 0 ? itemAmount / 2 : (itemAmount / 2) + 1;
    int32 amountToUpdate = itemAmount - amountToAdd;

    FInventoryItem newItem = result.Item;
    SetItemAmount(newItem, amountToAdd);

    if (!AddItemAtSpecificCell(newItem, spaceResult.CellsNeeded.Array()[0], false, spaceResult.CellsNeeded.Array()))
    {
        return;
    }

    SetItemAmount(result.Item, amountToUpdate);
    Inventory->UpdateItem(result.ArrayIndex, result.Item, true);

}

void UInventoryController::OnItemUseRequested(int32 ItemTopLeftCoordinate)
{
	FFindItemResult result = FindItemAtCell(ItemTopLeftCoordinate);
	if (!result.Found)
	{
		return;
	}
	FGameplayTagContainer TagContainer = CreateStaticItemData(result.Item.ID).Tags;
	if (TagContainer.HasTag(EquipableTag))
	{
		OnTryToEquipItemRequested.Broadcast(Inventory->GetID(), result.Item, TagContainer);
	}

}

void UInventoryController::OnItemRemoveRequested(int32 ItemTopLeftCoordinate)
{
	RemoveItemAtCell(ItemTopLeftCoordinate);
}

void UInventoryController::OnTryToEquipItem(int32 ItemTopLeftCoordinate)
{
	OnItemUseRequested(ItemTopLeftCoordinate);
}

void UInventoryController::OnDragCancelRequested(const FInventoryItem& Item, FName InventoryID)
{
	OnItemAddRequested.Broadcast(InventoryID, Item.DynamicParameters.TopLeftCoordinate, Item);
}
void UInventoryController::OnItemDroppedOnGrid(FInventoryItem& Item, int32 CellDroppedOn, FName PreviousInventory)
{
	if(CellDroppedOn < 0)
	{
		OnItemAddRequested.Broadcast(PreviousInventory, Item.DynamicParameters.TopLeftCoordinate, Item);
		return;
	}
	FFindItemResult result = FindItemAtCell(CellDroppedOn);
	if (!result.Found)
	{
		AddItemAtSpecificCell(Item, CellDroppedOn, true, TArray<int32>());
		return;
	}
	if (!ItemsAreTheSame(result.Item, Item))
	{
		OnItemAddRequested.Broadcast(PreviousInventory, Item.DynamicParameters.TopLeftCoordinate, Item);
		return;
	}
	FAddItemResult addResult = TryToAddToStack(Item, result.Item, result.ArrayIndex);
	if (addResult.Success)
	{
		return;
	}
	SetItemAmount(Item, addResult.AmountLeft);
	OnItemAddRequested.Broadcast(PreviousInventory, Item.DynamicParameters.TopLeftCoordinate, Item);
}

void UInventoryController::OnDragParametersRequested(int32 Cell, FName ItemID)
{
	FInventoryItemStatic staticData = CreateStaticItemData(ItemID);
	FCellFitResult result = CalculateDragResults(Cell, staticData.Dimensions, ItemID, staticData.Tags);
	Inventory->OnDragParametersReceived.Broadcast(result.Fits, result.CellsNeeded);
}

void UInventoryController::OnItemSizeRequested(FName ItemID)
{
	Inventory->OnItemSizeReceived.Broadcast(CreateStaticItemData(ItemID).Dimensions);
}

void UInventoryController::OnItemFrontendRequested(const FInventoryItem& Item)
{
	FInventoryItemStatic staticData = CreateStaticItemData(Item.ID);
	FInventoryItemFrontend itemFrontendData = FInventoryItemFrontend(staticData.Name, staticData.Description, staticData.Icon, staticData.Tags, staticData.Dimensions, Item);
	Inventory->OnItemFrontendReceived.Broadcast(itemFrontendData);
}

void UInventoryController::OnInventoryClose(FName InventoryID)
{
	OnInventoryCloseRequested.Broadcast(InventoryID);
}













