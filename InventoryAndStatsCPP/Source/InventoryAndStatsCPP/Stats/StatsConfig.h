// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatsConfigData.h"
#include "UObject/NoExportTypes.h"
#include "StatsConfig.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, Abstract)
class INVENTORYANDSTATSCPP_API UStatsConfig : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	TMap<FGameplayTag, FStatsConfigData> Stats;
};
