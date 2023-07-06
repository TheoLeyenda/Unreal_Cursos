// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSObjectiveActor.generated.h"

UCLASS()
class FPSGAME_API AFPSObjectiveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSObjectiveActor();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Components")
	UStaticMeshComponent* MeshComp = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Components")
	class USphereComponent* SphereComp = nullptr;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void PlayPickupEffects();

	void PlayUpdateFX();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	UParticleSystem* UpdateFX = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category= "Settings")
	UParticleSystem* PickupFX = nullptr;

	UPROPERTY()
	UParticleSystemComponent* UpdateFXSystemComponent = nullptr;
public:	
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	
};
