// Copyright Theo Leyenda 2022


#include "SubstractLifeTrigger.h"

ASubstractLifeTrigger::ASubstractLifeTrigger() : AInteractTrigger(){}

void ASubstractLifeTrigger::BeginPlay()
{
	Super::BeginPlay();
	Player = Cast<ABuildingScapeCharacter>(GetWorld()->GetFirstPlayerController()->GetCharacter());

	bEnableSubstractLife = true;
	LastActorCollision = nullptr;
}


void ASubstractLifeTrigger::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	Super::OnOverlapBegin(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
	if(LastActorCollision != OtherActor && OtherActor->GetClass() == Player->GetClass())
	{
		LastActorCollision = OtherActor;
		UE_LOG(LogTemp, Warning, TEXT("Name: %s"), *OtherActor->GetName());
		ExecuteInteractInterface();
	}
}

void ASubstractLifeTrigger::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	Super::OnOverlapEnd(OverlappedComp, OtherActor, OtherComp, OtherBodyIndex);

	if(LastActorCollision == OtherActor)
	{
		LastActorCollision = nullptr;
	}
}

void ASubstractLifeTrigger::SendTimerEnableSubstractLife()
{
	GetWorld()->GetTimerManager().SetTimer(TimerEnableSubstractLife,this, &ASubstractLifeTrigger::EnableSubstractLife, DelayEnableSubstractLife, false);
}

void ASubstractLifeTrigger::EnableSubstractLife()
{
	bEnableSubstractLife = true;
}

bool ASubstractLifeTrigger::ExecuteInteractInterface()
{
	if(!Player || !bEnableSubstractLife){return false;}
	
	//UE_LOG(LogTemp, Warning, TEXT("ENTRE"));
	Player->SubstractLifes(CountSubstractLifes);
	bEnableSubstractLife = false;
	SendTimerEnableSubstractLife();
	UE_LOG(LogTemp, Warning, TEXT("Name: %s"), *GetName());
	return true;
}
