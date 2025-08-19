// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GlobalComponentsManagerActor.h"
#include "GameFramework/GameStateBase.h"
#include "GameState_InventoryAndStats.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class INVENTORYANDSTATSCPP_API AGameState_InventoryAndStats : public AGameStateBase, public IInventoryInterface, public IEquipmentInterface
{
	GENERATED_BODY()
public:
	AGameState_InventoryAndStats();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:
	virtual FAddItemResult AddItemToInventory(FName Inventory, FInventoryItem Item) override;

	virtual FRemoveItemResult RemoveItemFromInventory(FName Inventory, FName Item, int32 Amount, bool AllowPartial) override;

	virtual bool HasItemInInventory(FName Inventory, FName Item, int32 Amount) override;

	virtual UInventory* RequestInventory(FName Inventory) override;

	virtual UEquipmentNotifier* RequestEquipmentNotifier(FGameplayTag Tag, int32 PlayerIndex) override;

	virtual UEquipment* RequestEquipmentObject(FGameplayTag Tag, int32 PlayerIndex) override;
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Global")
	TSubclassOf<AGlobalComponentsManagerActor> GlobalManagerClass;
private:
	FActorSpawnParameters SetSpawnSpawnParams();
	UPROPERTY()
	AGlobalComponentsManagerActor* Manager;

};
