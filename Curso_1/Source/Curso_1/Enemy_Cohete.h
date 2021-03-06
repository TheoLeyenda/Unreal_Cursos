// Fill out your copyright notice in the Description page of Project Settings.


//Hacer una jerarquia para los enemigos.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "SpaceShooterGameMode.h"
#include "Enemy_Cohete.generated.h"

UCLASS()
class CURSO_1_API AEnemy_Cohete : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemy_Cohete();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category= "Enemy_Cohete - Collision")
	UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere, Category= "Enemy_Cohete - Destroy")
	TSubclassOf<class AActor> ExplosionBlueprint;
	
	UPROPERTY(EditAnywhere, Category= "Enemy_Cohete - Movement")
	float Speed;

	UPROPERTY(EditAnywhere, Category= "Enemy_Cohete - Movement")
	float HeihtToDestroy;
	
	void SpawnExplotion();

	void BeginDestroy() override;
	
	UFUNCTION()
	void OnOverlap(UPrimitiveComponent* OverlappedComponent
		, AActor* OtherActor
		, UPrimitiveComponent* OtherComponent
		, int32 OtherBodyIndex
		, bool bFromSweep
		, const FHitResult& SweepResult);
};
