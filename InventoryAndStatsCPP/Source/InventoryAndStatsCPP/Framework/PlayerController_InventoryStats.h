// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InventoryAndStatsCPP/CharactersController/CharactersController.h"
#include "PlayerController_InventoryStats.generated.h"

class UInteractableController;
/**
 * 
 */
UCLASS()
class INVENTORYANDSTATSCPP_API APlayerController_InventoryStats : public APlayerController, public ICharactersControllerInterface
{
	GENERATED_BODY()
	
	APlayerController_InventoryStats();
public:
	virtual void CacheControllableCharacters(int32 ControlledCharacterIndex, TArray<ACharacter*> PlayableCharacters) override;
	virtual ACharacter* GetCurrentlyControlledCharacter() override;
	virtual void SelectNextControlledCharacter() override;
	virtual TArray<ACharacter*> GetAllControllableCharacters() override;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UCharactersController* CharactersController;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UInteractableController* InteractableController;

public:
	virtual void Tick(float DeltaSeconds) override;


private:
	UFUNCTION()
	void OnPossessRequested(APawn* NewPawn);
	UFUNCTION()
	void OnUnPossessRequested();
};
