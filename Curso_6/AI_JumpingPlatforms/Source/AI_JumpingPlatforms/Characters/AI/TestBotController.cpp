// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_JumpingPlatforms/Characters/AI/TestBotController.h"

#include "BehaviorTree/BlackboardComponent.h"

void ATestBotController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	RunBehaviorTree(CurrentBehaviorTree);
}

void ATestBotController::UpdateTargetActorKey(AActor* TargetActor)
{
	if(Blackboard)
	{
		Blackboard->SetValueAsObject(TargetActorName, TargetActor);
	}
}

void ATestBotController::UpdateHasLineOfSightKey(bool HasLineOfSight)
{
	if(Blackboard)
	{
		Blackboard->SetValueAsBool(HasLineOfSightName, HasLineOfSight);
	}
}
