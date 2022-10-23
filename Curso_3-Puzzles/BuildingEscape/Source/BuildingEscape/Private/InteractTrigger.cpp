// Copyright Theo Leyenda 2022

#include "InteractTrigger.h"

AInteractTrigger::AInteractTrigger()
{
	PrimaryActorTick.bCanEverTick = false;

	BoxTriggerVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxTriggerVolume"));
	QuestActorComponentID = CreateDefaultSubobject<UQuestActorComponentID>(TEXT("QuestActorComponentID"));
}

void AInteractTrigger::BeginPlay()
{
	Super::BeginPlay();
	BoxTriggerVolume->OnComponentBeginOverlap.AddDynamic(this, &AInteractTrigger::OnOverlapBegin);
	BoxTriggerVolume->OnComponentEndOverlap.AddDynamic(this, &AInteractTrigger::OnOverlapEnd);
}


void AInteractTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp
                                      , AActor* OtherActor
                                      , UPrimitiveComponent* OtherComp
                                      , int32 OtherBodyIndex
                                      , bool bFromSweep
                                      , const FHitResult& SweepResult)
{
	LastObjectRegister = ELastStateObjectOverlap::BeginOverlap;
	OnBeginOverlapInteractTrigger.Broadcast();
}

void AInteractTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComp
	, AActor* OtherActor
	, UPrimitiveComponent* OtherComp
	, int32 OtherBodyIndex)
{
	LastObjectRegister = ELastStateObjectOverlap::EndOverlap;
	OnEndOverlapInteractTrigger.Broadcast();
}

void AInteractTrigger::ExecuteTrap()
{
	if(Trap)
	{
		Trap->ExecuteTrapInterface();
	}
}

bool AInteractTrigger::ExecuteInteractInterface()
{
	return true;
}

