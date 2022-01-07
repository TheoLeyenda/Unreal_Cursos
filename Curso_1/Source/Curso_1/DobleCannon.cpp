// Fill out your copyright notice in the Description page of Project Settings.


#include "DobleCannon.h"
#include "Spaceship.h"

// Sets default values
ADobleCannon::ADobleCannon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
}

void ADobleCannon::InitDobleCannon()
{
	if(GetWorld())
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &ADobleCannon::DestroyDobleCannon, DelayDobleCannonDestroy, false);
	}
}

void ADobleCannon::BeginDestroy()
{
	if(GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
	Super::BeginDestroy();
}

void ADobleCannon::DestroyDobleCannon()
{
	Destroy();
}

void ADobleCannon::ShootCannons()
{
	UWorld* World = GetWorld();
	if(World && BulletBlueprint)
	{
		SpawnCannonLocation1 = FVector::ZeroVector;
		SpawnCannonLocation2 = FVector::ZeroVector;
		
		SpawnCannonLocation1 = SpawnCannonLocation1 + GetActorLocation();
		SpawnCannonLocation2 = SpawnCannonLocation2 + GetActorLocation();
		
		World->SpawnActor<ABullet>(BulletBlueprint, SpawnCannonLocation1, SpawnCannonRotator1);

		World->SpawnActor<ABullet>(BulletBlueprint, SpawnCannonLocation2, SpawnCannonRotator2);
	}
}

void ADobleCannon::ResetTimer(float Delay)
{
	if(GetWorld())
	{
		DelayDobleCannonDestroy += Delay;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &ADobleCannon::DestroyDobleCannon, DelayDobleCannonDestroy, false);
	}
}

