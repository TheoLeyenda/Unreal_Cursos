// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Bullet.generated.h"

UCLASS()
class CURSO_1_API ABullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABullet();

	// Called every frame
	virtual void Tick(float DeltaTime) override;	
	
	UPROPERTY(EditAnywhere, Category= "Bullet - Movement")
	float Speed = 300.0f;

	UPROPERTY(EditAnywhere, Category= "Bullet - Movement")
	float HeihtToDestroy;

	UPROPERTY(EditAnywhere, Category= "Bullet - Collision")
	UBoxComponent* BoxComponent;
};
