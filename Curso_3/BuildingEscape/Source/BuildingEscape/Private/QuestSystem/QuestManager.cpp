// Copyright Theo Leyenda 2022


#include "QuestSystem/QuestManager.h"

#include "../../../../Plugins/Developer/RiderLink/Source/RD/thirdparty/spdlog/include/spdlog/fmt/bundled/format.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AQuestManager::AQuestManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AQuestManager::BeginPlay()
{
	Super::BeginPlay();
	FindQuestEvaluatorComponents();
}

void AQuestManager::FindQuestEvaluatorComponents()
{
	TArray<AActor*> Actors;

	QuestEvaluatorComponents.Empty();
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABuildingScapeCharacter::StaticClass(),Actors);

	if(Actors.Num() > 0)
	{
		for(AActor* Actor : Actors)
		{
			if(Actor)
			{
				UQuestEvaluatorComponent* QuestEvaluatorComponent = Cast<UQuestEvaluatorComponent>(Actor->GetComponentByClass(UQuestEvaluatorComponent::StaticClass()));
				if(QuestEvaluatorComponent)
				{
					QuestEvaluatorComponent->OnQuestEvaluatorDataUpdate.AddDynamic(this, &AQuestManager::CheckQuests);
					QuestEvaluatorComponents.Add(QuestEvaluatorComponent);
				}
			}
		}
	}
}

void AQuestManager::ChangeStateQuest(int indexQuest, EQuestState NewQuestState)
{
	if(indexQuest >= Quests.Num() || indexQuest < 0){return;}

	Quests[indexQuest]->QuestState = NewQuestState;
}

void AQuestManager::ChangeStateQuest(AQuest* Quest, EQuestState NewQuestState)
{
	for(AQuest* AuxQuest : Quests)
	{
		if(AuxQuest && Quest)
		{
			if(AuxQuest == Quest)
			{
				AuxQuest->QuestState = NewQuestState;
				break;
			}
		}
	}
}

void AQuestManager::CheckQuests(UQuestEvaluatorComponent* QuestEvaluatorComponent)
{
	for(AQuest* AuxQuest : Quests)
	{
		if(AuxQuest->QuestState == EQuestState::InProgress)
		{
			AuxQuest->CheckStatus(QuestEvaluatorComponent->DataPlayer);
		}
	}

	bool bSendEventFinishAllQuest = true;
	for(AQuest* AuxQuest : Quests)
	{
		if(AuxQuest->QuestState != EQuestState::Completed)
		{
			bSendEventFinishAllQuest = false;
		}
	}
	
	if(bSendEventFinishAllQuest)
	{
		
		SendEventFinishAllQuest();
	}
}

void AQuestManager::SendEventFinishAllQuest()
{
	UE_LOG(LogTemp, Warning, TEXT("Todos las Quest completadas"));
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("Todos las Quest completadas"));
	OnFinishAllQuest.Broadcast();
}


