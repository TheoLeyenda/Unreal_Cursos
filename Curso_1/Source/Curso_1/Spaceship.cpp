// Fill out your copyright notice in the Description page of Project Settings.


#include "Spaceship.h"
#include "Bullet.h"
#include "Enemy_Cohete.h"
#include "Components/BoxComponent.h"
#include "GameFramework/PawnMovementComponent.h"
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

// Called to bind functionality to input
void ASpaceship::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Movement_X", this, &ASpaceship::MoveX_Axies);
	PlayerInputComponent->BindAxis("Movement_Y", this, &ASpaceship::MoveY_Axies);
	PlayerInputComponent->BindAction("Shoot",IE_Pressed, this, &ASpaceship::OnShootPress);
	PlayerInputComponent->BindAction("Reset", IE_Pressed, this, &ASpaceship::OnResetPress).bExecuteWhenPaused = true;
}

void ASpaceship::MoveX_Axies(float AxiesValue)
{
	CurrentVelocity.X = AxiesValue * 100.0f;
}

void ASpaceship::MoveY_Axies(float AxiesValue)
{
	CurrentVelocity.Y = AxiesValue * 100.0f;
}

void ASpaceship::OnShootPress()
{
	UWorld* World = GetWorld();
	if(World)
	{
		FVector SpawnLocation = OffsetSpawnBullet + GetActorLocation();
		World->SpawnActor<ABullet>(BulletBlueprint, SpawnLocation, FRotator::ZeroRotator);
	}
}

void ASpaceship::OnResetPress()
{
	if(isDead)
	{
		UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()), false);
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
		isDead = true;
		SetActorHiddenInGame(true);
		UGameplayStatics::SetGamePaused(GetWorld(),true);

		UWorld* World = GetWorld();
		if(World && ExplosionBlueprint)
		{
			World->SpawnActor<AActor>(ExplosionBlueprint, GetActorLocation(), FRotator::ZeroRotator);
		}
	}
}


