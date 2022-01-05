// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Enemy_Cohete.generated.h"

UCLASS()
class CURSO_1_API AEnemy_Cohete : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy_Cohete();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category= "Spaceship - Collision")
	UBoxComponent* BoxComponent;

	
	UPROPERTY(EditAnywhere, Category= "Enemy_Cohete - Movement")
	float Speed;

	UPROPERTY(EditAnywhere, Category= "Enemy_Cohete - Movement")
	float HeihtToDestroy;
};
