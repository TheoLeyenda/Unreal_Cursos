// Copyright Theo Leyenda 2022

#include "QuestSystem/QuestEvaluatorComponent.h"

#include "BuildingEscapeGameMode.h"
#include "QuestSystem/BaseTask.h"

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
		if(Tasks.Num() > 0)
		{
			for(UBaseTask* Task : Tasks)
			{
				if(Task)
				{
					Task->FindInformation();
					Task->BuildingScapeCharacter = BuildingScapeCharacter;
					Task->OnUpdateTask.AddDynamic(this, &UQuestEvaluatorComponent::SettingDataPlayer);
					Task->SettingDataBaseTask(true);
				}
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("No hay tasks en el QuestEvaluatorComponent"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("NO SE PUDO ENCONTRAR AL CHARACTER EN QuestEvaluatorComponent"));
	}
}

void UQuestEvaluatorComponent::SettingDataPlayer(FDataPlayer NewData, bool bForceSend)
{

	if(!BuildingScapeCharacter)
	{
		return;
	}

	if(!BuildingScapeCharacter->PlayerInventoryComponent)
	{
		return;
	}
	
	DataPlayer.Fatness = NewData.Fatness;
	DataPlayer.Lifes = NewData.Lifes;

	DataPlayer.LastInteractActorInfo.ID = NewData.LastInteractActorInfo.ID;
	DataPlayer.LastInteractActorInfo.ActorBlueprint = NewData.LastInteractActorInfo.ActorBlueprint;
	
	DataPlayer.InventoryComponent = NewData.InventoryComponent;
	DataPlayer.NeedItems = NewData.NeedItems;

	//UE_LOG(LogTemp, Warning, TEXT("Envie el Update del OnQuestEvaluatorDataUpdate"));
	OnQuestEvaluatorDataUpdate.Broadcast(this, bForceSend);
}
