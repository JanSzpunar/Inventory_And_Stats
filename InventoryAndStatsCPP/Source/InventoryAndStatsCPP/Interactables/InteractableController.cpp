// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableController.h"
#include "InteractableInterface.h"
#include "InventoryAndStatsCPP/SelectionInterface.h"

// Sets default values for this component's properties
UInteractableController::UInteractableController()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UInteractableController::FindInteractable(AActor* ControlledActor, FRotator ControlRotation)
{
    FHitResult HitResult;
    FVector Start = ControlledActor->GetActorLocation() + StartRaycastOffset;
    FVector End = Start + (ControlRotation.Vector()* RaycastLength);

    FCollisionQueryParams TraceParams(FName(TEXT("InteractableTrace")), true, ControlledActor);
    TraceParams.bReturnPhysicalMaterial = false;
    TraceParams.bTraceComplex = false;
    TraceParams.AddIgnoredActor(ControlledActor);

    bool bHit = GetWorld()->LineTraceSingleByChannel(
        HitResult,
        Start,
        End,
        ECC_Camera, 
        TraceParams
    );

    if (!bHit)
    {
        ResetInteractable();
        return;
    }
    if (!HitResult.GetActor())
    {
        ResetInteractable();
        return;
    }
    if (!HitResult.GetActor()->Implements<UInteractableInterface>())
    {
        ResetInteractable();
        return;
    }
    if (!HitResult.GetActor()->Implements<USelectionInterface>())
    {
        ResetInteractable();
        return;
    }
    if (!CurrentInteractable)
    {
        ISelectionInterface::Execute_Selected(HitResult.GetActor());
        CurrentInteractable = HitResult.GetActor();
        return;
    }
    if (CurrentInteractable == HitResult.GetActor())
    {
        return;
    }
    ISelectionInterface::Execute_Deselected(CurrentInteractable);
    ISelectionInterface::Execute_Selected(HitResult.GetActor());
    CurrentInteractable = HitResult.GetActor();

}

void UInteractableController::ResetInteractable()
{
    if (CurrentInteractable)
    {
        ISelectionInterface::Execute_Deselected(CurrentInteractable);
        CurrentInteractable = nullptr;
    }
}


