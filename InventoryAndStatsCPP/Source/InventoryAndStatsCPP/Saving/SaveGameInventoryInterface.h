// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SaveInventoryData.h"
#include "SaveGameInventoryInterface.generated.h"


// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class USaveGameInventoryInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INVENTORYANDSTATSCPP_API ISaveGameInventoryInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual void SaveInventory(const TMap<FName, FSaveInventoryData>& SaveData) = 0;

	virtual const TMap<FName, FSaveInventoryData>& LoadInventory() = 0;

};
