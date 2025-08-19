// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InteractableController.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYANDSTATSCPP_API UInteractableController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractableController();

public:
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Interactables")
	const AActor* GetCurrentInteractable() const { return CurrentInteractable; };
public:
	void FindInteractable(AActor* ControlledActor, FRotator ControlRotation);
public:
	UPROPERTY(EditDefaultsOnly, Category = "Interactables")
	FVector StartRaycastOffset = FVector(0.0f, 0.0f, 80.0f);

	UPROPERTY(EditDefaultsOnly, Category = "Interactables")
	float RaycastLength = 150.0f;
private:
	void ResetInteractable();
private:
	AActor* CurrentInteractable;
};
