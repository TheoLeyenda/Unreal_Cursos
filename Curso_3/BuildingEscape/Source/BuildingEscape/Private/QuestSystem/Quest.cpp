// Copyright Theo Leyenda 2022


#include "QuestSystem/Quest.h"
// Sets default values
AQuest::AQuest()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void AQuest::CheckCompleteQuest()
{
	if(QuestState != EQuestState::InProgress){return;}
	
	bool bCompleteQuest = true;
	
	for(FActionQuest ActionQuest : ActionsQuest)
	{
		if(!ActionQuest.bDoneAccion)
		{
			bCompleteQuest = false;
			break;
		}
	}

	if(bCompleteQuest)
	{
		QuestState = EQuestState::Completed;
		OnFinishQuest.Broadcast(this);
	}
}

void AQuest::ObjetiveComplete(int Id)
{
	if(QuestState != EQuestState::InProgress){return;}
	
	for(FActionQuest ActionQuest : ActionsQuest)
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
	for(FActionQuest ActionQuest : ActionsQuest)
	{
		ActionQuest.CheckObjetiveComplete(DataPlayer);
	}
	CheckCompleteQuest();
}
