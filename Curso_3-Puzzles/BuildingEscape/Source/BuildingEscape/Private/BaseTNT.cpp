// Copyright Theo Leyenda 2022


#include "BaseTNT.h"

ABaseTNT::ABaseTNT()
{
	PrimaryActorTick.bCanEverTick = false;
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));

	SceneComponent->SetupAttachment(RootComponent);
	StaticMeshComponent->SetupAttachment(SceneComponent);
	BoxComponent->SetupAttachment(StaticMeshComponent);

	QuestActorComponentID = CreateDefaultSubobject<UQuestActorComponentID>(TEXT("QuestActorComponentID"));
}

// Called when the game starts or when spawned
void ABaseTNT::BeginPlay()
{
	Super::BeginPlay();
	BoxComponent->OnComponentBeginOverlap.AddDynamic(this, &ABaseTNT::OnOverlapBegin);
	
}

void ABaseTNT::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
                              int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	for(TSubclassOf<AActor> Actor : ActorsToDestroy)
	{
		if(Actor)
		{
			if(OtherActor->GetClass() == Actor)
			{
				if(GetWorld())
				{
					GetWorld()->SpawnActor<AActor>(ParticleBlueprint, StaticMeshComponent->GetRelativeLocation(),FRotator::ZeroRotator);
				}
				Explotion(OtherActor);
			}
		}
	}
}

void ABaseTNT::Explotion(AActor* Actor)
{
	if(Actor && ParticleBlueprint)
	{
		Actor->Destroy();
		Destroy();
	}
}




