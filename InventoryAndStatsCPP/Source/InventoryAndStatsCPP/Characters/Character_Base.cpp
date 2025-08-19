// Fill out your copyright notice in the Description page of Project Settings.


#include "Character_Base.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ACharacter_Base::ACharacter_Base()
{
	PrimaryActorTick.bCanEverTick = false;
	GetCharacterMovement()-> bRunPhysicsWithNoController = true;
	StatsComponent = CreateDefaultSubobject<UStatsComponent>(TEXT("StatsComponent"));
}

// Called when the game starts or when spawned
void ACharacter_Base::BeginPlay()
{
	Super::BeginPlay();
}


// Called every frame
void ACharacter_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacter_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

FBaseStats ACharacter_Base::GetBaseStats() const
{
	return StatsComponent->GetBaseStats();
}

UStatsComponent* ACharacter_Base::GetStatsComponent()
{
	return StatsComponent;
}

void ACharacter_Base::AddExperience(float Experience)
{
	StatsComponent->AddExperience(Experience);
}

float ACharacter_Base::GetStat(FGameplayTag Stat)
{
	return StatsComponent->GetStat(Stat);
}

void ACharacter_Base::SetBaseStats(FBaseStats NewStats)
{
	StatsComponent->SetBaseStats(NewStats);
}

