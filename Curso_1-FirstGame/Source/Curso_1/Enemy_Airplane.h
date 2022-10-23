// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Enemy_Airplane.generated.h"

UCLASS()
class CURSO_1_API AEnemy_Airplane : public AActor
{
	GENERATED_BODY()

protected:
	void BeginPlay() override;
public:	
	// Sets default values for this actor's properties
	AEnemy_Airplane();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category= "Enemy_Airplane - Collision")
	UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere, Category= "Enemy_Airplane - Movement")
	float Speed;

	UPROPERTY(EditAnywhere, Category= "Enemy_Airplane - Movement")
	float Min_Pos_X;

	UPROPERTY(EditAnywhere, Category= "Enemy_Airplane - Movement")
	float Max_Pos_X;

	bool rightDirection = true; //Cambiar esto por un enumerador de direccion luego.
	
	UPROPERTY(EditAnywhere, Category= "Enemy_Airplane - Attack")
	FVector OffsetSpawnShoot;

	UPROPERTY(EditAnywhere, Category= "Enemy_Airplane - Attack")
	float DelayShoot = 1.5f;

	UPROPERTY(EditAnywhere, Category= "Enemy_Airplane - Attack")
	TSubclassOf<class AEnemyBullet> EnemyBulletBlueprint;
	
	UPROPERTY(EditAnywhere, Category= "Enemy_Cohete - Destroy")
	TSubclassOf<class AActor> ExplosionBlueprint;
	
	FTimerHandle TimerAttack;
	
	void Shoot();

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
