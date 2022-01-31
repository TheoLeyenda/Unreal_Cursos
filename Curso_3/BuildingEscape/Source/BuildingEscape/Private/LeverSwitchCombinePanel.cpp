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
		SpawnObjectsInfo[i].Code = i;
	}
}

void ALeverSwitchCombinePanel::BeginPlay()
{
	Super::BeginPlay();

	BuildingEscapeGameMode = Cast<ABuildingEscapeGameMode>(GetWorld()->GetAuthGameMode());
	
	ResetCombinePanel(false);
	
	for(int i = 0; i < LeverSwitchesInfo.Num(); i++)
	{
		LeverSwitchesInfo[i].Code = CodeNumbers[i];
	}
	for(int i = 0; i < CountNumbersCode; i++)
	{
		for(int j = 0; j < CountNumbersCode; j++)
		{
			if(LeverSwitchesInfo[i].Code == SpawnObjectsInfo[j].Code && !LeverSwitchesInfo[i].bAssignedObjectSpawn)
			{
				UE_LOG(LogTemp, Warning, TEXT("CAMBIE PANEL"));
				LeverSwitchesInfo[i].ObjectSpawn = SpawnObjectsInfo[j].ObjectSpawn;
				LeverSwitchesInfo[i].bAssignedObjectSpawn = true;
			}
		}
	}
	
	for(int i = 0; i < CountNumbersCode; i++)
	{
		for(int j = 0; j < LeverSwitchesInfo[i].LeverSwitch->Spawners.Num(); j++)
		{
			LeverSwitchesInfo[i].LeverSwitch->Spawners[j]->ObjectsSpawn.Add(FObjectSpawn());
			int Index = LeverSwitchesInfo[i].LeverSwitch->Spawners[j]->ObjectsSpawn.Num()-1;
			LeverSwitchesInfo[i].LeverSwitch->Spawners[j]->ObjectsSpawn[Index].ObjectBlueprint = LeverSwitchesInfo[i].ObjectSpawn;
			LeverSwitchesInfo[i].LeverSwitch->Spawners[j]->ObjectsSpawn[Index].CountObjectsSpawn = 1;
		}
	}
}

void ALeverSwitchCombinePanel::ResetCombinePanel(bool FailCombinePanel)
{
	for(int i = 0; i < LeverSwitchesInfo.Num(); i++)
	{
		if(LeverSwitchesInfo[i].LeverSwitch)
		{
			if(LeverSwitchesInfo[i].LeverSwitch->bSwitchOn)
			{
				LeverSwitchesInfo[i].LeverSwitch->Switch();
			}
			LeverSwitchesInfo[i].bCheckDone = false;
			LeverSwitchesInfo[i].bAssignedObjectSpawn = false;
		}
	}
	ABuildingScapeCharacter* Character = BuildingEscapeGameMode->GetCurrentCharacter();
	if(Character && FailCombinePanel)
	{
		Character->SubstractLifes(LifeSubstractForFail);
	}
}


void ALeverSwitchCombinePanel::Tick(float DeltaSeconds)
{
	bCombinePanelComplete = true;
	for(int i = 0; i < LeverSwitchesInfo.Num(); i++)
	{
		if(!LeverSwitchesInfo[i].bCheckDone)
		{
			bCombinePanelComplete = false;
		}
	}
	if(IsCompleteCombinePanel())
	{
		UE_LOG(LogTemp, Warning, TEXT("LO LOGRE :D"));
		for(int i = 0; i < LeverSwitchesInfo.Num(); i++)
		{
			SetActorTickEnabled(false);
			LeverSwitchesInfo[i].LeverSwitch->SetEnableSpawners(true);
		}
	}
	
	for(int i = 0; i < LeverSwitchesInfo.Num(); i++)
	{
		if(LeverSwitchesInfo[i].LeverSwitch->bSwitchOn && CurrentSwitcher == LeverSwitchesInfo[i].Code && !LeverSwitchesInfo[i].bCheckDone)
		{
			InputCodeAnswer(LeverSwitchesInfo[i].Code);
			CurrentSwitcher++;
			LeverSwitchesInfo[i].bCheckDone = true;
		}
		else if((LeverSwitchesInfo[i].LeverSwitch->bSwitchOn && CurrentSwitcher != LeverSwitchesInfo[i].Code && !LeverSwitchesInfo[i].bCheckDone)
			|| (!LeverSwitchesInfo[i].LeverSwitch->bSwitchOn && LeverSwitchesInfo[i].bCheckDone))
		{
			CurrentSwitcher = 0;
			CurrentAnswer.Empty();
			ResetCombinePanel(true);
		}
	}
}
