// Fill out your copyright notice in the Description page of Project Settings.


#include "Shield_PowerUp.h"
#include "Bullet.h"
#include "Spaceship.h"

AShield_PowerUp::AShield_PowerUp()
{
	PrimaryActorTick.bCanEverTick = false;
}


void AShield_PowerUp::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor->IsA(ABullet::StaticClass()))
	{
		//Activara un escudo al rededor del player.
		ASpaceship* Spaceship = Cast<ASpaceship>(GetWorld()->GetFirstPlayerController()->GetPawn());
		Spaceship->ActivateShield(delayEffect);
		//Destruir la bala.
		OtherActor->Destroy();
		Destroy();
		//Destruirme a mi mismo.
	}
}
