// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class CURSO_4_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	APlayerCharacter();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Component")
	UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Component")
	USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Component")
	UCameraComponent* FollowCamera;
public:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void OnInputAxisTurn(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void OnInputLookUp(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void OnInputAxisMoveForward(float AxisValue);

	UFUNCTION(BlueprintCallable)
	void OnInputAxisMoveRight(float AxisValue);

	UFUNCTION(BlueprintCallable)
	virtual void DeathPlayerCharacter();
	
};
