// Fill out your copyright notice in the Description page of Project Settings.


#include "Shield.h"
#include "Enemy_Cohete.h"
#include "Enemy_Airplane.h"
#include "EnemyBullet.h"
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

void AShield::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if(Portador)
	{
		FVector NewLocation = Portador->GetActorLocation();

		SetActorLocation(NewLocation);
	}
}

void AShield::InitShield()
{
	if(GetWorld())
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &AShield::DestroyShield, DelayShieldDestroy, false);
	}
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
	if(OtherActor->IsA(AEnemy_Cohete::StaticClass())
		|| OtherActor->IsA(AEnemy_Airplane::StaticClass())
		|| OtherActor->IsA(AEnemyBullet::StaticClass()))
	{

		ASpaceShooterGameMode* SpaceShooterGameMode = Cast<ASpaceShooterGameMode>(GetWorld()->GetAuthGameMode());
		if(SpaceShooterGameMode)
		{
			SpaceShooterGameMode->AddScore(); 
		}

		AEnemy_Cohete* Enemy_Cohete = Cast<AEnemy_Cohete>(OtherActor);
		if(Enemy_Cohete)
		{
			Enemy_Cohete->SpawnExplotion();
		}
		AEnemy_Airplane* Enemy_Airplane = Cast<AEnemy_Airplane>(OtherActor);
		if(Enemy_Airplane)
		{
			Enemy_Airplane->SpawnExplotion();
		}
		
		OtherActor->Destroy();
	}
}

void AShield::ResetTimer(float Delay)
{
	if(GetWorld())
	{
		DelayShieldDestroy += Delay;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &AShield::DestroyShield, DelayShieldDestroy, false);
	}
}




