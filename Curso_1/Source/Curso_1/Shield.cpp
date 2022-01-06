// Fill out your copyright notice in the Description page of Project Settings.


#include "Shield.h"
#include "Enemy_Cohete.h"
#include "Chaos/GeometryParticlesfwd.h"

// Sets default values
AShield::AShield()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
	SphereComponent->SetGenerateOverlapEvents(true);
	SphereComponent->OnComponentBeginOverlap.AddDynamic(this,&AShield::OnOverlap);
}

void AShield::InitShield()
{
	if(GetWorld())
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &AShield::DestroyShield, DelayShieldDestroy, false);
	}
}

void AShield::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	FVector NewLocation = Portador->GetActorLocation();
	SetActorLocation(NewLocation);
}

void AShield::BeginDestroy()
{
	if(GetWorld())
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	}
	
	Super::BeginDestroy();
}

void AShield::DestroyShield()
{
	Destroy();
}

void AShield::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor->IsA(AEnemy_Cohete::StaticClass()))
	{
		OtherActor->Destroy();
	}
}

void AShield::ResetTimer()
{
	if(GetWorld())
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &AShield::DestroyShield, DelayShieldDestroy, false);
	}
}




