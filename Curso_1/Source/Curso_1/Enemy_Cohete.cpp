// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Cohete.h"
#include "Bullet.h"

// Sets default values
AEnemy_Cohete::AEnemy_Cohete()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
	BoxComponent->SetBoxExtent(FVector(32.0f, 70.18438f,32.0f), false);
	BoxComponent->SetGenerateOverlapEvents(true);
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this,&AEnemy_Cohete::OnOverlap);
}

// Called every frame
void AEnemy_Cohete::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewActorLocation = GetActorLocation();
	NewActorLocation.Y -= Speed * DeltaTime;	

	SetActorLocation(NewActorLocation);
	
	if(NewActorLocation.Y <= HeihtToDestroy)
	{
		this->Destroy();
	}
}

void AEnemy_Cohete::SpawnExplotion()
{
	UWorld* World = GetWorld();
	if(World && ExplosionBlueprint)
	{
		World->SpawnActor<AActor>(ExplosionBlueprint, GetActorLocation(), FRotator::ZeroRotator);
	}
}

void AEnemy_Cohete::OnOverlap(UPrimitiveComponent* OverlappedComponent
		, AActor* OtherActor
		, UPrimitiveComponent* OtherComponent
		, int32 OtherBodyIndex
		, bool bFromSweep
		, const FHitResult& SweepResult)
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
