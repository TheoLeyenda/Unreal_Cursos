// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PowerUp.h"
#include "DobleCannon_PowerUp.generated.h"

/**
 * 
 */
UCLASS()
class CURSO_1_API ADobleCannon_PowerUp : public APowerUp
{
	GENERATED_BODY()

	ADobleCannon_PowerUp();

	virtual void OnOverlap(UPrimitiveComponent* OverlappedComponent
		, AActor* OtherActor
		, UPrimitiveComponent* OtherComponent
		, int32 OtherBodyIndex
		, bool bFromSweep
		, const FHitResult& SweepResult) override;
};
