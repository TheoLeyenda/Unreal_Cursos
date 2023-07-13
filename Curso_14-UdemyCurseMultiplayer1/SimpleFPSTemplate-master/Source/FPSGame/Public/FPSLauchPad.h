// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSLauchPad.generated.h"

UCLASS()
class FPSGAME_API AFPSLauchPad : public AActor
{
	GENERATED_BODY()
public:	
	AFPSLauchPad();

protected:
	UPROPERTY(VisibleAnywhere, Category= "Components")
	UStaticMeshComponent* MeshComponent = nullptr;

	UPROPERTY(VisibleAnywhere, Category= "Components")
	class UBoxComponent* OverlapComponent = nullptr;

	UFUNCTION()
	void OverlapLauchPad(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UPROPERTY(EditInstanceOnly, Category= "LauchPad")
	float LauchStrength = 0.0f;

	UPROPERTY(EditInstanceOnly, Category= "LauchPad")
	float LauchPitchAngle = 0.0f;

	UPROPERTY(EditDefaultsOnly, Category= "LauchPad")
	UParticleSystem* ActivateLauchPadEffect = nullptr;

private:
	FRotator LauchDirection = FRotator::ZeroRotator;
	FVector LauchVelocity = FVector::Zero();
	
	void SpawnActivateParticles();

};
