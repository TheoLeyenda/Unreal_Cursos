// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestEvaluatorComponent.h"
#include "GameFramework/Actor.h"
#include "Quest.generated.h"

UENUM(BlueprintType)
enum EQuestState
{
	Available,
	InProgress,
	Cancelled,
	Completed,
	Failed,
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnUpdateQuest);


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
		if(CompareData.Fatness >= RequiredDataPlayer.Fatness
			&& CompareData.Lifes >= RequiredDataPlayer.Lifes
			&& CompareData.InteractActorsActivateData.Actor == RequiredDataPlayer.InteractActorsActivateData.Actor 
			&& CompareData.InteractActorsActivateData.ActorBlueprint == RequiredDataPlayer.InteractActorsActivateData.ActorBlueprint)
		{
			bDoneAccion = true;
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

	virtual void BeginPlay() override;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnUpdateQuest OnUpdateQuest;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TEnumAsByte<EQuestState> QuestState = EQuestState::Available;

	FOnFinishQuest OnFinishQuest;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FActionQuest> ActionsQuest;

	UFUNCTION()
	void CheckCompleteQuest();

	void ObjetiveComplete(int ID);
	
	UFUNCTION()
	virtual void CheckStatus(FDataPlayer DataPlayer);
	
};
