// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/NPCCharacter.h"

ANPCCharacter::ANPCCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	AIPerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	AIPerception->bEditableWhenInherited = true;
	SightConfig->SightRadius = 1000.f;
	SightConfig->LoseSightRadius = 1500.f;
	SightConfig->PeripheralVisionAngleDegrees = 70.f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	AIPerception->ConfigureSense(*SightConfig);
	AIPerception->SetDominantSense(SightConfig->GetSenseImplementation());
}

void ANPCCharacter::BeginPlay()
{
	Super::BeginPlay();

	NPCController = Cast<ANPCController>(GetController());
	
	AIPerception->OnTargetPerceptionUpdated.AddDynamic(this, &ANPCCharacter::OnTargetPerceptionUpdated);
}

void ANPCCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ANPCCharacter::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	if(!NPCController)
	{
		UE_LOG(LogTemp, Error, TEXT("NPCController es nulo"));
		return;
	}
	
	PerceivedActor = Actor;

	if(Stimulus.WasSuccessfullySensed())
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerTargetLost);
		NPCController->UpdateHasLineOfSightKey(true);
		NPCController->UpdateTargetActorKey(PerceivedActor);
	}
	else
	{
		GetWorld()->GetTimerManager().SetTimer(TimerTargetLost, this, &ANPCCharacter::TargetLost, DelayToTargetLost, false);
		NPCController->UpdateHasLineOfSightKey(false);
	}
}

void ANPCCharacter::TargetLost()
{
	PerceivedActor = nullptr;
	NPCController->UpdateTargetActorKey(nullptr);
}
