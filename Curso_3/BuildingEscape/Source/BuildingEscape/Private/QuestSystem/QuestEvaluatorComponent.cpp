// Copyright Theo Leyenda 2022


#include "QuestSystem/QuestEvaluatorComponent.h"

#include "BuildingEscapeGameMode.h"
#include "QuestSystem/Task.h"

// Sets default values for this component's properties
UQuestEvaluatorComponent::UQuestEvaluatorComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UQuestEvaluatorComponent::BeginPlay()
{
	Super::BeginPlay();

	DataPlayer = FDataPlayer();
	
	BuildingEscapeGameMode = Cast<ABuildingEscapeGameMode>(GetWorld()->GetAuthGameMode());

	if(BuildingEscapeGameMode)
	{
		BuildingScapeCharacter = BuildingEscapeGameMode->FindCurrentCharacter();
	}
	if(BuildingScapeCharacter)
	{
		for(ATask* Task : Tasks)
		{
			Task->BuildingScapeCharacter = BuildingScapeCharacter;
			Task->OnUpdateTask.AddDynamic(this, &UQuestEvaluatorComponent::SettingDataPlayer);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NO SE PUDO ENCONTRAR AL CHARACTER EN QuestEvaluatorComponent"));
	}
}

void UQuestEvaluatorComponent::SettingDataPlayer(FDataPlayer NewData)
{
	DataPlayer.Fatness = NewData.Fatness;
	DataPlayer.Lifes = NewData.Lifes;

	for(int i = 0; i < NewData.InteractActorsActivateData.Num(); i++)
	{
		DataPlayer.InteractActorsActivateData.Add(
			FInteractActorActivateData(
				NewData.InteractActorsActivateData[i].ActorBlueprint
				, NewData.InteractActorsActivateData[i].Actor)
			);
	}

	OnQuestEvaluatorDataUpdate.Broadcast(this);
}
