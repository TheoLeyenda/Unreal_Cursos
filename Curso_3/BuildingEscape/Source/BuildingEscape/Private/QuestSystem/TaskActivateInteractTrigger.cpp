// Copyright Theo Leyenda 2022


#include "QuestSystem/TaskActivateInteractTrigger.h"

#include "Kismet/GameplayStatics.h"

void UTaskActivateInteractTrigger::FindInformation()
{
	
	Super::FindInformation();
	
	TArray<AActor*> Actors;

	InteractTriggers.Empty();
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AInteractTrigger::StaticClass(),Actors);

	if(Actors.Num() > 0)
	{
		for(AActor* Actor : Actors)
		{
			AInteractTrigger* InteractTrigger = Cast<AInteractTrigger>(Actor);
			if(InteractTrigger)
			{
				InteractTrigger->OnCompleteInteractTrigger.AddDynamic(this, &UTaskActivateInteractTrigger::SettingDataTask);
				InteractTriggers.Add(InteractTrigger);
			}
		}
	}
}

void UTaskActivateInteractTrigger::SettingDataTask(AInteractTrigger* InteractTrigger)
{

	if(!BuildingScapeCharacter){return;}
	
	SendDataPlayer.Fatness = BuildingScapeCharacter->GetPlayerFatness();
	SendDataPlayer.Lifes = BuildingScapeCharacter->GetPlayerLifes();

	SendDataPlayer.InteractActorsActivateData.ActorBlueprint = InteractTrigger->GetClass();
	SendDataPlayer.InteractActorsActivateData.Actor = InteractTrigger;
	
	SendEventUpdateTask();
	
}