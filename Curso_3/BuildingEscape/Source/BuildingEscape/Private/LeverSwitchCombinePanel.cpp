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

	for(int j = 0; j < CountNumbersCode; j++)
	{
		for(int i = 0; i < CountNumbersCode; i++)
		{
			if(SpawnObjectsInfo[i].Code == LeverSwitchesInfo[j].Code)
			{
				LeverSwitchesInfo[j].ObjectSpawn = SpawnObjectsInfo[i].ObjectSpawn;
			}
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
			LeverSwitchesInfo[i].CheckDone = false;
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
		if(!LeverSwitchesInfo[i].CheckDone)
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
		if(LeverSwitchesInfo[i].LeverSwitch->bSwitchOn && CurrentSwitcher == LeverSwitchesInfo[i].Code && !LeverSwitchesInfo[i].CheckDone)
		{
			InputCodeAnswer(LeverSwitchesInfo[i].Code);
			CurrentSwitcher++;
			LeverSwitchesInfo[i].CheckDone = true;
		}
		else if((LeverSwitchesInfo[i].LeverSwitch->bSwitchOn && CurrentSwitcher != LeverSwitchesInfo[i].Code && !LeverSwitchesInfo[i].CheckDone)
			|| (!LeverSwitchesInfo[i].LeverSwitch->bSwitchOn && LeverSwitchesInfo[i].CheckDone))
		{
			CurrentSwitcher = 0;
			CurrentAnswer.Empty();
			ResetCombinePanel(true);
		}
	}
}
