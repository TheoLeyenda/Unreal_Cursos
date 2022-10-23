// Copyright Theo Leyenda 2022


#include "DetectDestroyActorComponent.h"

#include "QuestSystem/QuestActorComponentID.h"

// Sets default values for this component's properties
UDetectDestroyActorComponent::UDetectDestroyActorComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

}

void UDetectDestroyActorComponent::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	UQuestActorComponentID* QuestActorComponentID = Cast<UQuestActorComponentID>(GetOwner()->GetComponentByClass(UQuestActorComponentID::StaticClass()));
	int32 ID = -1;
	if(QuestActorComponentID)
	{
		ID = QuestActorComponentID->ID;
	}
	//UE_LOG(LogTemp, Warning, TEXT("HICE EL BRODCAST"));
	OnDestroyActor.Broadcast(GetOwner()->GetClass(), ID);
	Super::OnComponentDestroyed(bDestroyingHierarchy);
}


