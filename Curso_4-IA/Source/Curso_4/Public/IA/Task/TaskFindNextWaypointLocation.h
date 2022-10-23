// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TaskFindNextWaypointLocation.generated.h"

/**
 * 
 */
UCLASS()
class CURSO_4_API UTaskFindNextWaypointLocation : public UBTTaskNode
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	FBlackboardKeySelector TargetLocationKey;

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
