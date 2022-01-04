// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Cohete.h"

// Sets default values
AEnemy_Cohete::AEnemy_Cohete()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemy_Cohete::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemy_Cohete::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewActorLocation = GetActorLocation();
	NewActorLocation.Y -= Speed * DeltaTime;	

	if(NewActorLocation.Y <= HeihtToDestroy)
	{
		this->Destroy();
	}
}

