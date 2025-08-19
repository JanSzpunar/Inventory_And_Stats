// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StatsConfig.h"
#include "BaseStats.h"
#include "Components/ActorComponent.h"
#include "StatsComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLevelUp, int32, NewLevel, float, CurrentExperience, float, CurrentExperienceTarget);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExperienceAdded);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStatsChanged);

UCLASS(ClassGroup=(Custom))
class INVENTORYANDSTATSCPP_API UStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UStatsComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Stats|UMG")
	void GetCharacterPanelInfo(FText& Name, int32& Level) const;

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Stats|UMG")
	void GetFrontendExperience(float& CurrentExperience, float& TargetExperience) const;
	UFUNCTION(BlueprintCallable, Category = "Stats")
	void AddOnePointToStat(FGameplayTag Stat);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Stats")
	bool CanUpgradeStat(FGameplayTag Stat);

public:
	UPROPERTY(EditDefaultsOnly, Category = "Stats")
	TSubclassOf<UStatsConfig> StatsConfig;
	
	UPROPERTY(EditDefaultsOnly, Category = "Stats", meta = (EditCondition = "IsNotPlayer"))
	FBaseStats BaseStats;
public:
	UPROPERTY(BlueprintAssignable, Category = "Stats|UMG")
	FOnLevelUp OnLevelUp;
	UPROPERTY(BlueprintAssignable, Category = "Stats|UMG")
	FOnExperienceAdded OnExperienceAdded;
	UPROPERTY(BlueprintAssignable, Category = "Stats|UMG")
	FOnStatsChanged OnStatsChanged;
public:
	float GetStat(FGameplayTag Stat);
	void SetBaseStats(FBaseStats NewBaseStats);
	void AddExperience(float Experience);
	FBaseStats GetBaseStats() const;
	void SetAdditionalStats(TMap<FGameplayTag, float> NewAdditionalStats);

private:
	float CalculateExperienceTarget(int32 Level) const;
	void  LevelUp();
	void  CreateInvertedDependencies();
	float CalculateStat(FGameplayTag Stat, bool CalculateWithTotalLevel);
	void  CalculateDependencies(FGameplayTag Stat, bool CalculateWithTotalLevel);

private:
	UPROPERTY()
	bool IsNotPlayer = true;
	float CurrentExperienceTarget;
	TMap<FGameplayTag, float> Stats;
	TMap<FGameplayTag, FStatsDependencies> InvertedDependencies;
	TMap<FGameplayTag, FStatsConfigData> ConfigValues;
	TMap<FGameplayTag, float> AdditionalStats;

};
