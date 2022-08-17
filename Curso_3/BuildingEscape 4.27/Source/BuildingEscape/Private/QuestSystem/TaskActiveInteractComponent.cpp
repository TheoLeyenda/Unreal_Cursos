// Copyright Theo Leyenda 2022


#include "QuestSystem/TaskActiveInteractComponent.h"
#include "BuildingScapeCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "QuestSystem/QuestActorComponentID.h"

void UTaskActiveInteractComponent::FindInformation()
{
	Super::FindInformation();
	TArray<AActor*> Actors;

	InteractComponents.Empty();

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ABuildingScapeCharacter::StaticClass(),Actors);

	if(Actors.Num() > 0)
	{
		for(AActor* Actor : Actors)
		{
			if(Actor)
			{
				UInteractComponent* InteractComponent = Cast<UInteractComponent>(Actor->GetComponentByClass(UInteractComponent::StaticClass()));
				if(InteractComponent)
				{
					InteractComponent->OnInteract.AddDynamic(this, &UTaskActiveInteractComponent::SettingDataTask);
					InteractComponents.Add(InteractComponent);
				}
			}
		}
	}
}

void UTaskActiveInteractComponent::SettingDataTask(UInteractComponent* InteractComponent)
{
	if(!BuildingScapeCharacter){return;}

	if(!BuildingScapeCharacter->PlayerInventoryComponent){return;}

	if(!InteractComponent) {return;}

	if(!InteractComponent->ActorHit){return;}
	
	UActorComponent* ActorComponent = InteractComponent->ActorHit->GetComponentByClass(UQuestActorComponentID::StaticClass());
	
	if(ActorComponent == nullptr){return;}
		
	SettingDataBaseTask(false);

	SendDataPlayer.LastInteractActorInfo.ActorBlueprint = InteractComponent->ActorHit->GetClass();

	UQuestActorComponentID* QuestActorComponentID = Cast<UQuestActorComponentID>(ActorComponent);
	SendDataPlayer.LastInteractActorInfo.ID = QuestActorComponentID->ID;
	
	SendEventUpdateTask(false);
}
