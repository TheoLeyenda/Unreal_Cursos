// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TaskUpdateTargetLocation.generated.h"

/**
 * 
 */
UCLASS()
class AI_JUMPINGPLATFORMS_API UTaskUpdateTargetLocation : public UBTTaskNode
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleAnywhere, Category="Settings")
	AActor* TargetActor;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FBlackboardKeySelector TargetActorKey;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	FBlackboardKeySelector TargetLocationKey;
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
