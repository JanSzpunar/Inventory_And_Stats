// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Inventory.h"
#include "GameplayTagContainer.h"
#include "Inventories.generated.h"


/**
 * 
 */
UCLASS(BlueprintType)
class INVENTORYANDSTATSCPP_API UInventories : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FName, TSubclassOf<UInventory>> InventoryClasses;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FGameplayTag, FString> Equipments;

public:
    bool FindValidInventoryClass(const FName InventoryName, TSubclassOf<UInventory>& Class) const
    {
        if (const TSubclassOf<UInventory>* FoundInventory = InventoryClasses.Find(InventoryName))
        {
            Class = *FoundInventory;
            return true;
        }

        return false;
    }

};

