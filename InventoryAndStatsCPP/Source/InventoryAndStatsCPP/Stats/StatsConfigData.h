#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StatsConfigData.generated.h"

UENUM(BlueprintType)
enum class E_StatType : uint8
{
    Basic      UMETA(DisplayName = "Basic"),
    Main       UMETA(DisplayName = "Main"),
    Additional UMETA(DisplayName = "Additional")
};

USTRUCT(BlueprintType)
struct FStatsConfigData
{
    GENERATED_BODY()

public:

    UPROPERTY(EditDefaultsOnly)
    float Base;
    UPROPERTY(EditDefaultsOnly)
    float PerLevel;
    UPROPERTY(EditDefaultsOnly)
    E_StatType Type;
    UPROPERTY(EditDefaultsOnly)
    TMap<FGameplayTag, float> Dependencies;
};

struct FStatsDependencies
{
public:

    TMap<FGameplayTag, float> Dependencies;
};