// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "Equipment.h"
#include "EquipmentNotifier.h"
#include "EquipmentInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UEquipmentInterface : public UInterface
{
	GENERATED_BODY()
};
// This class does not need to be modified.
/**
 * 
 */
class INVENTORYANDSTATSCPP_API IEquipmentInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable)
	virtual UEquipmentNotifier* RequestEquipmentNotifier(FGameplayTag Tag, int32 PlayerIndex) = 0;

	UFUNCTION(BlueprintCallable)
	virtual UEquipment* RequestEquipmentObject(FGameplayTag Tag, int32 PlayerIndex) = 0;

};
