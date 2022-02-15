// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "QuestEvaluatorComponent.h"
#include "Algo/Compare.h"
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

	UPROPERTY(EditAnywhere)
	bool bUseIdentificationObject = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataPlayer RequiredDataPlayer;
	
	void CheckObjetiveComplete(FDataPlayer CompareData)
	{

		bool bInventoryCondition = true;
		//UE_LOG(LogTemp, Warning, TEXT("Cantidad de items: %d"), RequiredDataPlayer.NeedItems.Num());
		//UE_LOG(LogTemp, Warning, TEXT("InventoryComponent es %s"), CompareData.InventoryComponent ? TEXT("TRUE") : TEXT("FALSE"));
		if(RequiredDataPlayer.NeedItems.Num() > 0 && CompareData.InventoryComponent)
		{
			for(int i = 0; i < RequiredDataPlayer.NeedItems.Num(); i++)
			{
				bInventoryCondition = CompareData.InventoryComponent->CheckHaveItem(RequiredDataPlayer.NeedItems[i]->GetClass());
				//UE_LOG(LogTemp, Warning, TEXT("bInventoryCondition es %s"), bInventoryCondition ? TEXT("TRUE") : TEXT("FALSE"));
			}
		}

		bool bIdentificationObject = (CompareData.LastInteractActorInfo.ID == RequiredDataPlayer.LastInteractActorInfo.ID 
			&& CompareData.LastInteractActorInfo.ActorBlueprint == RequiredDataPlayer.LastInteractActorInfo.ActorBlueprint) || !bUseIdentificationObject;

		
		if(CompareData.Fatness >= RequiredDataPlayer.Fatness
			&& CompareData.Lifes >= RequiredDataPlayer.Lifes
			&& bIdentificationObject
			&& bInventoryCondition)
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
