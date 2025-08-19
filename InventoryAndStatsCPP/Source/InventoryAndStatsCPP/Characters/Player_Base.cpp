// Fill out your copyright notice in the Description page of Project Settings.


#include "Player_Base.h"
#include "InventoryAndStatsCPP/Inventory/EquipmentNotifyReceiver.h"

APlayer_Base::APlayer_Base() : ACharacter_Base()
{
	Tags.Add(FName("Player"));
	EquipmentNotifyReceiver = CreateDefaultSubobject<UEquipmentNotifyReceiver>(TEXT("Equipment notify receiver"));
	EquipmentNotifyReceiver->OnEquipmentChangedAfterNotify.AddUObject(this, &APlayer_Base::SetAdditionalStats);
}

void APlayer_Base::SetAdditionalStats(FEquipmentBonusPayload Payload)
{
	StatsComponent->SetAdditionalStats(Payload.EquipmentBonus);
}
