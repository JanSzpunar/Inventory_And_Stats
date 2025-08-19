// Fill out your copyright notice in the Description page of Project Settings.


#include "CharactersController.h"
#include "InventoryAndStatsCPP/Stats/StatsInterface.h"
#include "InventoryAndStatsCPP/Saving/GameInstanceInterface.h"
#include "InventoryAndStatsCPP/Saving/SaveGamePawnsInterface.h"

// Sets default values for this component's properties
UCharactersController::UCharactersController()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void UCharactersController::CacheControllableCharacters(int32 ControlledPawnIndex, TArray<ACharacter*> PlayableCharacters)
{
	if (PlayableCharacters.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("No playable characters found!"))
		return;
	}
	CurrentControlledCharacterIndex = ControlledPawnIndex;
	ControllableCharacters = PlayableCharacters;
	ACharacter* controlledCharacter = ControllableCharacters.IsValidIndex(ControlledPawnIndex) ? ControllableCharacters[ControlledPawnIndex] : ControllableCharacters[0];
	OnPossesionRequested.ExecuteIfBound(Cast<APawn>(controlledCharacter));
}

ACharacter* UCharactersController::GetCurrentlyControlledCharacter()
{
	return ControllableCharacters[CurrentControlledCharacterIndex];
}

void UCharactersController::SelectNextControlledCharacter()
{
	if(ControllableCharacters.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No playable characters available!"))
		return;
	}
	if(ControllableCharacters.Num() == 1)
	{
		UE_LOG(LogTemp, Warning, TEXT("Only one playable character available cant select next"));
		return;
	}
	OnCharacterDeselected.ExecuteIfBound();
	CurrentControlledCharacterIndex = (ControllableCharacters.IsValidIndex(CurrentControlledCharacterIndex + 1) ? CurrentControlledCharacterIndex + 1 : 0);
	OnPossesionRequested.ExecuteIfBound(Cast<APawn>(ControllableCharacters[CurrentControlledCharacterIndex]));
}

TArray <ACharacter*> UCharactersController::GetAllControllableCharacters()
{
	return ControllableCharacters;
}

void UCharactersController::SaveGame()
{
	ISaveGamePawnsInterface* Interface = Cast<ISaveGamePawnsInterface>(GetWorld()->GetGameInstance());
	if (Interface)
	{
		FSavePlayersData playersData;
		playersData.ControlledCharacterIndex = CurrentControlledCharacterIndex;
		for(ACharacter* character : ControllableCharacters)
		{
			if (IStatsInterface* StatsInterface = Cast<IStatsInterface>(character))
			{
				playersData.Characters.Add(StatsInterface->GetBaseStats());
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Character does not implement IStatsInterface!"));
			}
		}
		Interface->SavePawns(playersData);
	}
}

void UCharactersController::LoadGame()
{
	// Logic done in PlayerStart
}



// Called when the game starts
void UCharactersController::BeginPlay()
{
	Super::BeginPlay();
	IGameInstanceInterface* Interface = Cast<IGameInstanceInterface>(GetWorld()->GetGameInstance());
	if (Interface)
	{
		Interface->AddSaveGameComponentToSet(this);
	}
	
}

