// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_JumpingPlatforms/Characters/AI/TestBotCharacter.h"

#include "Perception/AIPerceptionComponent.h"

// Sets default values
ATestBotCharacter::ATestBotCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	AIPerception = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AI Perception"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	AIPerception->bEditableWhenInherited = true;
	SightConfig->SightRadius = SightRadius;
	SightConfig->LoseSightRadius = LoseSightRadius;
	SightConfig->PeripheralVisionAngleDegrees = PeripheralVisionAngle;
	SightConfig->DetectionByAffiliation.bDetectEnemies = bDetectedEnemies;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = bDetectedNeutrals;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = bDetectedFriendlies;
	AIPerception->ConfigureSense(*SightConfig);
	AIPerception->SetDominantSense(SightConfig->GetSenseImplementation());
}

// Called when the game starts or when spawned
void ATestBotCharacter::BeginPlay()
{
	Super::BeginPlay();

	TestBotController = Cast<ATestBotController>(GetController());

	AIPerception->OnTargetPerceptionUpdated.AddDynamic(this, &ATestBotCharacter::OnTargetPerceptionUpdated);
	
}

void ATestBotCharacter::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	if(!TestBotController)
	{
		return;
	}

	PerceivedActor = Actor;

	if(Stimulus.WasSuccessfullySensed())
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerTargetLost);
		TestBotController->UpdateHasLineOfSightKey(true);
		TestBotController->UpdateTargetActorKey(PerceivedActor);
	}
	else if(bEnableLostTarget)
	{
		GetWorld()->GetTimerManager().SetTimer(TimerTargetLost, this, &ATestBotCharacter::TargetLost, DelayToTargetLost, false);
		TestBotController->UpdateHasLineOfSightKey(false);
	}
}

void ATestBotCharacter::TargetLost()
{
	PerceivedActor = nullptr;
	TestBotController->UpdateTargetActorKey(nullptr);
}

