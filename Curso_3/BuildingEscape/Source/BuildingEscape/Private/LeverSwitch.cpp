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

	int random = FMath::RandRange(0,2);

	if(random == 0)
	{
		SwitchOn = true;
	}
	else
	{
		SwitchOn = false;
	}
	Switch();
	
}

void ALeverSwitch::BeginPlay()
{
	Super::BeginPlay();

	bFlagInitSound = true;
	
	FindAuidioComponent();
	UpdateFunctionFloat.BindDynamic(this, &ALeverSwitch::UpdateTimelineComp);
	
	if (TimelineFloatCurve)
	{
		UE_LOG(LogTemp, Warning, TEXT("Existo"));
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
			UpSwitch();
		}
		else
		{
			DownSwitch();
		}
	}
}

void ALeverSwitch::UpSwitch()
{
	UE_LOG(LogTemp, Warning, TEXT("ENTRE AL UpSwitch"));
	TimelineComp->Play();
	SwitchSound();
}

void ALeverSwitch::DownSwitch()
{
	UE_LOG(LogTemp, Warning, TEXT("ENTRE AL DownSwitch"));
	TimelineComp->Reverse();
	SwitchSound();
}


void ALeverSwitch::SwitchSound()
{
	if(!AudioComponent){return;}

	if(!bFlagInitSound)
	{
		AudioComponent->Play();
	}
	else
	{
		bFlagInitSound = false;
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
	UE_LOG(LogTemp, Warning, TEXT("ENTRE AL UpdateTimelineComp"));
	// Create and set our Door's new relative location based on the output from our Timeline Curve
	FRotator DoorNewRotation = FRotator(0, 0, Output);
	Scene->SetRelativeRotation(DoorNewRotation);
}

bool ALeverSwitch::ExecuteInteractInterface(ABuildingScapeCharacter* Character)
{
	Switch();
	
	return true;
}

