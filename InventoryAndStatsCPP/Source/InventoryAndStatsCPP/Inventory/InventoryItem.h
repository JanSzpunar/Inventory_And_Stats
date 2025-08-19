#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"

#include "InventoryItem.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemDynamic
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    int32 Amount;

    UPROPERTY(BlueprintReadOnly)
    int32 TopLeftCoordinate;

    UPROPERTY(BlueprintReadWrite)
    TMap<FGameplayTag, float> StatBonus;

    UPROPERTY()
    bool MergeStatsWithDataTable;

    FInventoryItemDynamic() : Amount(0), TopLeftCoordinate(-1), MergeStatsWithDataTable(true) {}
};

USTRUCT(BlueprintType)
struct FInventoryItem
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadWrite)
    FName ID;

    UPROPERTY(BlueprintReadWrite)
    FInventoryItemDynamic DynamicParameters;
};