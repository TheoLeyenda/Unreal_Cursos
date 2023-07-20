// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSObjectiveActor.h"

#include "FPSCharacter.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"

AFPSObjectiveActor::AFPSObjectiveActor()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;
	
	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetupAttachment(MeshComp);

	SetReplicates(true);
}

void AFPSObjectiveActor::BeginPlay()
{
	Super::BeginPlay();

	PlayUpdateFX();
}

void AFPSObjectiveActor::PlayPickupEffects()
{
	if(PickupFX)
	{
		UGameplayStatics::SpawnEmitterAtLocation(this, PickupFX, GetActorLocation());
	}
}

void AFPSObjectiveActor::PlayUpdateFX()
{
	if(UpdateFX)
	{
		UpdateFXSystemComponent = UGameplayStatics::SpawnEmitterAtLocation(this, UpdateFX, GetActorLocation());
	}
}

void AFPSObjectiveActor::NotifyActorBeginOverlap(AActor* OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	if(auto* MyCharacter = Cast<AFPSCharacter>(OtherActor))
	{
		
		PlayPickupEffects();
		if(UpdateFXSystemComponent)
		{
			UpdateFXSystemComponent->DestroyComponent();
		}
		
		if(HasAuthority())
		{
			MyCharacter->bIsCarryingObjetive = true;
			Destroy();
		}
	}
}

