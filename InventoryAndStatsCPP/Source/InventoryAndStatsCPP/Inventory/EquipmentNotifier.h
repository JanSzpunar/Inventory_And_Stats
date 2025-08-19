// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EquipmentNotifier.generated.h"

/**
 * 
 */
DECLARE_MULTICAST_DELEGATE_OneParam(FOnEquipmentChanged, FEquipmentBonusPayload)


USTRUCT()
struct FEquipmentBonusPayload
{
    GENERATED_BODY()

    UPROPERTY()
    TMap<FGameplayTag, float> EquipmentBonus;
};


UCLASS()
class INVENTORYANDSTATSCPP_API UEquipmentNotifier : public UObject
{
	GENERATED_BODY()
public:
	FOnEquipmentChanged OnEquipmentChanged;
};
