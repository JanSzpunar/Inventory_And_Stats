// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryController.h"
#include "EquipmentInterface.h"
#include "InventoryAndStatsCPP/Saving/SaveGameInterface.h"
#include "InventoryAndStatsCPP/Saving/SaveGameInventoryInterface.h"
#include "InventoriesController.generated.h"

class UInventories;

UCLASS(ClassGroup=(Custom))
class INVENTORYANDSTATSCPP_API UInventoriesController final : public UActorComponent, public IInventoryInterface, public IEquipmentInterface, public ISaveGameInterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoriesController();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	virtual FAddItemResult AddItemToInventory(FName Inventory, FInventoryItem Item) override;

	virtual FRemoveItemResult RemoveItemFromInventory(FName Inventory, FName Item, int32 Amount, bool AllowPartial) override;

	virtual bool HasItemInInventory(FName Inventory, FName Item, int32 Amount) override;

	virtual UInventory* RequestInventory(FName Inventory) override;

	virtual UEquipmentNotifier* RequestEquipmentNotifier(FGameplayTag Tag, int32 PlayerIndex) override;

	virtual UEquipment* RequestEquipmentObject(FGameplayTag Tag, int32 PlayerIndex) override;

public:
	virtual void SaveGame() override;
	virtual void LoadGame() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UInventories* Inventories;
	UPROPERTY(EditAnywhere,BlueprintReadOnly , meta = (RowType = "/Script/InventoryAndStatsCPP.FInventoryItemStatic"))
	UDataTable* InventoryDataTable;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTag EquipableTag;
private:
    UPROPERTY(Transient)
    TMap<FName, FSaveInventoryData> SaveData;

    UPROPERTY(Transient)
    TMap<FName, UInventoryController*> InventoryControllers;

    UPROPERTY(Transient)
    TArray<FName> Equipments;

    UPROPERTY(Transient)
    TMap<FName, UEquipmentNotifier*> EquipmentNotifiers;

private:
	void InitializeInventory(FName InventoryName, UInventoryController*& InventoryController, UInventory*& Inventory);
	void CreatePlayersEquipmentsID(FGameplayTag Tag, int32 PlayerIndex, FName& ID, FName& IDWithIndex);

private:
	void OnInventoryCloseRequested(FName Name);
	void OnItemAddRequested(FName Inventory, int32 Cell, FInventoryItem Item);
	void OnTryToEquipItemRequested(FName Inventory, FInventoryItem Item, FGameplayTagContainer Tags);
	void OnEquipedItemsDataRequested(UEquipment* Requester);

};