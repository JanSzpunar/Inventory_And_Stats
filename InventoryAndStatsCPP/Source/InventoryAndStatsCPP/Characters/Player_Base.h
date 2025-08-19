// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character_Base.h"
#include <InventoryAndStatsCPP/Inventory/EquipmentNotifier.h>
#include "Player_Base.generated.h"


class UEquipmentNotifyReceiver;
/**
 * 
 */
UCLASS(Abstract)
class INVENTORYANDSTATSCPP_API APlayer_Base : public ACharacter_Base
{
	GENERATED_BODY()
	
public:
	// Sets default values for this character's properties
	APlayer_Base();
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Equipment")
	UEquipmentNotifyReceiver* EquipmentNotifyReceiver;

private:
	void SetAdditionalStats(FEquipmentBonusPayload Payload);

};
