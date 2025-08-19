// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Inventory.h"
#include "InventoryInterface.generated.h"


USTRUCT(BlueprintType)
struct FAddItemResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	bool Success;

	UPROPERTY(BlueprintReadOnly)
	int32 AmountLeft;
};

USTRUCT(BlueprintType)
struct FRemoveItemResult
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	bool Success;

	UPROPERTY(BlueprintReadOnly)
	int32 NotRemovedAmount;
};


// This class does not need to be modified.
UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UInventoryInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INVENTORYANDSTATSCPP_API IInventoryInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable)
	virtual FAddItemResult AddItemToInventory(FName Inventory, FInventoryItem Item) = 0;

	UFUNCTION(BlueprintCallable)
	virtual FRemoveItemResult RemoveItemFromInventory(FName Inventory, FName Item, int32 Amount, bool AllowPartial) = 0;

	UFUNCTION(BlueprintCallable)
	virtual bool HasItemInInventory(FName Inventory, FName Item, int32 Amount) = 0;

	UFUNCTION(BlueprintCallable)
	virtual UInventory* RequestInventory(FName Inventory) = 0;
};
