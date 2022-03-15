// Fill out your copyright notice in the Description page of Project Settings.


#include "IA/Task/TaskSetKeyFloat.h"

#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UTaskSetKeyFloat::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	OwnerComp.GetBlackboardComponent()->SetValueAsFloat(FloatKey.SelectedKeyName, FloatValue);
	FinishExecute(true);
	return Super::ExecuteTask(OwnerComp, NodeMemory);;
}
