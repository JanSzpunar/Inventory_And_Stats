#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BaseStats.generated.h"


USTRUCT(BlueprintType)
struct FBaseStats
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly)
	FText Name;
	UPROPERTY(EditDefaultsOnly)
	TMap<FGameplayTag, int32> StatLevels;
	UPROPERTY()
	int32 FreeLevelPoints;
	UPROPERTY()
	float Experience;
	UPROPERTY(EditDefaultsOnly, meta = (ClampMin = "1", UIMin = "1"))
	int32 Level = 1;

	FBaseStats() : Name(FText::FromString(TEXT("Default character name"))) {}

};