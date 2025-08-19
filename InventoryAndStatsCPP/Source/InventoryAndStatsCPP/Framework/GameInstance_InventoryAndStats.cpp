// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstance_InventoryAndStats.h"

void UGameInstance_InventoryAndStats::AddSaveGameComponentToSet(UObject* SaveGameComponent)
{
	SaveGameComponents.Add(SaveGameComponent);
	if (ISaveGameInterface* SaveGameInterface = Cast<ISaveGameInterface>(SaveGameComponent))
	{
		SaveGameInterface->LoadGame();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SaveGameComponent does not implement ISaveGameInterface!"));
	}
}

void UGameInstance_InventoryAndStats::SaveGame()
{
	for (UObject* Component : SaveGameComponents)
	{
		if (ISaveGameInterface* SaveGameInterface = Cast<ISaveGameInterface>(Component))
		{
			SaveGameInterface->SaveGame();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SaveGameComponent does not implement ISaveGameInterface!"));
		}
	}
	SaveDataToFile();
}

void UGameInstance_InventoryAndStats::LoadGame()
{
	LoadDataFromFile();
	for (UObject* Component : SaveGameComponents)
	{
		if (ISaveGameInterface* SaveGameInterface = Cast<ISaveGameInterface>(Component))
		{
			SaveGameInterface->LoadGame();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SaveGameComponent does not implement ISaveGameInterface!"));
		}
	}
}

void UGameInstance_InventoryAndStats::SaveInventory(const TMap<FName, FSaveInventoryData>& SaveData)
{
	InventoryData = SaveData;
}

const TMap<FName, FSaveInventoryData>& UGameInstance_InventoryAndStats::LoadInventory()
{
	return InventoryData;
}

void UGameInstance_InventoryAndStats::SavePawns(FSavePlayersData& SaveData)
{
	SaveData.Defaulted = false;
	PawnsData = SaveData;
}

const FSavePlayersData& UGameInstance_InventoryAndStats::LoadPawns()
{
	return PawnsData;
}

void UGameInstance_InventoryAndStats::LoadDataFromFile()
{
	//@TODO: Implement loading data from file
}

void UGameInstance_InventoryAndStats::SaveDataToFile()
{
	//@TODO: Implement saving data to file
}
