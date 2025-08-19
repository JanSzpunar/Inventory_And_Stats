// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Inventory.h"
#include "Equipment.generated.h"

/**
 * 
 */
DECLARE_MULTICAST_DELEGATE_OneParam(FOnEquipedItemsDataRequested, UEquipment* Requester)

UCLASS(Abstract, Blueprintable)
class INVENTORYANDSTATSCPP_API UEquipment : public UInventory
{
	GENERATED_BODY()
	
public:
	virtual void AddItem(const FInventoryItem& Item, bool Notify) override { Super::AddItem(Item, Notify); if (Notify) { OnEquipedItemsDataRequested.Broadcast(this); } }
	virtual void RemoveItem(int32 ArrayIndex, int32 Cell, bool Notify) override { Super::RemoveItem(ArrayIndex, Cell, Notify); if (Notify) { OnEquipedItemsDataRequested.Broadcast(this); } }
public:
	void SetEquipableTag(FGameplayTag NewEquipableTag) { EquipableTag = NewEquipableTag; }
public:
	FOnEquipedItemsDataRequested OnEquipedItemsDataRequested;
private:
	FGameplayTag EquipableTag;
};
