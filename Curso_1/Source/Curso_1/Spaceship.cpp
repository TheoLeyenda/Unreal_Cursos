// Fill out your copyright notice in the Description page of Project Settings.


#include "Spaceship.h"
#include "Bullet.h"
#include "Enemy_Cohete.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASpaceship::ASpaceship()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	BoxComponent->SetGenerateOverlapEvents(true);
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this,&ASpaceship::OnOverlap);
	
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called every frame
void ASpaceship::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if(!CurrentVelocity.IsZero())
	{
		FVector NewLocation = GetActorLocation() + speed * CurrentVelocity * DeltaTime;

		SetActorLocation(NewLocation);
	}
}

void ASpaceship::MoveX(float AxiesValue)
{
	CurrentVelocity.X = AxiesValue * 100.0f;
}

void ASpaceship::MoveY(float AxiesValue)
{
	CurrentVelocity.Y = AxiesValue * 100.0f;
}

void ASpaceship::Shoot()
{
	UWorld* World = GetWorld();
	if(World)
	{
		FVector SpawnLocation = OffsetSpawnBullet + GetActorLocation();
		World->SpawnActor<ABullet>(BulletBlueprint, SpawnLocation, FRotator::ZeroRotator);
	}

	if(IsValid(DobleCannon))
	{
		DobleCannon->ShootCannons();
	}
}

void ASpaceship::OnOverlap(UPrimitiveComponent* OverlappedComponent
		, AActor* OtherActor
		, UPrimitiveComponent* OtherComponent
		, int32 OtherBodyIndex
		, bool bFromSweep
		, const FHitResult& SweepResult)
{
	if(OtherActor->IsA(AEnemy_Cohete::StaticClass()))
	{
		ASpaceShooterGameMode* SpaceShooterGameMode = Cast<ASpaceShooterGameMode>(GetWorld()->GetAuthGameMode());
		if(SpaceShooterGameMode)
		{
			SpaceShooterGameMode->GameOver();
		}

		UWorld* World = GetWorld();
		if(World && ExplosionBlueprint)
		{
			World->SpawnActor<AActor>(ExplosionBlueprint, GetActorLocation(), FRotator::ZeroRotator);
		}

		UGameplayStatics::SetGamePaused(GetWorld(),true);
		
		Destroy();
	}
}

void ASpaceship::ActivateDobleCannon(float DelayActivate)
{
	UWorld* World = GetWorld();
	if(!IsValid(DobleCannon) && World && DobleCannonBlueprint)
	{
		DobleCannon = World->SpawnActor<ADobleCannon>(DobleCannonBlueprint, GetActorLocation() + OffsetSpawnBullet, FRotator::ZeroRotator);
		if(DobleCannon)
		{
			DobleCannon->DelayDobleCannonDestroy = DelayActivate;
			DobleCannon->InitDobleCannon();
			DobleCannon->User = this;
		}
	}
	else if(IsValid(DobleCannon))
	{
    	DobleCannon->ResetTimer(DelayActivate);
	}
}

void ASpaceship::ActivateShield(float DelayActivate)
{
	UWorld* World = GetWorld();
	if(!IsValid(Shield) && World && ShieldBlueprint)
	{
		Shield = World->SpawnActor<AShield>(ShieldBlueprint, GetActorLocation(), FRotator::ZeroRotator);
		if(Shield)
		{
			Shield->DelayShieldDestroy = DelayActivate;
			Shield->InitShield();
			Shield->AttachToComponent(BoxComponent,FAttachmentTransformRules::KeepRelativeTransform, NAME_None);
			Shield->SetActorLocation(GetActorLocation());
		}
	}
	else if(IsValid(Shield))
	{
		Shield->ResetTimer(DelayActivate);
	}
}


