// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Airplane.h"
#include "Bullet.h"
#include "SpaceShooterGameMode.h"
#include "EnemyBullet.h"

// Sets default values
AEnemy_Airplane::AEnemy_Airplane()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	BoxComponent->SetGenerateOverlapEvents(true);
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this,&AEnemy_Airplane::OnOverlap);
}

void AEnemy_Airplane::BeginPlay()
{
	Super::BeginPlay();
	int direction = FMath::RandRange(0, 100);
	if(direction > 50)
	{
		rightDirection = true;
	}
	else
	{
		rightDirection = false;
	}
	if(GetWorld())
    {
   		GetWorld()->GetTimerManager().SetTimer(TimerAttack,this, &AEnemy_Airplane::Shoot, DelayShoot, true);
    }
}


// Called every frame
void AEnemy_Airplane::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector NewLocation = GetActorLocation();
	if(rightDirection && GetActorLocation().X >= Min_Pos_X)
	{
		NewLocation.X = NewLocation.X - Speed* DeltaTime;
		if(NewLocation.X <= Min_Pos_X)
		{
			rightDirection = false;
		}
	}
	else if(!rightDirection && GetActorLocation().X <= Max_Pos_X)
	{
		NewLocation.X = NewLocation.X + Speed* DeltaTime;
		if(NewLocation.X >= Max_Pos_X)
		{
			rightDirection = true;
		}
	}
	SetActorLocation(NewLocation);
}

void AEnemy_Airplane::Shoot()
{
	UWorld* World = GetWorld();
	if(World)
	{
		FVector SpawnLocation = OffsetSpawnShoot + GetActorLocation();
		World->SpawnActor<AEnemyBullet>(EnemyBulletBlueprint, SpawnLocation, FRotator::ZeroRotator);
	}
}

void AEnemy_Airplane::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor->IsA(ABullet::StaticClass()))
	{
		SpawnExplotion();
		OtherActor->Destroy();

		ASpaceShooterGameMode* SpaceShooterGameMode = Cast<ASpaceShooterGameMode>(GetWorld()->GetAuthGameMode());
		if(SpaceShooterGameMode)
		{
			SpaceShooterGameMode->AddScore(); 
		}
		
		Destroy();
	}
}

void AEnemy_Airplane::BeginDestroy()
{
	if(GetWorld())
    {
    	GetWorld()->GetTimerManager().ClearTimer(TimerAttack);
    }
	
	Super::BeginDestroy();
}

void AEnemy_Airplane::SpawnExplotion()
{
	UWorld* World = GetWorld();
	if(World && ExplosionBlueprint)
	{
		World->SpawnActor<AActor>(ExplosionBlueprint, GetActorLocation(), FRotator::ZeroRotator);
	}
}

