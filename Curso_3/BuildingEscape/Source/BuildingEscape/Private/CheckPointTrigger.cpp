// Copyright Theo Leyenda 2022

#include "CheckPointTrigger.h"

void ACheckPointTrigger::BeginPlay()
{
	Super::BeginPlay();
	BuildingEscapeGameMode = Cast<ABuildingEscapeGameMode>(GetWorld()->GetAuthGameMode());
	if(BuildingEscapeGameMode)
	{
		PlayerStart = BuildingEscapeGameMode->PlayerStart;
	}
	
}

void ACheckPointTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
                                        UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	if(BuildingEscapeGameMode && PointToCurrentRespawn)
	{
		if(BuildingEscapeGameMode->FindCurrentCharacter()->GetClass() == OtherActor->GetClass())
		{
			if(!PlayerStart)
			{
				BuildingEscapeGameMode->FindCurrentPlayerStart();
				BuildingEscapeGameMode->ChangeMovilityPlayerState();
				PlayerStart = BuildingEscapeGameMode->PlayerStart;
			}
			if(PlayerStart)
			{
				PlayerStart->SetActorLocation(PointToCurrentRespawn->GetActorLocation());
				OnCompleteInteractTrigger.Broadcast(this);
				OnCheckPointTrigger.Broadcast(this);
				
				Destroy();
			}
		}
	}
}
