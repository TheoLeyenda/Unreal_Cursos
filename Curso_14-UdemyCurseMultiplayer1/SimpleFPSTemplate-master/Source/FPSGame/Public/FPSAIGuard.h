// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
	
public:	
	virtual void Tick(float DeltaTime) override;
	
};
