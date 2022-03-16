// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIControllerBase.generated.h"

/**
 * 
 */
UCLASS()
class CURSO_4_API AAIControllerBase : public AAIController
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	UBehaviorTree* CurrentBehaviorTree;

	virtual void OnPossess(APawn* InPawn) override;
};
