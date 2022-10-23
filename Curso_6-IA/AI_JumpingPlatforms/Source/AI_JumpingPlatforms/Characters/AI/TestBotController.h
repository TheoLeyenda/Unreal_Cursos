// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TestBotController.generated.h"

/**
 * 
 */
UCLASS()
class AI_JUMPINGPLATFORMS_API ATestBotController : public AAIController
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	FName TargetActorName = FName("TargetActor");

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	FName HasLineOfSightName = FName("HasLineOfSight");

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	UBehaviorTree* CurrentBehaviorTree;

	virtual void OnPossess(APawn* InPawn) override;

	UFUNCTION(BlueprintCallable)
	void UpdateTargetActorKey(AActor* TargetActor);

	UFUNCTION(BlueprintCallable)
	void UpdateHasLineOfSightKey(bool HasLineOfSight);
};
