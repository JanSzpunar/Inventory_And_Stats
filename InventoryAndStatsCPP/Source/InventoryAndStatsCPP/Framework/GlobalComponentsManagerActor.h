// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InventoryAndStatsCPP/Inventory/InventoriesController.h"
#include "GlobalComponentsManagerActor.generated.h"

UCLASS(Blueprintable, Abstract)
class INVENTORYANDSTATSCPP_API AGlobalComponentsManagerActor : public AActor, public IInventoryInterface, public IEquipmentInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AGlobalComponentsManagerActor();
public:
	virtual FAddItemResult AddItemToInventory(FName Inventory, FInventoryItem Item) override;

	virtual FRemoveItemResult RemoveItemFromInventory(FName Inventory, FName Item, int32 Amount, bool AllowPartial) override;

	virtual bool HasItemInInventory(FName Inventory, FName Item, int32 Amount) override;

	virtual UInventory* RequestInventory(FName Inventory) override;

	virtual UEquipmentNotifier* RequestEquipmentNotifier(FGameplayTag Tag, int32 PlayerIndex) override;

	virtual UEquipment* RequestEquipmentObject(FGameplayTag Tag, int32 PlayerIndex) override;


public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Inventory")
	UInventoriesController* InventoriesController;
};
