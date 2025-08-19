// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableInterface.h"
#include "InventoryAndStatsCPP/SelectionInterface.h"
#include "Interactable_Base.generated.h"

UCLASS(Abstract)
class INVENTORYANDSTATSCPP_API AInteractable_Base : public AActor, public IInteractableInterface, public ISelectionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractable_Base();
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interactables", meta = (MultiLine = true))
	FText InteractText;
public:
	virtual void Selected_Implementation() override;
	virtual void Deselected_Implementation() override;
	virtual void Interact_Implementation(AActor* Interactor) override;


};
