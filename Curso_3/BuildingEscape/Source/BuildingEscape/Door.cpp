// Copyright Theo Leyenda 2022


#include "Door.h"

// Sets default values
ADoor::ADoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//Create our Default Components
	DoorFrame = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorFrameMesh"));
	Door = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DoorMesh"));
	DoorTimelineComp = CreateDefaultSubobject<UTimelineComponent>(TEXT("DoorTimelineComp"));

	//Setup our Attachments
	DoorFrame->SetupAttachment(RootComponent);
	Door->AttachToComponent(DoorFrame,FAttachmentTransformRules::KeepRelativeTransform);
}

// Called when the game starts or when spawned
void ADoor::BeginPlay()
{
	Super::BeginPlay();

	FindAuidioComponent();
	
	//Binding our float track to our UpdateTimelineComp Function's output
	UpdateFunctionFloat.BindDynamic(this, &ADoor::UpdateTimelineComp);

	//If we have a float curve, bind it's graph to our update function
	if (DoorTimelineFloatCurve)
	{
		DoorTimelineComp->AddInterpFloat(DoorTimelineFloatCurve, UpdateFunctionFloat);
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

void ADoor::CheckDoor()
{
	switch (StateDoor)
	{
		case EStateDoor::Opened:
			OpenDoor();
			break;
		case EStateDoor::Closed:
			CloseDoor();
			break;
	}
}

void ADoor::SetStateDoor(EStateDoor Value)
{
	StateDoor = Value;
}

void ADoor::UpdateTimelineComp(float Output)
{
	// Create and set our Door's new relative location based on the output from our Timeline Curve
	FRotator DoorNewRotation = FRotator(0.0f, Output, 0.f);
	Door->SetRelativeRotation(DoorNewRotation);
}

void ADoor::FindAuidioComponent()
{
	AudioComponent = FindComponentByClass<UAudioComponent>();

	if(!AudioComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("Missing audio component on s%"), *GetOwner()->GetName());
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
