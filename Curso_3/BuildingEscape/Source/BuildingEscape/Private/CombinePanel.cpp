// Copyright Theo Leyenda 2022


#include "CombinePanel.h"

// Sets default values
ACombinePanel::ACombinePanel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

bool ACombinePanel::IsCompleteCombinePanel()
{
	return bCombinePanelComplete;
}

// Called when the game starts or when spawned
void ACombinePanel::BeginPlay()
{
	Super::BeginPlay();
	for(int i = 0; i < CountNumbersCode; i++)
	{
		AuxCodeNumbers.Add(i);
	}

	for(int i = 0; i < CountNumbersCode; i++)
	{
		int Index = FMath::RandRange(0, AuxCodeNumbers.Num() -1);
		CodeNumbers.Add(AuxCodeNumbers[Index]);
		AuxCodeNumbers.RemoveAt(Index);
	}
}

void ACombinePanel::InputCodeAnswer(int Code)
{
	CurrentAnswer.Add(Code);
	if(CurrentAnswer.Num() >= CountNumbersCode)
	{
		CheckCurrentAnswer();
	}
}

void ACombinePanel::ExecuteTrap()
{
	if(Trap)
	{
		Trap->ExecuteTrapInterface();
	}
}

void ACombinePanel::CheckCurrentAnswer()
{
	bCombinePanelComplete = true;

	if(CurrentAnswer.Num() != CodeNumbers.Num())
	{
		bCombinePanelComplete = false;
		CurrentAnswer.Empty();
		ExecuteTrap();
		return;
	}

	for(int i = 0; i < CurrentAnswer.Num(); i++)
	{
		if(CurrentAnswer[i] != CodeNumbers[i])
		{
			bCombinePanelComplete = false;
			CurrentAnswer.Empty();
			return;
		}
	}
}



