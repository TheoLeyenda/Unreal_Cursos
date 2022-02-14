// Copyright Theo Leyenda 2022


#include "QuestSystem/QuestEvaluatorComponent.h"

#include "BuildingEscapeGameMode.h"
#include "QuestSystem/BaseTask.h"

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
		if(Tasks.Num() > 0)
		{
			for(UBaseTask* Task : Tasks)
			{
				if(Task)
				{
					Task->FindInformation();
					Task->BuildingScapeCharacter = BuildingScapeCharacter;
					Task->OnUpdateTask.AddDynamic(this, &UQuestEvaluatorComponent::SettingDataPlayer);
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

void UQuestEvaluatorComponent::SettingDataPlayer(FDataPlayer NewData)
{
	//UE_LOG(LogTemp, Warning, TEXT("ENTRE A LA ENVIADA DE DATA"));

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

	DataPlayer.InteractActorsActivateData.Actor = NewData.InteractActorsActivateData.Actor;
	DataPlayer.InteractActorsActivateData.ActorBlueprint = NewData.InteractActorsActivateData.ActorBlueprint;
	
	DataPlayer.InventoryComponent = NewData.InventoryComponent;
	DataPlayer.NeedItems = NewData.InventoryComponent->Items;
	
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT(""));
	OnQuestEvaluatorDataUpdate.Broadcast(this);
}
