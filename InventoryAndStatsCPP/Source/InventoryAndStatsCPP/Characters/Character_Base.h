// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InventoryAndStatsCPP/Stats/StatsInterface.h"
#include "Character_Base.generated.h"

UCLASS(Abstract)
class INVENTORYANDSTATSCPP_API ACharacter_Base : public ACharacter, public IStatsInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACharacter_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	virtual FBaseStats GetBaseStats() const override;
	virtual UStatsComponent* GetStatsComponent() override;
	virtual void AddExperience(float Experience) override;
	virtual float GetStat(FGameplayTag Stat) override;
	virtual void SetBaseStats(FBaseStats NewStats) override;
public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
	UStatsComponent* StatsComponent;
};
