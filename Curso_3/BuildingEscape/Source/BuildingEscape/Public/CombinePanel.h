// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "Trap.h"
#include "GameFramework/Actor.h"
#include "QuestSystem/QuestActorComponentID.h"
#include "CombinePanel.generated.h"

UCLASS()
class BUILDINGESCAPE_API ACombinePanel : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACombinePanel();

	bool IsCompleteCombinePanel();
protected:

	UPROPERTY(EditAnywhere)
	UQuestActorComponentID* QuestActorComponentID;
	
	UPROPERTY(EditAnywhere)
	int CountNumbersCode = 5;

	UPROPERTY(EditAnywhere)
	ATrap* Trap;
	
	UPROPERTY(VisibleAnywhere)
	TArray<int> CodeNumbers;
	TArray<int> AuxCodeNumbers;
	UPROPERTY(VisibleAnywhere)
	TArray<int> CurrentAnswer;
	
	bool bCombinePanelComplete;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void CheckCurrentAnswer();

	virtual void InputCodeAnswer(int Code);

	void ExecuteTrap();
	
};
