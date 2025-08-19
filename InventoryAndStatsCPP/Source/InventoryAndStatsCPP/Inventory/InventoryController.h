// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InventoryInterface.h"
#include "InventoryItemStatic.h"
#include "InventoryAndStatsCPP/Saving/SaveInventoryData.h"
#include "GameplayTagsManager.h"
#include "InventoryController.generated.h"

DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnItemAddRequested, FName InventoryID, int32 Cell, FInventoryItem Item)
DECLARE_MULTICAST_DELEGATE_ThreeParams(FOnTryToEquipItemRequested, FName InventoryID, FInventoryItem Item, FGameplayTagContainer ItemTags)
DECLARE_MULTICAST_DELEGATE_OneParam(FOnInventoryCloseRequested, FName InventoryID)
/**
 * 
 */

struct FCellFitResult
{
	bool Fits;
	TSet<int32> CellsNeeded;

};
struct FFindItemResult
{
	bool Found;
	FInventoryItem Item;
	int32 ArrayIndex;
};
UCLASS()
class INVENTORYANDSTATSCPP_API UInventoryController : public UObject, public IInventoryInterface
{
	GENERATED_BODY()

public:
	virtual FAddItemResult AddItemToInventory(FName InventoryName, FInventoryItem Item) override;

	virtual FRemoveItemResult RemoveItemFromInventory(FName InventoryName, FName Item, int32 Amount, bool AllowPartial) override;

	virtual bool HasItemInInventory(FName InventoryName, FName Item, int32 Amount) override;

	virtual UInventory* RequestInventory(FName InventoryName) override;
public:
	void AddItemToCell(FInventoryItem& Item, int32 Cell) { AddItemAtSpecificCell(Item, Cell, true, TArray<int32>()); };
public:
	UInventory* InitializeInventoryController(FName InventoryID, TSubclassOf<UInventory> InventoryClass, bool UseSaveData, FSaveInventoryData& SaveData, UDataTable* DataTable, FGameplayTag Equipable);
	FSaveInventoryData GetSaveData() const;
private:
	FInventoryItemStatic CreateStaticItemData(FName ItemID);

	TSet<int32> CalculateCellsNeededForItem(int32 Cell, FIntPoint ItemSize) const;

	void SetAndSortFreeCells(TSet<int32>);

	bool CheckGameplayTagCompatibility(FGameplayTagContainer ItemTags) const;

	int32 GetItemCount(FName ItemID) const;

	FInventoryItem& SetItemAmount(FInventoryItem& Item, int32 Amount);

	FRemoveItemResult RemoveItemByID(FName ItemID, int32 Amount, bool AllowPartial = false);

	bool ItemsAreTheSame(const FInventoryItem& ItemA, const FInventoryItem& ItemB) const;

	FCellFitResult CheckIfItemCanFitIntoCell(int32 Cell, FIntPoint ItemSize,FGameplayTagContainer ItemTags) const;

	TMap<FGameplayTag, float> MergeStatsModifiers(const TMap<FGameplayTag, float>& Stats1, const TMap<FGameplayTag, float>& Stats2) const;

	FFindItemResult FindItemAtCell(int32 Cell) const;

	FCellFitResult CalculateDragResults(int32 Cell, FIntPoint ItemSize, FName DraggedItemID, FGameplayTagContainer ItemTags);

	FAddItemResult TryToAddToStack(FInventoryItem& Item, FInventoryItem& SameItem,int32 SameItemArrayIndex);

	FAddItemResult SearchAndTryToAddToStack(FInventoryItem& Item);

	FInventoryItem& SetItemTopLeftCoordinate(FInventoryItem& Item, int32 NewTopLeftCoordinate);

	bool AddItemAtSpecificCell(FInventoryItem& Item, int32 Cell, bool CheckAndGenerateCells, TArray<int32> ValidCells);

	FInventoryItem& MergeItemModifiers(FInventoryItem& Item);

	FCellFitResult FindSpaceForItem(FIntPoint ItemSize, FGameplayTagContainer ItemTags);

	FAddItemResult TryToAddItem(FInventoryItem& Item, bool TryToStack);

	bool RemoveItemAtCell(int32 Cell);

	
private: //Assigned Functions
	UFUNCTION()
	void OnItemDivideRequested(int32 ItemTopLeftCoordinate);
	UFUNCTION()
	void OnItemUseRequested(int32 ItemTopLeftCoordinate);
	UFUNCTION()
	void OnItemRemoveRequested(int32 ItemTopLeftCoordinate);
	UFUNCTION()
	void OnTryToEquipItem(int32 ItemTopLeftCoordinate);
	UFUNCTION()
	void OnDragCancelRequested(const FInventoryItem& Item, FName InventoryID);
	UFUNCTION()
	void OnItemDroppedOnGrid(FInventoryItem& Item, int32 CellDroppedOn, FName PreviousInventory);
	UFUNCTION()
	void OnDragParametersRequested(int32 Cell, FName ItemID);
	UFUNCTION()
	void OnItemSizeRequested(FName ItemID);
	UFUNCTION()
	void OnItemFrontendRequested(const FInventoryItem& Item);
	UFUNCTION()
	void OnInventoryClose(FName InventoryID);

	

public:
	UPROPERTY()
	UInventory* Inventory;

public:
	FOnItemAddRequested OnItemAddRequested;
	FOnTryToEquipItemRequested OnTryToEquipItemRequested;
	FOnInventoryCloseRequested OnInventoryCloseRequested;
private:
	UPROPERTY()
	UDataTable* InventoryDataTable;
	UPROPERTY()
	FGameplayTag EquipableTag;

	TMap<FName, FInventoryItemStatic> StaticData;
	TSet<int32> FreeCells;

	
};
