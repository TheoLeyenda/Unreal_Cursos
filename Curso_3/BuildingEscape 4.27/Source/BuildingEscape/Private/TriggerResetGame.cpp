// Copyright Theo Leyenda 2022


#include "TriggerResetGame.h"
#include "Kismet/GameplayStatics.h"
#include "BuildingEscapeGameMode.h"

ATriggerResetGame::ATriggerResetGame()
{
	PrimaryActorTick.bCanEverTick = false;
	BoxTriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxTriggerVolume"));
}

void ATriggerResetGame::BeginPlay()
{
	Super::BeginPlay();
	BoxTriggerVolume->OnComponentBeginOverlap.AddDynamic(this,&ATriggerResetGame::OnOverlapBegin);
}

void ATriggerResetGame::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	for(int i = 0; i < ActorsToReset.Num(); i++)
	{
		if(OtherActor->GetClass() == ActorsToReset[i])
		{
			ABuildingEscapeGameMode* BuildingEscapeGameMode = Cast<ABuildingEscapeGameMode>(GetWorld()->GetAuthGameMode());
			if(BuildingEscapeGameMode)
			{
				BuildingEscapeGameMode->Restart();
			}
			return;
		}
	}
}

