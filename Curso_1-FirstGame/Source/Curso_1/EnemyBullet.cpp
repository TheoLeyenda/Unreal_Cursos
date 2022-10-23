// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyBullet.h"

// Sets default values
AEnemyBullet::AEnemyBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	BoxComponent->SetBoxExtent(FVector(5.0f, 25.0f, 5.0f), false);
}

// Called every frame
void AEnemyBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//-transform.right * (speed * Time.deltaTime)
	FVector NewLocation = GetActorLocation();

	NewLocation = NewLocation - (GetActorRightVector() * DeltaTime * Speed);

	SetActorLocation(NewLocation);
	
	if(NewLocation.Y <= HeihtToDestroy)
	{
		this->Destroy();
	}
}

