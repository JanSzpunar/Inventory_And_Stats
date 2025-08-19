// Fill out your copyright notice in the Description page of Project Settings.


#include "EquipmentNotifyReceiver.h"
#include "InventoryAndStatsCPP/CharactersController/CharactersControllerInterface.h"
#include "InventoryAndStatsCPP/Inventory/EquipmentInterface.h"
#include "InventoryAndStatsCPP/Inventory/Inventories.h"
#include "GameFramework/GameStateBase.h"



// Sets default values for this component's properties
UEquipmentNotifyReceiver::UEquipmentNotifyReceiver()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEquipmentNotifyReceiver::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimerForNextTick(FTimerDelegate::CreateUObject(this, &UEquipmentNotifyReceiver::StartReceiving));
	// ...
	
}

void UEquipmentNotifyReceiver::StartReceiving()
{
	if (!Inventories)
	{
		return;
	}
	ICharactersControllerInterface* PcInterface = Cast<ICharactersControllerInterface>(GetWorld()->GetFirstPlayerController());
	if (!PcInterface)
	{
		return;
	}
	int32 OwnerIndex = PcInterface->GetAllControllableCharacters().Find(Cast<ACharacter>(GetOwner()));
	if (OwnerIndex < 0)
	{
		return;
	}
	AGameStateBase* GameState = GetWorld()->GetGameState();
	if (!GameState)
	{
		return;
	}
	if (!GameState->GetClass()->ImplementsInterface(UEquipmentInterface::StaticClass()))
	{
		return;
	}

	IEquipmentInterface* EquipmentInterface = Cast<IEquipmentInterface>(GameState);

	for (const TPair<FGameplayTag, FString>& Pair : Inventories->Equipments)
	{
		EquipmentInterface->RequestEquipmentNotifier(Pair.Key, OwnerIndex)->OnEquipmentChanged.AddUObject(this,&UEquipmentNotifyReceiver::BroadcastEquipmentChange);
		UEquipment* Equipment = EquipmentInterface->RequestEquipmentObject(Pair.Key, OwnerIndex);
		Equipment->OnEquipedItemsDataRequested.Broadcast(Equipment);
	}

}

void UEquipmentNotifyReceiver::BroadcastEquipmentChange(FEquipmentBonusPayload Payload) const
{
	OnEquipmentChangedAfterNotify.Broadcast(Payload);
}


// Called every frame
void UEquipmentNotifyReceiver::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

