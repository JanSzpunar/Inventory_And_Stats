// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InventoryAndStatsCPP/Saving/SaveGameInterface.h"
#include "CharactersControllerInterface.h"
#include "CharactersController.generated.h"

DECLARE_DELEGATE_OneParam(FOnPossesionRequested, APawn*);
DECLARE_DELEGATE(FOnCharacterDeselected);
UCLASS( ClassGroup=(Custom), Blueprintable)
class INVENTORYANDSTATSCPP_API UCharactersController : public UActorComponent, public ICharactersControllerInterface, public ISaveGameInterface
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharactersController();
public:
	FOnPossesionRequested OnPossesionRequested;
	FOnCharacterDeselected OnCharacterDeselected;
public:
	virtual void CacheControllableCharacters(int32 ControlledPawnIndex, TArray<ACharacter*> PlayableCharacters) override;
	virtual ACharacter* GetCurrentlyControlledCharacter() override;
	virtual void SelectNextControlledCharacter() override;
	virtual TArray <ACharacter*> GetAllControllableCharacters() override;

	virtual void SaveGame() override;
	virtual void LoadGame() override;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
private:
	TArray<ACharacter*> ControllableCharacters;
	int32 CurrentControlledCharacterIndex = 0;

		
};
