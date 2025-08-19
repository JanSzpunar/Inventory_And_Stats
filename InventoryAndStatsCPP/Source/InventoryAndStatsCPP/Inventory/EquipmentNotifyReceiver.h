// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include"InventoryAndStatsCPP/Inventory/EquipmentNotifier.h"
#include "EquipmentNotifyReceiver.generated.h"

DECLARE_MULTICAST_DELEGATE_OneParam(FOnEquipmentChangedAfterNotify, FEquipmentBonusPayload)
class UInventories;
UCLASS( ClassGroup=(Custom))
class INVENTORYANDSTATSCPP_API UEquipmentNotifyReceiver : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEquipmentNotifyReceiver();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UInventories* Inventories;
public:
	FOnEquipmentChangedAfterNotify OnEquipmentChangedAfterNotify;
private:
	void StartReceiving();
	void BroadcastEquipmentChange(FEquipmentBonusPayload Payload) const;

};
