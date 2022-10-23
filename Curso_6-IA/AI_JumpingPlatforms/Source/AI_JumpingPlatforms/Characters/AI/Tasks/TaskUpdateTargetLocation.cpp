// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_JumpingPlatforms/Characters/AI/Tasks/TaskUpdateTargetLocation.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UTaskUpdateTargetLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	if(Blackboard)
	{
		TargetActor = Cast<AActor>(Blackboard->GetValueAsObject(TargetActorKey.SelectedKeyName));
		if(!TargetActor)
		{
			FinishLatentTask(OwnerComp, EBTNodeResult::Type::Failed);
			return EBTNodeResult::Type::Failed;
		}

		Blackboard->SetValueAsVector(TargetLocationKey.SelectedKeyName, TargetActor->GetActorLocation());
		
		FinishLatentTask(OwnerComp, EBTNodeResult::Type::Succeeded);
		return EBTNodeResult::Type::Succeeded;
	}

	FinishLatentTask(OwnerComp, EBTNodeResult::Type::Failed);
	return EBTNodeResult::Type::Failed;
}
