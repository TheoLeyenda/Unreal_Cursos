// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Controllers/AIControllerBase.h"

void AAIControllerBase::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	RunBehaviorTree(CurrentBehaviorTree);
}