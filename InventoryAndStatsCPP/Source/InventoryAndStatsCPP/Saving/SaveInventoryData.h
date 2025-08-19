#pragma once

#include "CoreMinimal.h"
#include <InventoryAndStatsCPP/Inventory/InventoryItem.h>
#include "SaveInventoryData.generated.h"

USTRUCT()
struct FSaveInventoryData
{
	GENERATED_BODY()

public:
	TArray<FInventoryItem> Items;
	FIntPoint Size;
	TSet<int32> FreeCells;
};