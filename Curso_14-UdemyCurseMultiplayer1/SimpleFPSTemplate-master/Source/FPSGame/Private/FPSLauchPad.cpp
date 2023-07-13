// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSLauchPad.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"

AFPSLauchPad::AFPSLauchPad()
{
	PrimaryActorTick.bCanEverTick = false;
	OverlapComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapComp"));
	OverlapComponent->SetBoxExtent(FVector(75, 75, 50));
	RootComponent = OverlapComponent;

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComponent->SetupAttachment(RootComponent);

	OverlapComponent->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OverlapLauchPad);

	LauchStrength = 1500;
	LauchPitchAngle = 35.0f;
}

void AFPSLauchPad::SpawnActivateParticles()
{
	if(ActivateLauchPadEffect)
	{
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ActivateLauchPadEffect, GetActorLocation());
	}
}

void AFPSLauchPad::OverlapLauchPad(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	LauchDirection = GetActorRotation();
	LauchDirection.Pitch += LauchPitchAngle;
	LauchVelocity = LauchDirection.Vector() * LauchStrength;

	if(auto* OtherCharacter = Cast<ACharacter>(OtherActor))
	{
		OtherCharacter->LaunchCharacter(LauchVelocity, true, true);

		SpawnActivateParticles();
	}
	else if(OtherComp && OtherComp->IsSimulatingPhysics())
	{
		OtherComp->AddImpulse(LauchVelocity, NAME_None, true);
		
		SpawnActivateParticles();
	}
}

