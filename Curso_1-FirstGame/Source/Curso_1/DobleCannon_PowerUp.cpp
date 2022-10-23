// Fill out your copyright notice in the Description page of Project Settings.


#include "DobleCannon_PowerUp.h"
#include "Bullet.h"
#include "Spaceship.h"
#include "Chaos/GeometryParticlesfwd.h"

ADobleCannon_PowerUp::ADobleCannon_PowerUp()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ADobleCannon_PowerUp::OnOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(OtherActor->IsA(ABullet::StaticClass()))
	{
		//Activara un doble cañon en el player.
		ASpaceship* Spaceship = Cast<ASpaceship>(GetWorld()->GetFirstPlayerController()->GetPawn());
		Spaceship->ActivateDobleCannon(delayEffect);
		//Destruira la bala.
		OtherActor->Destroy();
		//Destruirme a mi mismo.
		Destroy();
	}
}
