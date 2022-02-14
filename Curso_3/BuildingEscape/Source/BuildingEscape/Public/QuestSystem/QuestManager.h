// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Quest.h"
#include "GameFramework/Actor.h"
#include "QuestManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFinishAllQuest);

UCLASS()
class BUILDINGESCAPE_API AQuestManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AQuestManager();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AQuest*> Quests;

	UPROPERTY(VisibleAnywhere)
	TArray<UQuestEvaluatorComponent*> QuestEvaluatorComponents;
	//TArray de UQuestEvaluatorComponent
	
	FOnFinishAllQuest OnFinishAllQuest;

	UFUNCTION()
	void FindQuestEvaluatorComponents();

	UFUNCTION()
	void ChangeStateQuest(int indexQuest, EQuestState NewQuestState);
	
	void ChangeStateQuest(AQuest* Quest, EQuestState NewQuestState);
	
	UFUNCTION()
	void CheckQuests(UQuestEvaluatorComponent* QuestEvaluatorComponent);

	UFUNCTION()
	void SendEventFinishAllQuest();
};
