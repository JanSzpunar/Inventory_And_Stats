// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "InventoryAndStatsCPP/Saving/GameInstanceInterface.h"
#include "InventoryAndStatsCPP/Saving/SaveGameInterface.h"
#include "InventoryAndStatsCPP/Saving/SaveGameInventoryInterface.h"
#include "InventoryAndStatsCPP/Saving/SaveGamePawnsInterface.h"
#include "GameInstance_InventoryAndStats.generated.h"

/**
 * 
 */
UCLASS()
class INVENTORYANDSTATSCPP_API UGameInstance_InventoryAndStats : public UGameInstance, public IGameInstanceInterface, public ISaveGameInterface, public ISaveGameInventoryInterface, public ISaveGamePawnsInterface
{
	GENERATED_BODY()
	
public:
	virtual void AddSaveGameComponentToSet(UObject* SaveGameComponent) override;
	virtual void SaveGame() override;
	virtual void LoadGame() override;
public:
	virtual void SaveInventory(const TMap<FName, FSaveInventoryData>& SaveData) override;
	virtual const TMap<FName, FSaveInventoryData>& LoadInventory() override;
	virtual void SavePawns(FSavePlayersData& SaveData) override;
	virtual const FSavePlayersData& LoadPawns() override;

private:
	void LoadDataFromFile();
	
	void SaveDataToFile();

private:
	UPROPERTY()
	TSet<UObject*> SaveGameComponents;
private:
	TMap<FName, FSaveInventoryData> InventoryData;
	FSavePlayersData PawnsData;
	

};
