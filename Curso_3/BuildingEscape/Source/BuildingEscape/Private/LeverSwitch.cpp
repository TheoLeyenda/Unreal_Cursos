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

	AudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Audio"));
	AudioComponent->SetAutoActivate(false);
	
	BoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComponent"));
	BoxComponent->SetBoxExtent(FVector(13.000035f, 10.0f, 25.748461f));
	
	MeshBase->SetupAttachment(RootComponent);
	Scene->SetupAttachment(MeshBase);
	MeshLever->AttachToComponent(Scene, FAttachmentTransformRules::KeepRelativeTransform);
	BoxComponent->SetupAttachment(MeshBase);
	
	MeshBase->SetRelativeScale3D(FVector(0.1f, 0.05f, 0.2f));

	Scene->SetRelativeLocation(FVector(0.0f,130, 0.0f));

	MeshLever->SetRelativeLocation(FVector(0.0f, 140.0f, 0.0f));
	MeshLever->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));
	MeshLever->SetRelativeScale3D(FVector(0.5f, 1.125f, 1.25f));

	QuestActorComponentID = CreateDefaultSubobject<UQuestActorComponentID>("QuestActorComponentID");
}

void ALeverSwitch::BeginPlay()
{
	Super::BeginPlay();

	bFlagInitSound = true;
	
	//FindAuidioComponent();
	UpdateFunctionFloat.BindDynamic(this, &ALeverSwitch::UpdateTimelineComp);
	
	if (TimelineFloatCurve)
	{
		TimelineComp->AddInterpFloat(TimelineFloatCurve, UpdateFunctionFloat);
	}

	int Random = FMath::RandRange(0,2);

	
	if(Random == 0)
	{
		bSwitchOn = !bSwitchOn;
		PositiveShiwtch = EPositiveShiwtch::Up;
		DownSwitch();
	}
	else
	{
		PositiveShiwtch = EPositiveShiwtch::Down;
		UpSwitch();
	}
	//Switch();
}

void ALeverSwitch::Switch()
{
	if(!bEnableUseSwitch) { return; }
	
	bSwitchOn = !bSwitchOn;

	if(bSwitchOn)
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
		if(PositiveShiwtch == EPositiveShiwtch::Up)
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
	TimelineComp->Reverse();
	SwitchSound();
}

void ALeverSwitch::DownSwitch()
{
	TimelineComp->Play();
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
	// Create and set our Door's new relative location based on the output from our Timeline Curve
	FRotator DoorNewRotation = FRotator(0, 0, Output);
	Scene->SetRelativeRotation(DoorNewRotation);
}

bool ALeverSwitch::ExecuteInteractInterface(ABuildingScapeCharacter* Character)
{
	Switch();
	
	return true;
}

