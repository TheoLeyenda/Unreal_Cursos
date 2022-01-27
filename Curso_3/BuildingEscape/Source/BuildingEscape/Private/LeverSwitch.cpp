// Copyright Theo Leyenda 2022


#include "LeverSwitch.h"

// Sets default values
ALeverSwitch::ALeverSwitch()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MeshBase = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshBase"));
	Scene = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	MeshLever = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshLever"));
	TimelineComp = CreateDefaultSubobject<UTimelineComponent>(TEXT("TimelineComp"));
	
	MeshBase->SetupAttachment(RootComponent);
	Scene->SetupAttachment(MeshBase);
	MeshLever->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);
}

void ALeverSwitch::BeginPlay()
{
	UpdateFunctionFloat.BindDynamic(this, &ALeverSwitch::UpdateTimelineComp);
	
	if (TimelineFloatCurve)
	{
		TimelineComp->AddInterpFloat(TimelineFloatCurve, UpdateFunctionFloat);
	}
}

void ALeverSwitch::Switch()
{
	SwitchOn = !SwitchOn;

	if(SwitchOn)
	{
		if(PositiveShiwtch == EPositiveShiwtch::Up)
		{
			UpSwitch();
		}
		else
		{
			DownSwitch();
		}
	}
	else
	{
		if(PositiveShiwtch == EPositiveShiwtch::Down)
		{
			DownSwitch();
		}
		else
		{
			UpSwitch();
		}
	}
}

void ALeverSwitch::UpSwitch()
{
	TimelineComp->Play();
	CheckUpSwitchSound();
}

void ALeverSwitch::DownSwitch()
{
	TimelineComp->Reverse();
	CheckDownSwitchSound();
}


void ALeverSwitch::CheckUpSwitchSound()
{
	if(!AudioComponent){return;}

	bDownSwitchSound = false;
	if(!bUpSwitchSound)
	{
		AudioComponent->Play();
		bUpSwitchSound = true;
	}
}


void ALeverSwitch::CheckDownSwitchSound()
{
	if(!AudioComponent){return;}

	bUpSwitchSound = false;
	if(!bDownSwitchSound)
	{
		AudioComponent->Play();
		bDownSwitchSound = true;
	}
}

void ALeverSwitch::FindAuidioComponent()
{
	AudioComponent = FindComponentByClass<UAudioComponent>();

	if(!AudioComponent)
	{
		UE_LOG(LogTemp, Warning, TEXT("Missing audio component on s%"), *GetName());
	}
}

void ALeverSwitch::UpdateTimelineComp(float Output)
{
	// Create and set our Door's new relative location based on the output from our Timeline Curve
	FRotator DoorNewRotation = FRotator(Output, 0.0f, 0.f);
	Scene->SetRelativeRotation(DoorNewRotation);
}

