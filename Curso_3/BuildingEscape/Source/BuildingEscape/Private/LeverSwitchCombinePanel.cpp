// Copyright Theo Leyenda 2022


#include "LeverSwitchCombinePanel.h"

ALeverSwitchCombinePanel::ALeverSwitchCombinePanel() : ACombinePanel()
{
	PrimaryActorTick.bCanEverTick = true;

	for(int i = 0; i < CountNumbersCode; i++)
	{
		LeverSwitchesInfo.Add(FSwitcherInfo());
		SpawnObjectsInfo.Add(FSpawnObjectInfo());
	}

	for(int i = 0; i < SpawnObjectsInfo.Num(); i++)
	{
		SpawnObjectsInfo[i].code = i;
	}
}

void ALeverSwitchCombinePanel::BeginPlay()
{
	Super::BeginPlay();
	for(int i = 0; i < LeverSwitchesInfo.Num(); i++)
	{
		if(LeverSwitchesInfo[i].LeverSwitch)
		{
			if(LeverSwitchesInfo[i].LeverSwitch->bSwitchOn)
			{
				LeverSwitchesInfo[i].LeverSwitch->Switch();
			}
		}
	}

	for(int i = 0; i < LeverSwitchesInfo.Num(); i++)
	{
		LeverSwitchesInfo[i].code = CodeNumbers[i];
	}

	for(int j = 0; j < CountNumbersCode; j++)
	{
		for(int i = 0; i < CountNumbersCode; i++)
		{
			if(SpawnObjectsInfo[i].code == LeverSwitchesInfo[j].code)
			{
				UE_LOG(LogTemp, Warning, TEXT("SI"));
				LeverSwitchesInfo[j].ObjectSpawn = SpawnObjectsInfo[i].ObjectSpawn;
			}
		}
	}
	
}

void ALeverSwitchCombinePanel::Tick(float DeltaSeconds)
{
	if(IsCompleteCombinePanel())
	{
		PrimaryActorTick.bCanEverTick = false;
	}
}


void ALeverSwitchCombinePanel::CheckCurrentAnswer()
{
	Super::CheckCurrentAnswer();
	
}

void ALeverSwitchCombinePanel::InputCodeAnswer(int Code)
{
	Super::InputCodeAnswer(Code);
	
}
