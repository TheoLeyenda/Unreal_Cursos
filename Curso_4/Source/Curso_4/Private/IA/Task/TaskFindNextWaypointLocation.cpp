// Fill out your copyright notice in the Description page of Project Settings.


#include "IA/Task/TaskFindNextWaypointLocation.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Enemys/EnemyGuardCharacter.h"

EBTNodeResult::Type UTaskFindNextWaypointLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AEnemyGuardCharacter* EnemyGuardCharacter = Cast<AEnemyGuardCharacter>(OwnerComp.GetAIOwner()->GetPawn());
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	if(!EnemyGuardCharacter)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Type::Failed);
	}
	else if(!Blackboard)
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Type::Failed);
	}
	else
	{
		Blackboard->SetValueAsVector(TargetLocationKey.SelectedKeyName, EnemyGuardCharacter->GetNextWaypointPatrol());
		FinishLatentTask(OwnerComp, EBTNodeResult::Type::Succeeded);
	}
	return Super::ExecuteTask(OwnerComp, NodeMemory);
}
