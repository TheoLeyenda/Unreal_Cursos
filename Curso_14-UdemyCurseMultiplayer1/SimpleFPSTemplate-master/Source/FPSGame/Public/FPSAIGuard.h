// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TargetPoint.h"
#include "GameFramework/Character.h"
#include "Perception/PawnSensingComponent.h"
#include "FPSAIGuard.generated.h"

UENUM(BlueprintType)
enum class EAIGuardState : uint8
{
	Initial,
	Idle,
	Suspicious,
	Alerted,
};

UCLASS()
class FPSGAME_API AFPSAIGuard : public ACharacter
{
	GENERATED_BODY()

public:
	AFPSAIGuard();

protected:
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;
	
	UFUNCTION()
	void OnPawnSeen(APawn* SeenPawn);

	UFUNCTION()
	void OnNoiseHeard(APawn* NoiseInstigator, const FVector& Location, float Volume);

	UFUNCTION()
	void ResetOrientation();
	
	UPROPERTY(VisibleAnywhere, Category= "Components")
	UPawnSensingComponent* PawnSensingComponent = nullptr;

	UPROPERTY()
	FRotator OriginalRotation = FRotator::ZeroRotator;
	
	FTimerHandle TimerHandle_ResetOrientation;

	EAIGuardState GuardState = EAIGuardState::Initial;

	UFUNCTION(BlueprintCallable)
	void SetGuardState(EAIGuardState NewState);

	UFUNCTION(BlueprintImplementableEvent)
	void OnStateChanged(EAIGuardState NewState);
	
	//PATROL CODE
	UPROPERTY(EditAnywhere, Category= "Settings")
	bool bPatrol = true;
	
	UPROPERTY(EditAnywhere, Category="Settings", meta = (EditCondition = "bPatrol"))
	TArray<ATargetPoint*> TargetPoints;
	
	UPROPERTY(VisibleAnywhere, Category="Settings")
	ATargetPoint* CurrentPatrolPoint = nullptr;

	int CurrentIndex = 0;
	
	void InitPatrol();

	void UpdatePatrol();
	
	void MoveToNextPatrolPoint();

	void StopPatrolMovement();

	void ResumePatrolMovement();
	//---------------//
};
