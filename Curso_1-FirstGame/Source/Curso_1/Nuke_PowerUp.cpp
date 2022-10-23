// Fill out your copyright notice in the Description page of Project Settings.


#include "Nuke_PowerUp.h"
#include "Bullet.h"
#include "Enemy_Cohete.h"
#include "Kismet/GameplayStatics.h"

ANuke_PowerUp::ANuke_PowerUp()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ANuke_PowerUp::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor->IsA(ABullet::StaticClass()))
	{
		TArray<AActor*> Actors;
		UWorld* World = GetWorld();
		if(ActorDestroy && World)
		{
			UGameplayStatics::GetAllActorsOfClass(GetWorld(),ActorDestroy, Actors);
		}
		ASpaceShooterGameMode* SpaceShooterGameMode = Cast<ASpaceShooterGameMode>(GetWorld()->GetAuthGameMode());
		
		if(Actors.Num() > 0)
		{
			for(int32 i = 0; i < Actors.Num(); i++)
			{
				AEnemy_Cohete* enemy = Cast<AEnemy_Cohete>(Actors[i]);
				if(enemy)
				{
					enemy->SpawnExplotion();
					if(SpaceShooterGameMode)
					{
						SpaceShooterGameMode->AddScore(); 
					}
				}
				Actors[i]->Destroy();
			}
		}
		//Destruir la bala.
		OtherActor->Destroy();
		//Destruirme a mi mismo.
		Destroy();
	}
}
