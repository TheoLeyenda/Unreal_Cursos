// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestEvaluatorComponent.h"
#include "GameFramework/Actor.h"
#include "Quest.generated.h"

UENUM()
enum class EQuestState
{
	Available,
	InProgress,
	Cancelled,
	Completed,
	Failed,
};

USTRUCT(BlueprintType)
struct FActionQuest
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool bDoneAccion = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataPlayer RequiredDataPlayer;

	void CheckObjetiveComplete(FDataPlayer CompareData)
	{
		bDoneAccion = true;
		if(RequiredDataPlayer.Fatness != CompareData.Fatness
			|| RequiredDataPlayer.Lifes != CompareData.Lifes)
		{
			bDoneAccion = false;
		}

		for(FInteractActorActivateData RequiredInteractActorActivateData : RequiredDataPlayer.InteractActorsActivateData)
		{
			for(FInteractActorActivateData CompareInteractActorActivateData : CompareData.InteractActorsActivateData)
			{
				if(RequiredInteractActorActivateData.Actor != CompareInteractActorActivateData.Actor
					|| RequiredInteractActorActivateData.ActorBlueprint != CompareInteractActorActivateData.ActorBlueprint)
				{
					bDoneAccion = false;
				}
			}
		}
	}
	
};



UCLASS()
class BUILDINGESCAPE_API AQuest : public AActor
{
	GENERATED_BODY()
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishQuest, AQuest*, Quest);
public:	
	// Sets default values for this actor's properties
	AQuest();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	EQuestState QuestState = EQuestState::Available;

	FOnFinishQuest OnFinishQuest;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FActionQuest> ActionsQuest;

	UFUNCTION()
	void CheckCompleteQuest();

	void ObjetiveComplete(int ID);
	
	UFUNCTION()
	virtual void CheckStatus(FDataPlayer DataPlayer);
	
};
