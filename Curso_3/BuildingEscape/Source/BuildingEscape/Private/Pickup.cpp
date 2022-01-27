// Copyright Theo Leyenda 2022


#include "Pickup.h"
#include "BuildingScapeCharacter.h"
#include "Kismet/GameplayStatics.h"
// Sets default values
APickup::APickup()
{
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Scene"));
	MyText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Message PickUp"));
	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Pickup"));

	MyText->SetupAttachment(SceneComponent, NAME_None);
	StaticMeshComponent->SetupAttachment(SceneComponent, NAME_None);
}


void APickup::Tick(float DeltaSeconds)
{
	if(!bEnableUseMessagePickup && !bUseMessagePickup && !bUseRotatePickup){return;}
	Super::Tick(DeltaSeconds);

	if(bEnableUseMessagePickup)
	{
		MakeTextFacePlayer();
	}

	if(bUseRotatePickup)
	{
		RotatePickUp(DeltaSeconds);
	}
}

void APickup::MakeTextFacePlayer()
{
	//ACharacter* Character = UGameplayStatics::GetPlayerCharacter(this,0);

	//FRotator NewRotator = Character->GetActorRotation();
	
	ABuildingScapeCharacter* BuildingScapeCharacter = Cast<ABuildingScapeCharacter>(UGameplayStatics::GetPlayerCharacter(this,0));

	FRotator NewRotator = BuildingScapeCharacter->GetActorRotation();
	
	NewRotator.Yaw += 180.0f;

	MyText->SetRelativeRotation(NewRotator);
}


void APickup::RotatePickUp(float DeltaTime)
{
	StaticMeshComponent->SetRelativeRotation(StaticMeshComponent->GetRelativeRotation() + FRotator(0, SpeedRotatePickup * DeltaTime, 0));
}

void APickup::ShowMessagePickup()
{
	if(bEnableUseMessagePickup)
	{
		bUseMessagePickup = true;
		MyText->SetHiddenInGame(false);
		GetWorld()->GetTimerManager().SetTimer(TimerToCheckHideMessage,this, &APickup::HideMessagePickup, TimeToHideMessage, false);
		bEnableDestroyTimer = true;
	}
}

void APickup::HideMessagePickup()
{
	if(bEnableUseMessagePickup)
	{
		bUseMessagePickup = false;
		MyText->SetHiddenInGame(true);
	}
	
}

void APickup::BeginDestroy()
{
	//Si descomento esto se muere Unreal.
	
	//if(bEnableDestroyTimer)
	//{
	//	GetWorld()->GetTimerManager().ClearTimer(TimerToCheckHideMessage);
	//}
	Super::BeginDestroy();
}

