// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InventoryItem.h"
#include "InventoryItemFrontend.h"
#include "Inventory.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemDivideRequested, int32, ItemTopLeftCoordinate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemUseRequested, int32, ItemTopLeftCoordinate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemRemoveRequested, int32, ItemTopLeftCoordinate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTryToEquipItem, int32, ItemTopLeftCoordinate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDragCancelRequested, const FInventoryItem&, Item, FName, PreviousInventoryID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCellPopulated, const FInventoryItem&, Item);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCellCleared, int32, ItemTopLeftCoordinate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCellUpdated, const FInventoryItem&, Item);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnItemDroppedOnGrid, FInventoryItem&, Item, int32, CellDroppedOn, FName, InventoryID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDragParametersRequested, int32, Cell, FName, ItemID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemSizeRequested, FName, ItemID);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemFrontendRequested, const FInventoryItem&, Item);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDragParametersReceived, bool, CanFit, TSet<int32>, Cells);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemSizeReceived, FIntPoint, Size);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemFrontendReceived, const FInventoryItemFrontend&, ItemFrontend);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInventoryClose, FName, InventoryID);
/**
 * 
 */
UCLASS(Abstract, Blueprintable)
class INVENTORYANDSTATSCPP_API UInventory : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TArray<FInventoryItem> Items;

	UPROPERTY(EditDefaultsOnly)
	FText Title;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer AvailableTags;

	UPROPERTY(EditDefaultsOnly)
	FIntPoint Size = FIntPoint(10,10);
private:
	FName ID;
public:
	UPROPERTY(BlueprintAssignable, Category = "Inventory|UMG")
	FOnDragParametersReceived OnDragParametersReceived;

	UPROPERTY(BlueprintAssignable, Category = "Inventory|UMG")
	FOnItemSizeReceived OnItemSizeReceived;

	UPROPERTY(BlueprintAssignable, Category = "Inventory|UMG")
	FOnItemFrontendReceived OnItemFrontendReceived;

	UPROPERTY(BlueprintAssignable, Category = "Inventory|UMG")
	FOnCellPopulated OnCellPopulated;

	UPROPERTY(BlueprintAssignable, Category = "Inventory|UMG")
	FOnCellCleared OnCellCleared;

	UPROPERTY(BlueprintAssignable, Category = "Inventory|UMG")
	FOnCellUpdated OnCellUpdated;

	UPROPERTY()
	FOnItemDivideRequested OnItemDivideRequested;

	UPROPERTY()
	FOnItemUseRequested OnItemUseRequested;

	UPROPERTY()
	FOnItemRemoveRequested OnItemRemoveRequested;

	UPROPERTY()
	FOnTryToEquipItem OnTryToEquipItem;

	UPROPERTY()
	FOnDragCancelRequested OnDragCancelRequested;

	UPROPERTY()
	FOnItemDroppedOnGrid OnItemDroppedOnGrid;

	UPROPERTY()
	FOnDragParametersRequested OnDragParametersRequested;

	UPROPERTY()
	FOnItemSizeRequested OnItemSizeRequested;

	UPROPERTY()
	FOnItemFrontendRequested OnItemFrontendRequested;

	UPROPERTY()
	FOnInventoryClose OnInventoryClose;



public:
	UFUNCTION(BlueprintCallable, Category = "Inventory|UMG")
	void RequestItemDivide(int32 ItemTopLeftCoordinate);

	UFUNCTION(BlueprintCallable, Category = "Inventory|UMG")
	void RequestItemUse(int32 ItemTopLeftCoordinate);

	UFUNCTION(BlueprintCallable, Category = "Inventory|UMG")
	void RequestItemRemove(int32 ItemTopLeftCoordinate);

	UFUNCTION(BlueprintCallable, Category = "Inventory|UMG")
	void RequestItemEquip(int32 ItemTopLeftCoordinate);

	UFUNCTION(BlueprintCallable, Category = "Inventory|UMG")
	void RequestDragCancel(const FInventoryItem& Item, FName InventoryID);

	UFUNCTION(BlueprintCallable, Category = "Inventory|UMG")
	void RequestItemDropOnGrid(FInventoryItem Item,int32 CellDroppedOn, FName InventoryID);

	UFUNCTION(BlueprintCallable, Category = "Inventory|UMG")
	void RequestDragParameters(int32 Cell, FName ItemID);

	UFUNCTION(BlueprintCallable, Category = "Inventory|UMG")
	void RequestItemSize(FName ItemID);

	UFUNCTION(BlueprintCallable, Category = "Inventory|UMG")
	void RequestItemFrontend(const FInventoryItem& Item);

	UFUNCTION(BlueprintCallable, Category = "Inventory|UMG")
	void RequestCloseInventory(FName InventoryID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Inventory|UMG")
	FText GetTitle() const { return Title; };

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Inventory|UMG")
	FIntPoint GetSize() const { return Size; };

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Inventory|UMG")
	TArray<FInventoryItem> GetItems() const { return Items; };

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Inventory|UMG")
	FName GetID() const { return ID; };
	
public:
	virtual void AddItem(const FInventoryItem& Item, bool Notify) { Items.Add(Item); OnCellPopulated.Broadcast(Item); };
	virtual void RemoveItem(int32 Index, int32 Cell, bool Notify) { Items.RemoveAt(Index); OnCellCleared.Broadcast(Cell); };
	virtual void UpdateItem(int32 Index, const FInventoryItem& Item, bool Notify) { Items[Index] = Item; OnCellUpdated.Broadcast(Item); };
public:
	void SetID(FName NewID) { ID = NewID; };
	void ClearItems() { Items.Empty(); };


};
