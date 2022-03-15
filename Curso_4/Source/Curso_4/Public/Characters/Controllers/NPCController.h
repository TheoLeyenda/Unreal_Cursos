// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NPCController.generated.h"

/**
 * 
 */
UCLASS()
class CURSO_4_API ANPCController : public AAIController
{
	GENERATED_BODY()
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FName TargetActorName = FName("TargetActor");
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FName HasLineOfSightName = FName("HasLineOfSight");
	
	virtual void OnPossess(APawn* InPawn) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	UBehaviorTree* CurrentBehaviorTree;

	UFUNCTION(BlueprintCallable)
	void UpdateTargetActorKey(AActor* TargetActor);

	UFUNCTION(BlueprintCallable)
	void UpdateHasLineOfSightKey(bool HasLineOfSight);
};
