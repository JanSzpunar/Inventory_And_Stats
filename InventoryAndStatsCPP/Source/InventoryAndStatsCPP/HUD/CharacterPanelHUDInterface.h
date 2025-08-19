// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CharacterPanelHUDInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UCharacterPanelHUDInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INVENTORYANDSTATSCPP_API ICharacterPanelHUDInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "HUD|Character panel")
	void SwitchCharacterPanel();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "HUD|Character panel")
	void OpenCharacterPanel();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "HUD|Character panel")
	void CloseCharacterPanel();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "HUD|Character panel")
	void RefreshCharacterPanel();
};
