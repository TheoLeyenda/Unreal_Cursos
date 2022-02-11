// Copyright Theo Leyenda 2022


#include "QuestSystem/Quest.h"
// Sets default values
AQuest::AQuest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void AQuest::BeginPlay()
{
	Super::BeginPlay();
}

void AQuest::CheckCompleteQuest()
{
	if(QuestState != EQuestState::InProgress){return;}
	
	bool bCompleteQuest = true;
	
	for(FActionQuest &ActionQuest : ActionsQuest)
	{
		if(!ActionQuest.bDoneAccion)
		{
			bCompleteQuest = false;
			break;
		}
	}

	if(bCompleteQuest)
	{
		UE_LOG(LogTemp, Warning, TEXT("Quest Completada"));
		//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Quest Completada"));
		QuestState = EQuestState::Completed;
		OnFinishQuest.Broadcast(this);
	}
}

void AQuest::ObjetiveComplete(int Id)
{
	if(QuestState != EQuestState::InProgress){return;}
	
	for(FActionQuest &ActionQuest : ActionsQuest)
	{
		if(ActionQuest.ID == Id)
		{
			ActionQuest.bDoneAccion = true;
		}
	}
}


void AQuest::CheckStatus(FDataPlayer DataPlayer)
{
	if(QuestState != EQuestState::InProgress){return;}
	for(FActionQuest &ActionQuest : ActionsQuest)
	{
		if(!ActionQuest.bDoneAccion)
		{
			ActionQuest.CheckObjetiveComplete(DataPlayer);
			UE_LOG(LogTemp, Warning, TEXT("Objetivo Completado: %s"), ActionQuest.bDoneAccion? TEXT("True") : TEXT("False"));
		}
	}
	CheckCompleteQuest();
}
