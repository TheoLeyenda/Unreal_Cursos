// Fill out your copyright notice in the Description page of Project Settings.


#include "PowerUp.h"

// Sets default values
APowerUp::APowerUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
	SphereComponent->SetGenerateOverlapEvents(true);
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this,&APowerUp::OnOverlap);
}

void APowerUp::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//Redefinir en los hijos.
}

