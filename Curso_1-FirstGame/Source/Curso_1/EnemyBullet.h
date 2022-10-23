// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "EnemyBullet.generated.h"

UCLASS()
class CURSO_1_API AEnemyBullet : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyBullet();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category= "Bullet - Movement")
	float Speed = 300.0f;

	UPROPERTY(EditAnywhere, Category= "Bullet - Movement")
	float HeihtToDestroy;

	UPROPERTY(EditAnywhere, Category= "Bullet - Collision")
	UBoxComponent* BoxComponent;
};
