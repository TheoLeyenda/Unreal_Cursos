// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
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
	int CountNumbersCode = 5;

	UPROPERTY(VisibleAnywhere)
	TArray<int> CodeNumbers;
	TArray<int> AuxCodeNumbers;
	TArray<int> CurrentAnswer;
	
	bool bCombinePanelComplete;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void CheckCurrentAnswer();

	virtual void InputCodeAnswer(int Code);
	
};
