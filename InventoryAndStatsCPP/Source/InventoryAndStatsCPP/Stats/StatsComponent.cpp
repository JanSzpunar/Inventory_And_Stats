// Fill out your copyright notice in the Description page of Project Settings.


#include "StatsComponent.h"

// Sets default values for this component's properties
UStatsComponent::UStatsComponent()
{

	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

// Called when the game starts
void UStatsComponent::BeginPlay()
{
	Super::BeginPlay();

	if (!StatsConfig)
	{
		UE_LOG(LogTemp, Error, TEXT("StatsConfig is not set in StatsComponent!"));
		return;
	}
	UStatsConfig* defaultStatsConfig = Cast<UStatsConfig>(StatsConfig->GetDefaultObject());
	ConfigValues = defaultStatsConfig->Stats;
    CreateInvertedDependencies();
    for (const TPair<FGameplayTag, FStatsConfigData>& ConfigData : ConfigValues)
    {
        BaseStats.StatLevels.Add(ConfigData.Key, 1);
    }
    for (const TPair<FGameplayTag, FStatsConfigData>& ConfigData : ConfigValues)
    {
        Stats.Add(ConfigData.Key, CalculateStat(ConfigData.Key, true));
    }
    CurrentExperienceTarget = CalculateExperienceTarget(BaseStats.Level);
}

void UStatsComponent::GetCharacterPanelInfo(FText& Name, int32& Level) const
{
    Name = BaseStats.Name;
    Level = BaseStats.Level;

}

void UStatsComponent::GetFrontendExperience(float& CurrentExperience, float& TargetExperience) const
{
    CurrentExperience = BaseStats.Experience;
    TargetExperience = CurrentExperienceTarget;

}

void UStatsComponent::AddOnePointToStat(FGameplayTag Stat)
{
    if (!ConfigValues.Contains(Stat))
    {
        return;
    }
    int32 newStatLevel = 1;
    if (const int32* StatLevel = BaseStats.StatLevels.Find(Stat))
    {
        newStatLevel = *StatLevel + 1;
    }
    
    BaseStats.StatLevels.Add(Stat, newStatLevel);
    BaseStats.FreeLevelPoints--;
    Stats.Add(Stat, CalculateStat(Stat, false));
    OnStatsChanged.Broadcast();
}

bool UStatsComponent::CanUpgradeStat(FGameplayTag Stat)
{
    const FStatsConfigData* ConfigData = ConfigValues.Find(Stat);
    if (!ConfigData)
    {
        return false;
    }
    
    return (ConfigData->Type == E_StatType::Main) && (BaseStats.FreeLevelPoints > 0);
}

FBaseStats UStatsComponent::GetBaseStats() const
{
	return BaseStats;
}

void UStatsComponent::SetAdditionalStats(TMap<FGameplayTag, float> NewAdditionalStats)
{
    AdditionalStats = NewAdditionalStats;
    OnStatsChanged.Broadcast();
}

float UStatsComponent::CalculateExperienceTarget(int32 Level) const
{
    float Exp = (FMath::Pow(2.0f, Level) + FMath::Pow(1.1f, Level) + Level) * 50.0f;
    return Level == 1 ? Exp + 420.0f : Exp + 300.0f;
}

void UStatsComponent::LevelUp()
{
    BaseStats.Level++;
    BaseStats.FreeLevelPoints++;

    BaseStats.Experience = 0.0f;

    CurrentExperienceTarget = CalculateExperienceTarget(BaseStats.Level);

    OnLevelUp.Broadcast(BaseStats.Level, BaseStats.Experience, CurrentExperienceTarget);
}


void UStatsComponent::CreateInvertedDependencies()
{
    InvertedDependencies.Empty();
    for (const TPair<FGameplayTag, FStatsConfigData>& ConfigData : ConfigValues)
    {
        FStatsDependencies DependenciesToAdd;
        TMap<FGameplayTag, float> CurrentDependencies = ConfigData.Value.Dependencies;
        if (CurrentDependencies.IsEmpty())
        {
            continue;
        }
        for (const TPair<FGameplayTag, float>& DependecyData : CurrentDependencies)
        {
            DependenciesToAdd.Dependencies.Add(ConfigData.Key, DependecyData.Value);
            InvertedDependencies.Add(DependecyData.Key, DependenciesToAdd);
        }
    }
}

float UStatsComponent::CalculateStat(FGameplayTag Stat, bool CalculateWithTotalLevel)
{
    const FStatsConfigData* ConfigData = ConfigValues.Find(Stat);
    const int32* StatLevel = BaseStats.StatLevels.Find(Stat);

    if (!ConfigData || !StatLevel)
    {
        return 0.0f;
    }

    float StatValue = 0.0f;
    if (ConfigData->Type == E_StatType::Main)
    {
        StatValue = ConfigData->Base + ((ConfigData->PerLevel) * (*StatLevel - 1));
    }
    else
    {
        if (const float* CurrentStat = Stats.Find(Stat))
        {
            StatValue = *CurrentStat;
        }
        else
        {
            StatValue = ConfigData->Base + ((ConfigData->PerLevel) * (*StatLevel - 1));
        }
    }

    CalculateDependencies(Stat, CalculateWithTotalLevel);
    Stats.Add(Stat, StatValue);

    return StatValue;
}

void UStatsComponent::CalculateDependencies(FGameplayTag Stat, bool CalculateWithTotalLevel)
{
    const FStatsDependencies* Dependencies = InvertedDependencies.Find(Stat);
    if (!Dependencies)
    {
        return;
    }
    int32 StatLevel = 0.0f;
    if (const int32* StatLevelPtr = BaseStats.StatLevels.Find(Stat))
    {
        StatLevel = *StatLevelPtr -1;
    }

    for (const TPair<FGameplayTag, float>& Dependency : Dependencies->Dependencies)
    {
        const FGameplayTag& DependentStat = Dependency.Key;
        const float Modifier = Dependency.Value;

        float CalculatedValue = CalculateStat(DependentStat, false);

        if (CalculateWithTotalLevel)
        {
            CalculatedValue += Modifier * StatLevel;
        }
        else
        {
            CalculatedValue += Modifier;
        }
        Stats.Add(DependentStat, CalculatedValue);
    }
}



float UStatsComponent::GetStat(FGameplayTag Stat)
{
	const float* BaseStat = Stats.Find(Stat);
	const float* BonusStat = AdditionalStats.Find(Stat);

	return (BaseStat ? *BaseStat : 0.0f) + (BonusStat ? *BonusStat : 0.0f);
}

void UStatsComponent::AddExperience(float Experience)
{
    BaseStats.Experience += Experience;

    while (BaseStats.Experience >= CurrentExperienceTarget)
    {
        float Overflow = BaseStats.Experience - CurrentExperienceTarget;
        LevelUp();
        BaseStats.Experience += Overflow;
    }

    OnExperienceAdded.Broadcast();
}


void UStatsComponent::SetBaseStats(FBaseStats NewBaseStats)
{
    BaseStats = NewBaseStats;
}



