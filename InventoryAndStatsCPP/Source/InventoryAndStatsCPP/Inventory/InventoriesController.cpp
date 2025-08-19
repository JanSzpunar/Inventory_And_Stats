// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoriesController.h"
#include "Inventories.h"
#include "InventoryAndStatsCPP/Saving/GameInstanceInterface.h"
#include "InventoryAndStatsCPP/HUD/CharacterPanelHUDInterface.h"
#include "InventoryAndStatsCPP/HUD/InventoryHUDInterface.h"
#include "InventoryAndStatsCPP/Saving/SaveGameInventoryInterface.h"
#include "GameFramework/HUD.h"
#include "InventoryAndStatsCPP/CharactersController/CharactersControllerInterface.h"

// Sets default values for this component's properties
UInventoriesController::UInventoriesController()
{
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UInventoriesController::BeginPlay()
{
	Super::BeginPlay();
	if(Inventories == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Inventories data asset is not set in InventoriesController, Inventories will not work"));
		
	}
	if (InventoryDataTable == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Inventory data table is not set in InventoriesController, Inventories will not work"));
		
	}
	else
	{
		for (const TPair<FName, uint8*>& Pair : InventoryDataTable->GetRowMap())
		{
			const FName& RowName = Pair.Key;
			FInventoryItemStatic* Row = reinterpret_cast<FInventoryItemStatic*>(Pair.Value);

			if (!Row)
			{
				continue;
			}

			if (!Row->Icon)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Icon not set for row '%s'"), *RowName.ToString()));
			}

			if (Row->Dimensions.X <= 0 || Row->Dimensions.Y <= 0)
			{
				GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString::Printf(TEXT("Invalid dimensions for row '%s'"), *RowName.ToString()));
			}
		}
	}
	IGameInstanceInterface* Interface = Cast<IGameInstanceInterface>(GetWorld()->GetGameInstance());
	if (Interface)
	{
		Interface->AddSaveGameComponentToSet(this);
	}

	// ...
	
}

void UInventoriesController::SaveGame()
{
	ISaveGameInventoryInterface* giInterface = Cast<ISaveGameInventoryInterface>(GetWorld()->GetGameInstance());
	if (!giInterface)
	{
		return;
	}
	for (const TPair<FName, UInventoryController*>& Pair : InventoryControllers)
	{
		if (Pair.Value)
		{
			SaveData.Add(Pair.Key, Pair.Value->GetSaveData());
			
		}
	}
	giInterface->SaveInventory(SaveData);
}

void UInventoriesController::LoadGame()
{
	ISaveGameInventoryInterface* giInterface = Cast<ISaveGameInventoryInterface>(GetWorld()->GetGameInstance());
	if (!giInterface)
	{
		return;
	}
	SaveData = giInterface->LoadInventory();
}

FAddItemResult UInventoriesController::AddItemToInventory(FName Inventory, FInventoryItem Item)
{
	UInventoryController* inventoryController;
	UInventory* inventory;
	InitializeInventory(Inventory, inventoryController, inventory);
	FAddItemResult addItemResult = inventoryController->AddItemToInventory(Inventory, Item);
	SaveData.Add(Inventory, inventoryController->GetSaveData());
	return addItemResult;
}

FRemoveItemResult UInventoriesController::RemoveItemFromInventory(FName Inventory, FName Item, int32 Amount, bool AllowPartial)
{
	UInventoryController* inventoryController;
	UInventory* inventory;
	InitializeInventory(Inventory, inventoryController, inventory);
	FRemoveItemResult removeItemResult = inventoryController->RemoveItemFromInventory(Inventory, Item, Amount, AllowPartial);
	SaveData.Add(Inventory, inventoryController->GetSaveData());
	return removeItemResult;

}

bool UInventoriesController::HasItemInInventory(FName Inventory, FName Item, int32 Amount)
{
	UInventoryController* inventoryController;
	UInventory* inventory;
	InitializeInventory(Inventory, inventoryController, inventory);
	return inventoryController->HasItemInInventory(Inventory, Item, Amount);
}

UInventory* UInventoriesController::RequestInventory(FName Inventory)
{
	UInventoryController* inventoryController;
	UInventory* inventory;
	InitializeInventory(Inventory, inventoryController, inventory);
	return inventory;
}

UEquipmentNotifier* UInventoriesController::RequestEquipmentNotifier(FGameplayTag Tag, int32 PlayerIndex)
{
	FName ID;
	FName IDWithIndex;
	CreatePlayersEquipmentsID(Tag, PlayerIndex, ID, IDWithIndex);
	if (UEquipmentNotifier* const* EquipmentNotifier = EquipmentNotifiers.Find(IDWithIndex))
	{
		return *EquipmentNotifier;
	}
	EquipmentNotifiers.Remove(IDWithIndex);
	UEquipmentNotifier* EquipmentNotifier = NewObject<UEquipmentNotifier>(this, UEquipmentNotifier::StaticClass());
	EquipmentNotifiers.Add(IDWithIndex, EquipmentNotifier);
	return EquipmentNotifier;
}

UEquipment* UInventoriesController::RequestEquipmentObject(FGameplayTag Tag, int32 PlayerIndex)
{
	FName ID;
	FName IDWithIndex;
	CreatePlayersEquipmentsID(Tag, PlayerIndex, ID, IDWithIndex);

	UInventoryController* InventoryController;
	UEquipment* Equipment;
	if (InventoryControllers.Contains(IDWithIndex))
	{
		if (InventoryControllers[IDWithIndex] && InventoryControllers[IDWithIndex]->Inventory)
		{
			InventoryController = InventoryControllers[IDWithIndex];
			Equipment = Cast<UEquipment>(InventoryControllers[IDWithIndex]->Inventory);
			return Equipment;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Existing InventoryController is invalid or missing Equipment for '%s'. Reinitializing."), *IDWithIndex.ToString());
			InventoryControllers.Remove(IDWithIndex);
			InventoryControllers.Remove(ID);
		}
	}

	TSubclassOf<UInventory> InventoryClass;
	if (!Inventories->FindValidInventoryClass(ID, InventoryClass))
	{
		UE_LOG(LogTemp, Error, TEXT("Wrong Equipment Tag requested for '%s'."), *Tag.GetTagName().ToString());
		return nullptr;
	}
	InventoryController = NewObject<UInventoryController>(this, UInventoryController::StaticClass());
	InventoryController->OnInventoryCloseRequested.AddUObject(this, &UInventoriesController::OnInventoryCloseRequested);
	InventoryController->OnItemAddRequested.AddUObject(this, &UInventoriesController::OnItemAddRequested);
	InventoryController->OnTryToEquipItemRequested.AddUObject(this, &UInventoriesController::OnTryToEquipItemRequested);

	const FSaveInventoryData* FoundSaveData = SaveData.Find(IDWithIndex);
	bool HasSaveData = FoundSaveData != nullptr;
	FSaveInventoryData SaveDataToUse = HasSaveData ? *FoundSaveData : FSaveInventoryData();

	Equipment = Cast<UEquipment>(InventoryController->InitializeInventoryController(IDWithIndex, InventoryClass, HasSaveData, SaveDataToUse, InventoryDataTable, EquipableTag));
	InventoryControllers.Add(IDWithIndex, InventoryController);
	Equipment->OnEquipedItemsDataRequested.AddUObject(this, &UInventoriesController::OnEquipedItemsDataRequested);

	for (const TPair<FGameplayTag, FString>& Pair : Inventories->Equipments)
	{
		if (FName(Pair.Value) == ID)
		{
			Equipment->SetEquipableTag(Pair.Key);
		}
	}
	Equipments.AddUnique(IDWithIndex);
	return Equipment;

}

/////////////////////Internal///////////////////////

void UInventoriesController::InitializeInventory(FName InventoryID, UInventoryController*& InventoryController, UInventory*& Inventory)
{
	InventoryController = nullptr;
	Inventory = nullptr;
	if (InventoryControllers.Contains(InventoryID))
	{
		if (InventoryControllers[InventoryID] && InventoryControllers[InventoryID]->Inventory)
		{
			InventoryController = InventoryControllers[InventoryID];
			Inventory = InventoryControllers[InventoryID]->Inventory;
			return;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Existing InventoryController is invalid or missing Inventory for '%s'. Reinitializing."), *InventoryID.ToString());
			InventoryControllers.Remove(InventoryID);
		}
	}
	TSubclassOf<UInventory> InventoryClass;
	if (!Inventories->FindValidInventoryClass(InventoryID, InventoryClass))
	{
		UE_LOG(LogTemp, Error, TEXT("Wrong inventory ID for: '%s'. Reinitializing."), *InventoryID.ToString());
		return;
	}

	InventoryController = NewObject<UInventoryController>(this, UInventoryController::StaticClass());
	InventoryController->OnInventoryCloseRequested.AddUObject(this, &UInventoriesController::OnInventoryCloseRequested);
	InventoryController->OnItemAddRequested.AddUObject(this, &UInventoriesController::OnItemAddRequested);
	InventoryController->OnTryToEquipItemRequested.AddUObject(this, &UInventoriesController::OnTryToEquipItemRequested);
	const FSaveInventoryData* FoundSaveData = SaveData.Find(InventoryID);
	bool HasSaveData = FoundSaveData != nullptr;
	FSaveInventoryData SaveDataToUse = HasSaveData ? *FoundSaveData : FSaveInventoryData();

	Inventory = InventoryController->InitializeInventoryController(InventoryID, InventoryClass, HasSaveData, SaveDataToUse, InventoryDataTable, EquipableTag);
	InventoryControllers.Add(InventoryID, InventoryController);

}

void UInventoriesController::CreatePlayersEquipmentsID(FGameplayTag Tag, int32 PlayerIndex, FName& ID, FName& IDWithIndex)
{
	int32 PlayerIndexTemp = PlayerIndex;
	if (PlayerIndexTemp < 0)
	{
		ICharactersControllerInterface* PcInterface = Cast<ICharactersControllerInterface>(GetWorld()->GetFirstPlayerController());
		if (!PcInterface)
		{
			ID = "";
			IDWithIndex = "";
			return;
		}
		PlayerIndexTemp = PcInterface->GetAllControllableCharacters().Find(PcInterface->GetCurrentlyControlledCharacter());
	}
	if (FString* EquipmentsData = Inventories->Equipments.Find(Tag))
	{
		FString EquipmentBase = *EquipmentsData;
		ID = FName(EquipmentBase);
		IDWithIndex = FName(EquipmentBase + FString::FromInt(PlayerIndexTemp));
	}
	else
	{
		ID = "";
		IDWithIndex = "";
		return;
	}
}
/////////////////////////////////////Assigned Functions////////////////////////////////////

void UInventoriesController::OnInventoryCloseRequested(FName Name)
{
	AHUD* HUD = GetWorld()->GetFirstPlayerController()->GetHUD();
	if ((HUD && HUD->GetClass()->ImplementsInterface(UInventoryHUDInterface::StaticClass())) == false)
	{
		return;
	}
	if (UInventoryController** FoundInventory = InventoryControllers.Find(Name))
	{
		if (*FoundInventory)
		{
			SaveData.Add(Name, (*FoundInventory)->GetSaveData());
		}
	}
	IInventoryHUDInterface::Execute_CloseInventory(HUD, Name);
	InventoryControllers.Remove(Name);
	if (!Equipments.Contains(Name))
	{
		return;
	}
	for (const FName& EquipmentName : Equipments)
	{
		if (UInventoryController** FoundEquipment = InventoryControllers.Find(EquipmentName))
		{
			if (*FoundEquipment)
			{
				SaveData.Add(Name, (*FoundEquipment)->GetSaveData());
			}
			InventoryControllers.Remove(EquipmentName);
		}
	}
	Equipments.Empty();
}

void UInventoriesController::OnItemAddRequested(FName Inventory, int32 Cell, FInventoryItem Item)
{
	if (RequestInventory(Inventory))
	{
		UInventoryController* ControllerPtr = *InventoryControllers.Find(Inventory);
		ControllerPtr->AddItemToCell(Item, Cell);
	}
}

void UInventoriesController::OnTryToEquipItemRequested(FName Inventory, FInventoryItem Item, FGameplayTagContainer Tags)
{
	if (Inventory == "Player")
	{
		for (const TPair<FGameplayTag, FString>& Pair : Inventories->Equipments)
		{
			FAddItemResult AddItemResult = AddItemToInventory(RequestEquipmentObject(Pair.Key, -1)->GetID(), Item);
			if (AddItemResult.Success)
			{
				UInventory* PlayerInventory = RequestInventory("Player");
				if (PlayerInventory)
				{
					PlayerInventory->OnItemRemoveRequested.Broadcast(Item.DynamicParameters.TopLeftCoordinate);
				}

			}
		}
	}
	else
	{
		FAddItemResult AddItemResult = AddItemToInventory("Player", Item);
		if (AddItemResult.Success)
		{
			UInventory* PlayerInventory = RequestInventory(Inventory);
			if (PlayerInventory)
			{
				PlayerInventory->OnItemRemoveRequested.Broadcast(Item.DynamicParameters.TopLeftCoordinate);
			}
			
		}
	}
}

void UInventoriesController::OnEquipedItemsDataRequested(UEquipment* Requester)
{
	FName ID = Requester->GetID();
	
	if (UEquipmentNotifier* const* EquipmentNotifier = EquipmentNotifiers.Find(ID))
	{
		FString IDStr = ID.ToString();
		int32 RequesterIndexTemp = FCString::Atoi(*IDStr.Mid(IDStr.Len() - 1, 1));
		TMap<FGameplayTag, FInventoryItem> EquipedItems;
		for (const TPair<FGameplayTag, FString>& Pair : Inventories->Equipments)
		{
			UEquipment* Equipment = RequestEquipmentObject(Pair.Key, RequesterIndexTemp);
			const TArray<FInventoryItem> Items = Equipment->GetItems();
			if (Items.IsEmpty())
			{
				continue;
			}
			EquipedItems.Add(Pair.Key, Items[0]);
		}
		TMap<FGameplayTag, float> Bonus;
		for (const TPair<FGameplayTag, FInventoryItem>& ItemsPair : EquipedItems)
		{
			for (const TPair<FGameplayTag, float>& BonusPair : ItemsPair.Value.DynamicParameters.StatBonus)
			{
				Bonus.Add(BonusPair.Key, BonusPair.Value);
			}
		}
		(*EquipmentNotifier)->OnEquipmentChanged.Broadcast(FEquipmentBonusPayload(Bonus));
	}
}







