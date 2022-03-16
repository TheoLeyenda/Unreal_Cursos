// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Enemys/EnemyGuardCharacter.h"

// Sets default values
AEnemyGuardCharacter::AEnemyGuardCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));

	if(SplineComponent)
	{
		SplineComponent->SetupAttachment(RootComponent);
	}
}

FVector AEnemyGuardCharacter::GetNextWaypointPatrol()
{
	CurrentDistance = CurrentDistance + DistanceToNextWaypoint;
	if(CurrentDistance > SplineComponent->GetSplineLength())
	{
		CurrentDistance = CurrentDistance - SplineComponent->GetSplineLength();
	}
	return SplineComponent->GetLocationAtDistanceAlongSpline(CurrentDistance, ESplineCoordinateSpace::World);
}

// Called when the game starts or when spawned
void AEnemyGuardCharacter::BeginPlay()
{
	Super::BeginPlay();

	EnemyGuardController = Cast<AEnemyGuardController>(GetController());

	if(SplineComponent)
	{
		SplineComponent->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);
	}
}


