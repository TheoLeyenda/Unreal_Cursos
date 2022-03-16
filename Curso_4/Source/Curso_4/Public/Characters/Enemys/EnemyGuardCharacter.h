// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Characters/Controllers/EnemyGuardController.h"
#include "Components/SplineComponent.h"
#include "GameFramework/Character.h"
#include "EnemyGuardCharacter.generated.h"

UCLASS()
class CURSO_4_API AEnemyGuardCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AEnemyGuardCharacter();

	FVector GetNextWaypointPatrol();
	
protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Components")
	USplineComponent* SplineComponent;
	
	AEnemyGuardController* EnemyGuardController;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= "Settings")
	float CurrentDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	float DistanceToNextWaypoint = 800.0f;
	
	virtual void BeginPlay() override;
};
