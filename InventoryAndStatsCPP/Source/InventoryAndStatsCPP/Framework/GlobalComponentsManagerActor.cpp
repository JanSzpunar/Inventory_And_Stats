// Fill out your copyright notice in the Description page of Project Settings.


#include "GlobalComponentsManagerActor.h"

// Sets default values
AGlobalComponentsManagerActor::AGlobalComponentsManagerActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	InventoriesController = CreateDefaultSubobject<UInventoriesController>(TEXT("InventoriesController"));
}

FAddItemResult AGlobalComponentsManagerActor::AddItemToInventory(FName Inventory, FInventoryItem Item)
{
	return InventoriesController->AddItemToInventory(Inventory, Item);
}

FRemoveItemResult AGlobalComponentsManagerActor::RemoveItemFromInventory(FName Inventory, FName Item, int32 Amount, bool AllowPartial)
{
	return InventoriesController->RemoveItemFromInventory(Inventory, Item, Amount, AllowPartial);
}

bool AGlobalComponentsManagerActor::HasItemInInventory(FName Inventory, FName Item, int32 Amount)
{
	return InventoriesController->HasItemInInventory(Inventory, Item, Amount);
}

UInventory* AGlobalComponentsManagerActor::RequestInventory(FName Inventory)
{
	return InventoriesController->RequestInventory(Inventory);
}

UEquipmentNotifier* AGlobalComponentsManagerActor::RequestEquipmentNotifier(FGameplayTag Tag, int32 PlayerIndex)
{
	return InventoriesController -> RequestEquipmentNotifier(Tag, PlayerIndex);
}

UEquipment* AGlobalComponentsManagerActor::RequestEquipmentObject(FGameplayTag Tag, int32 PlayerIndex)
{
	return InventoriesController->RequestEquipmentObject(Tag, PlayerIndex);
}

