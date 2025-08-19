// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory.h"

void UInventory::RequestItemDivide(int32 ItemTopLeftCoordinate)
{
	OnItemDivideRequested.Broadcast(ItemTopLeftCoordinate);
}

void UInventory::RequestItemUse(int32 ItemTopLeftCoordinate)
{
	OnItemUseRequested.Broadcast(ItemTopLeftCoordinate);
}

void UInventory::RequestItemRemove(int32 ItemTopLeftCoordinate)
{
	OnItemRemoveRequested.Broadcast(ItemTopLeftCoordinate);
}

void UInventory::RequestItemEquip(int32 ItemTopLeftCoordinate)
{
	OnTryToEquipItem.Broadcast(ItemTopLeftCoordinate);
}

void UInventory::RequestDragCancel(const FInventoryItem& Item, FName InventoryID)
{
	OnDragCancelRequested.Broadcast(Item, InventoryID);
}

void UInventory::RequestItemDropOnGrid(FInventoryItem Item,int32 CellDroppedOn, FName InventoryID)
{
	OnItemDroppedOnGrid.Broadcast(Item, CellDroppedOn, InventoryID);
}

void UInventory::RequestDragParameters(int32 Cell, FName ItemID)
{
	OnDragParametersRequested.Broadcast(Cell, ItemID);
}

void UInventory::RequestItemSize(FName ItemID)
{
	OnItemSizeRequested.Broadcast(ItemID);
}

void UInventory::RequestItemFrontend(const FInventoryItem& Item)
{
	OnItemFrontendRequested.Broadcast(Item);
}

void UInventory::RequestCloseInventory(FName InventoryID)
{
	OnInventoryClose.Broadcast(InventoryID);
}
