#pragma once

#include "CoreMinimal.h"
#include <GameplayTagContainer.h>
#include "InventoryItemStatic.generated.h"


USTRUCT(BlueprintType, Blueprintable)
struct FInventoryItemStatic: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Name;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UTexture2D* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FGameplayTag, float> StatBonus;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMesh* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FIntPoint Dimensions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 MaxStackSize;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FGameplayTagContainer Tags;

	FInventoryItemStatic() :MaxStackSize(1), Dimensions(FIntPoint(1, 1)){}
};