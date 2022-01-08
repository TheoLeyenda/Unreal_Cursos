// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SpaceshipController.generated.h"

/**
 * 
 */
UCLASS()
class CURSO_1_API ASpaceshipController : public APlayerController
{
	GENERATED_BODY()

	class ASpaceship* Spaceship;
protected:
	bool bHasInitializedInputComponent = false;

	void BeginPlay() override;
public:

	
	virtual void SetupInputComponent() override;

	void MoveX_Axies(float AxiesValue);
	void MoveY_Axies(float AxiesValue);
	void OnShootPress();
	void OnResetPress();
};
