#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SelectionInterface.generated.h"

UINTERFACE(MinimalAPI, BlueprintType)
class USelectionInterface : public UInterface
{
    GENERATED_BODY()
};

class INVENTORYANDSTATSCPP_API ISelectionInterface
{
    GENERATED_BODY()

public:
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Selection")
    void Selected();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Selection")
    void Deselected();
};
