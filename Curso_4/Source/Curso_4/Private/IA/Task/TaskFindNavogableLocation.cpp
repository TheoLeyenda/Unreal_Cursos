// Fill out your copyright notice in the Description page of Project Settings.


#include "IA/Task/TaskFindNavogableLocation.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "NavigationSystem.h"
#include "AI/Navigation/NavigationTypes.h"

EBTNodeResult::Type UTaskFindNavogableLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	FVector OwnerLocation = OwnerComp.GetAIOwner()->GetPawn()->GetActorLocation();
	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();
	if(Blackboard)
	{
		FNavLocation LocationReached;
		UNavigationSystemV1* NavigationSystem = Cast<UNavigationSystemV1>(GetWorld()->GetNavigationSystem());
		if(NavigationSystem)
		{
			if(NavigationSystem->GetRandomReachablePointInRadius(OwnerLocation, PatrolRadius, LocationReached))
			{
				FVector NewTargetPosition = LocationReached.Location;
				Blackboard->SetValueAsVector(TargetLocationKey.SelectedKeyName, NewTargetPosition);
			}
			else
			{
				Blackboard->SetValueAsVector(TargetLocationKey.SelectedKeyName, OwnerLocation);
			}
		}
		FinishLatentTask(OwnerComp, EBTNodeResult::Type::Succeeded);
		//UE_LOG(LogTemp, Warning, TEXT("Completed Task"));
	}
	else
	{
		FinishLatentTask(OwnerComp, EBTNodeResult::Type::Failed);
		//UE_LOG(LogTemp, Error, TEXT("Couldn't get owner in task"));
	}
	
	
	return Super::ExecuteTask(OwnerComp, NodeMemory);
}
