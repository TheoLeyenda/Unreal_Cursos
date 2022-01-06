// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "Shield.generated.h"

UCLASS()
class CURSO_1_API AShield : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShield();

	virtual void InitShield();	

	virtual void Tick(float DeltaSeconds) override;
	
	virtual void BeginDestroy() override;

	void DestroyShield();

	void ResetTimer();
	
	float DelayShieldDestroy;
	FTimerHandle TimerHandle;

	AActor* Portador;
	
	UPROPERTY(EditAnywhere, Category= "PowerUp - FatherClass")
	USphereComponent* SphereComponent;

	
	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComponent
		, AActor* OtherActor
		, UPrimitiveComponent* OtherComponent
		, int32 OtherBodyIndex
		, bool bFromSweep
		, const FHitResult& SweepResult);
};
