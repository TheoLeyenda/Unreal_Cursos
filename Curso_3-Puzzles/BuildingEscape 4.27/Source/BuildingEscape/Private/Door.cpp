// Copyright Theo Leyenda 2022

#include "Door.h"

ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	
	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrameMesh"));
	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	DoorTimelineComp = CreateDefaultSubobject<UTimelineComponent>(TEXT("DoorTimelineComp"));
	
	DoorFrame->SetupAttachment(RootComponent);
	Door->AttachToComponent(DoorFrame,FAttachmentTransformRules::KeepRelativeTransform);
	
	QuestActorComponentID = CreateDefaultSubobject<UQuestActorComponentID>(TEXT("QuestActorComponentID"));
}

void ADoor::BeginPlay()
{
	Super::BeginPlay();

	FindAuidioComponent();
	
	UpdateFunctionFloat.BindDynamic(this, &ADoor::UpdateTimelineComp);
	
	if (DoorTimelineFloatCurve)
	{
		DoorTimelineComp->AddInterpFloat(DoorTimelineFloatCurve, UpdateFunctionFloat);
	}
	OpenOrClose = StateDoor;
	if(bUseInitCheckDoor)
	{
		CheckDoor();
	}
}

void ADoor::OpenDoor()
{
	DoorTimelineComp->Play();
	CheckOpenDoorSound();
}

void ADoor::CloseDoor()
{
	DoorTimelineComp->Reverse();
	CheckCloseDoorSound();
}

bool ADoor::CheckDoor()
{
	bool bOpenDoor = true;
	switch (StateDoor)
	{
		case EStateDoor::Opened:
			bOpenDoor = true;
			if(OpenOrClose == EStateDoor::Opened)
			{
				CloseDoor();
				OpenOrClose = EStateDoor::Closed;
			}
			else
			{
				OpenDoor();
				OpenOrClose = EStateDoor::Opened;
			}
			break;
		case EStateDoor::Closed:
			bOpenDoor = false;
			CloseDoor();
			break;
	}

	return bOpenDoor;
}

void ADoor::SetStateDoor(EStateDoor Value)
{
	StateDoor = Value;
}

EStateDoor ADoor::GetStateDoor()
{
	return StateDoor;
}

void ADoor::UpdateTimelineComp(float Output)
{
	FRotator DoorNewRotation = FRotator(0.0f, Output, 0.f);
	Door->SetRelativeRotation(DoorNewRotation);
}

void ADoor::FindAuidioComponent()
{
	AudioComponent = FindComponentByClass<UAudioComponent>();

	if(!AudioComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("Missing audio component on s%"), *GetName());
	}
}

void ADoor::CheckOpenDoorSound()
{
	if(!AudioComponent){return;}

	bCloseDoorSound = false;
	if(!bOpenDoorSound)
	{
		AudioComponent->Play();
		bOpenDoorSound = true;
	}
}

bool ADoor::ExecuteInteractInterface(ABuildingScapeCharacter* Character)
{
	return CheckDoor();
}

void ADoor::CheckCloseDoorSound()
{
	if(!AudioComponent){return;}

	bOpenDoorSound = false;
	if(!bCloseDoorSound)
	{
		AudioComponent->Play();
		bCloseDoorSound = true;
	}
}

