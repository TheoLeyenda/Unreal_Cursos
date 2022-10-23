// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIControllerBase.h"
#include "NPCController.generated.h"

/**
 * 
 */
UCLASS()
class CURSO_4_API ANPCController : public AAIControllerBase
{
	GENERATED_BODY()
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FName TargetActorName = FName("TargetActor");
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	FName HasLineOfSightName = FName("HasLineOfSight");

public:

	UFUNCTION(BlueprintCallable)
	void UpdateTargetActorKey(AActor* TargetActor);

	UFUNCTION(BlueprintCallable)
	void UpdateHasLineOfSightKey(bool HasLineOfSight);
};
