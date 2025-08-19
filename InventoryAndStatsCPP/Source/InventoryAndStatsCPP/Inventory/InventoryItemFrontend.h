#pragma once

#include "CoreMinimal.h"
#include "InventoryItem.h"
#include "InventoryItemFrontend.generated.h"

USTRUCT(BlueprintType)
struct FInventoryItemFrontend
{
    GENERATED_BODY()

public:

    UPROPERTY(BlueprintReadOnly)
    FText Name;
    UPROPERTY(BlueprintReadOnly)
	FText Description;
    UPROPERTY(BlueprintReadOnly)
    UTexture2D* Icon;
    UPROPERTY(BlueprintReadOnly)
    FGameplayTagContainer Tags;
    UPROPERTY(BlueprintReadOnly)
    FIntPoint Size;
    UPROPERTY(BlueprintReadWrite)
    FInventoryItem Item;
};