// Copyright Theo Leyenda 2022


#include "QuestSystem/QuestActorGeneratorID.h"
#include "Algo/Compare.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AQuestActorGeneratorID::AQuestActorGeneratorID()
{
	PrimaryActorTick.bCanEverTick = false;
}

// Called when the game starts or when spawned
void AQuestActorGeneratorID::BeginPlay()
{
	Super::BeginPlay();

	QuestActorComponentIds.Empty();
	TArray<AActor*> AuxActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AActor::StaticClass(),AuxActors);
	
	for(int i = 0; i < AuxActors.Num(); i++)
	{
		if(AuxActors[i])
		{
			NamesActors.Add(AuxActors[i]->GetName());
		}
	}

	NamesActors.Sort();

	for(int i = 0; i < NamesActors.Num(); i++)
	{
		for(AActor* Actor : AuxActors)
		{
			if(Actor->GetName() == NamesActors[i])
			{
				Actors.Add(Actor);
			}
		}
	}

	ShowNamesActors();
	
	for(AActor* Actor : Actors)
	{
		if(Actor)
		{
			UQuestActorComponentID* QuestActorComponentID = Cast<UQuestActorComponentID>(Actor->GetComponentByClass(UQuestActorComponentID::StaticClass()));
			if(QuestActorComponentID)
			{
				QuestActorComponentIds.Add(QuestActorComponentID);
			}
		}
	}
	
	for(int i = 0; i < QuestActorComponentIds.Num(); i++)
	{
		if(QuestActorComponentIds[i])
		{
			QuestActorComponentIds[i]->ID = i;
		}
	}
}

void AQuestActorGeneratorID::ShowNamesActors()
{
	if(bShowNames)
	{
		for(AActor* Actor : Actors)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Actor->GetName());
		}
	}
}
