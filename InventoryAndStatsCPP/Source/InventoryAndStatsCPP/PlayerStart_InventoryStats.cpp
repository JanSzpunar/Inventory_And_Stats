// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStart_InventoryStats.h"
#include "InventoryAndStatsCPP/Characters/Player_Base.h"
#include "InventoryAndStatsCPP/Saving/GameInstanceInterface.h"
#include "InventoryAndStatsCPP/Saving/SaveGamePawnsInterface.h"
#include "InventoryAndStatsCPP/CharactersController/CharactersControllerInterface.h"

void APlayerStart_InventoryStats::BeginPlay()
{
	Super::BeginPlay();
	IGameInstanceInterface* Interface = Cast<IGameInstanceInterface>(GetWorld()->GetGameInstance());
	if (Interface)
	{
		Interface->AddSaveGameComponentToSet(this);
	}
}

void APlayerStart_InventoryStats::SaveGame()
{
	//Logic done in player controller (MultiplePawnController)
}

void APlayerStart_InventoryStats::LoadGame()
{
	if (!IsValid(DefaultPlayerClass))
	{
		UE_LOG(LogTemp, Warning, TEXT("Player class is not set in player start!"));
		return;
	}
	ISaveGamePawnsInterface* giInterface = Cast<ISaveGamePawnsInterface>(GetWorld()->GetGameInstance());
	if (!giInterface)
	{
		return;
	}
	const FSavePlayersData& playersData = giInterface->LoadPawns();
	TArray<FBaseStats> data = (playersData.Defaulted) ? DefaultPlayersData.Characters : playersData.Characters;
	if (data.Num() == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No pawns data found to load!"));
		return;
	}

	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	TArray<ACharacter*> spawnedPlayers;
	for (const FBaseStats& BaseStats : data)
	{
		APlayer_Base* NewPlayer = GetWorld()->SpawnActor<APlayer_Base>(DefaultPlayerClass, GetActorTransform(), spawnParams);
		NewPlayer->SetBaseStats(BaseStats);
		spawnedPlayers.Add(NewPlayer);

	}

	ICharactersControllerInterface* pcInterface = Cast<ICharactersControllerInterface>(GetWorld()->GetFirstPlayerController());
	if (pcInterface)
	{
		pcInterface->CacheControllableCharacters(playersData.ControlledCharacterIndex, spawnedPlayers);
	}

}




