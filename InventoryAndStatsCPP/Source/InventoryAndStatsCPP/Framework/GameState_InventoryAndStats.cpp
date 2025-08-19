// Fill out your copyright notice in the Description page of Project Settings.


#include "GameState_InventoryAndStats.h"

AGameState_InventoryAndStats::AGameState_InventoryAndStats()
{
	
}
FActorSpawnParameters AGameState_InventoryAndStats::SetSpawnSpawnParams()
{
	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	return SpawnParams;
}

void AGameState_InventoryAndStats::BeginPlay()
{
	Super::BeginPlay();
	FActorSpawnParameters SpawnParams = SetSpawnSpawnParams();
	if(GlobalManagerClass == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("GlobalManagerClass is not set in AGameState_InventoryAndStats!"));
		return;
	}
	Manager = GetWorld()->SpawnActor<AGlobalComponentsManagerActor>(GlobalManagerClass, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParams);
}

FAddItemResult AGameState_InventoryAndStats::AddItemToInventory(FName Inventory, FInventoryItem Item)
{
	return Manager-> AddItemToInventory(Inventory,Item);
}

FRemoveItemResult AGameState_InventoryAndStats::RemoveItemFromInventory(FName Inventory, FName Item, int32 Amount, bool AllowPartial)
{
	return Manager->RemoveItemFromInventory(Inventory, Item, Amount, AllowPartial);
}

bool AGameState_InventoryAndStats::HasItemInInventory(FName Inventory, FName Item, int32 Amount)
{
	return Manager->HasItemInInventory(Inventory,Item,Amount);
}

UInventory* AGameState_InventoryAndStats::RequestInventory(FName Inventory)
{
	return Manager->RequestInventory(Inventory);
}

UEquipmentNotifier* AGameState_InventoryAndStats::RequestEquipmentNotifier(FGameplayTag Tag, int32 PlayerIndex)
{
	return Manager->RequestEquipmentNotifier(Tag, PlayerIndex);
}

UEquipment* AGameState_InventoryAndStats::RequestEquipmentObject(FGameplayTag Tag, int32 PlayerIndex)
{
	return Manager->RequestEquipmentObject(Tag, PlayerIndex);
}


