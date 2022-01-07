// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "PowerUp.generated.h"

UCLASS()
class CURSO_1_API APowerUp : public AActor
{
	GENERATED_BODY()
	
public:

	// Sets default values for this actor's properties
	APowerUp();
	
	UPROPERTY(EditAnywhere, Category="PowerUp - FatherClass")
	float delayEffect;

	//Si se le dispara al powerUp se ejecuta el efecto de este.
	UPROPERTY(EditAnywhere, Category= "PowerUp - FatherClass")
	USphereComponent* SphereComponent;

	UFUNCTION()
    virtual void OnOverlap(UPrimitiveComponent* OverlappedComponent
    	, AActor* OtherActor
    	, UPrimitiveComponent* OtherComponent
    	, int32 OtherBodyIndex
    	, bool bFromSweep
    	, const FHitResult& SweepResult);
};
