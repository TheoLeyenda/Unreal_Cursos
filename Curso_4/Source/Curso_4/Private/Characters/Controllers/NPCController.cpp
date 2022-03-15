// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Controllers/NPCController.h"

#include "BehaviorTree/BlackboardComponent.h"

void ANPCController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	RunBehaviorTree(CurrentBehaviorTree);
}

void ANPCController::UpdateTargetActorKey(AActor* TargetActor)
{
	if(Blackboard)
	{
		Blackboard->SetValueAsObject(TargetActorName, TargetActor);
	}
}

void ANPCController::UpdateHasLineOfSightKey(bool HasLineOfSight)
{
	if(Blackboard)
	{
		Blackboard->SetValueAsBool(HasLineOfSightName, HasLineOfSight);
	}
}
