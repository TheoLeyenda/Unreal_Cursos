// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemy_Cohete.h"
#include "PowerUp.h"
#include "Nuke_PowerUp.generated.h"

/**
 * 
 */
UCLASS()
class CURSO_1_API ANuke_PowerUp : public APowerUp
{
	GENERATED_BODY()
public:

	ANuke_PowerUp();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AEnemy_Cohete> ActorDestroy;
	
	void OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;
};
