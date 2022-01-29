// Copyright Theo Leyenda 2022


#include "BuildingEscapeGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "BuildingScapeCharacter.h"
#include "InventoryComponent.h"

void ABuildingEscapeGameMode::BeginPlay()
{
	Super::BeginPlay();

	FindPlayerSpawn();

	FindSpawners();

	Restart();
}

void ABuildingEscapeGameMode::FindPlayerSpawn()
{
	PlayerStart = Cast<APlayerStart>(FindPlayerStart(GetWorld()->GetFirstPlayerController(),"Player Start"));
}

void ABuildingEscapeGameMode::Restart()
{
	ABuildingScapeCharacter* BuildingEscapeGameMode = Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	BuildingEscapeGameMode->SetActorLocation(PlayerStart->GetActorLocation());
	for(AObjectSpawner* Spawner : SpawnersObjects)
	{
		Spawner->DestroySpawnedObjects();
		Spawner->SendTimerSpawnObject();
	}

	Character = Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());
	if(Character)
	{
		Character->Destroy();
	}
	RestartPlayer(GetWorld()->GetFirstPlayerController());
}

void ABuildingEscapeGameMode::FindSpawners()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(),SpawnerObjectClass,AuxArrayActors);

	SpawnersObjects.Empty();

	for(AActor* Spawner : AuxArrayActors)
	{
		SpawnersObjects.Add(Cast<AObjectSpawner>(Spawner));
	}
}


