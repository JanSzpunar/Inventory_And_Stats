// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StatsComponent.h"
#include "StatsInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, meta = (CannotImplementInterfaceInBlueprint))
class UStatsInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INVENTORYANDSTATSCPP_API IStatsInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable)
	virtual UStatsComponent* GetStatsComponent() = 0;
	UFUNCTION(BlueprintCallable)
	virtual float GetStat(FGameplayTag Stat) = 0;
	UFUNCTION(BlueprintCallable)
	virtual void AddExperience(float Experience) = 0;
	UFUNCTION()
	virtual FBaseStats GetBaseStats() const = 0;
	UFUNCTION()
	virtual void SetBaseStats(FBaseStats NewBaseStats) = 0;
	

};
