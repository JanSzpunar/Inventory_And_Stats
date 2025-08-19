// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController_InventoryStats.h"
#include "InventoryAndStatsCPP/HUD/CharacterPanelHUDInterface.h"
#include "InventoryAndStatsCPP/Interactables/InteractableController.h"
#include "GameFramework/HUD.h"

APlayerController_InventoryStats::APlayerController_InventoryStats()
{
	CharactersController = CreateDefaultSubobject<UCharactersController>(TEXT("Characters controller"));
	CharactersController->OnPossesionRequested.BindUObject(this, &APlayerController_InventoryStats::OnPossessRequested);
	CharactersController->OnCharacterDeselected.BindUObject(this, &APlayerController_InventoryStats::OnUnPossessRequested);
	InteractableController = CreateDefaultSubobject<UInteractableController>(TEXT("InteractableController"));
}


void APlayerController_InventoryStats::CacheControllableCharacters(int32 ControlledCharacterIndex, TArray<ACharacter*> PlayableCharacters)
{
	CharactersController->CacheControllableCharacters(ControlledCharacterIndex, PlayableCharacters);
}

ACharacter* APlayerController_InventoryStats::GetCurrentlyControlledCharacter()
{
	return CharactersController->GetCurrentlyControlledCharacter();
}

void APlayerController_InventoryStats::SelectNextControlledCharacter()
{
	CharactersController->SelectNextControlledCharacter();
}

TArray<ACharacter*> APlayerController_InventoryStats::GetAllControllableCharacters()
{
	return CharactersController->GetAllControllableCharacters();
}

void APlayerController_InventoryStats::Tick(float DeltaSeconds)
{
	if (InteractableController)
	{
		InteractableController->FindInteractable(GetCurrentlyControlledCharacter(), GetControlRotation());
	}
	
}

void APlayerController_InventoryStats::OnPossessRequested(APawn* NewPawn)
{
	if (NewPawn)
	{
		Possess(NewPawn);

		if (GetHUD()->GetClass()->ImplementsInterface(UCharacterPanelHUDInterface::StaticClass()))
		{
			ICharacterPanelHUDInterface::Execute_RefreshCharacterPanel(GetHUD());
		}

	}
}

void APlayerController_InventoryStats::OnUnPossessRequested()
{
	UnPossess();
}
