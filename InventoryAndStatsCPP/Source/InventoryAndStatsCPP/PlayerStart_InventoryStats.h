// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerStart.h"
#include "InventoryAndStatsCPP/Saving/SaveGameInterface.h"
#include "InventoryAndStatsCPP/Saving/SavePlayersData.h"
#include "PlayerStart_InventoryStats.generated.h"


class APlayer_Base;
/**
 * 
 */
UCLASS()
class INVENTORYANDSTATSCPP_API APlayerStart_InventoryStats : public APlayerStart, public ISaveGameInterface
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	virtual void SaveGame() override;
	virtual void LoadGame() override;

public:
	UPROPERTY(EditDefaultsOnly, Category = "Editable")
	TSubclassOf<APlayer_Base> DefaultPlayerClass;

	UPROPERTY(EditDefaultsOnly, Category = "Editable")
	FSavePlayersData DefaultPlayersData;

	
};
