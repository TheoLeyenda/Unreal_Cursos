// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Perception/AIPerceptionTypes.h"
#include "AI_JumpingPlatforms/Characters/AI/TestBotController.h"
#include "Perception/AISenseConfig_Sight.h"
#include "TestBotCharacter.generated.h"

UCLASS()
class AI_JUMPINGPLATFORMS_API ATestBotCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATestBotCharacter();
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	bool bEnableLostTarget = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	float SightRadius = 1500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	float LoseSightRadius = 2000.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	float PeripheralVisionAngle = 75.0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	bool bDetectedEnemies = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Settings")
	bool bDetectedNeutrals = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	bool bDetectedFriendlies = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	UAIPerceptionComponent* AIPerception;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	UAISenseConfig_Sight* SightConfig;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= "settings")
	AActor* PerceivedActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	float DelayToTargetLost = 5.0f;

	FTimerHandle TimerTargetLost;

	ATestBotController* TestBotController;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	UFUNCTION()
	void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

	UFUNCTION()
	void TargetLost();

};
