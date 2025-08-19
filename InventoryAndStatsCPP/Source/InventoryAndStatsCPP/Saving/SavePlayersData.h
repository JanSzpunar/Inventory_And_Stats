#pragma once

#include "CoreMinimal.h"
#include "InventoryAndStatsCPP/Stats/BaseStats.h"
#include "SavePlayersData.generated.h"



USTRUCT(BlueprintType)
struct FSavePlayersData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool Defaulted = true;
	UPROPERTY()
	int32 ControlledCharacterIndex;
	UPROPERTY(EditDefaultsOnly)
	TArray<FBaseStats> Characters;
};