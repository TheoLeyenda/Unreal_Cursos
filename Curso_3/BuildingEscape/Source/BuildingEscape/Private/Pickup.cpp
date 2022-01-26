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
	if(!bUseMessagePickup && !bUseRotatePickup){return;}
	Super::Tick(DeltaSeconds);

	if(bUseMessagePickup)
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
	//UE_LOG(LogTemp, Warning, TEXT("ESTOY ENTRANDO FORRO"));
	
	ABuildingScapeCharacter* BuildingScapeCharacter = Cast<ABuildingScapeCharacter>(UGameplayStatics::GetPlayerCharacter(this,0));

	FRotator NewRotator = BuildingScapeCharacter->GetActorRotation();

	//FRotator NewRotator = Character->GetActorRotation();
	NewRotator.Yaw += 180.0f;

	MyText->SetRelativeRotation(NewRotator);
}

void APickup::RotatePickUp(float DeltaTime)
{
	StaticMeshComponent->SetRelativeRotation(StaticMeshComponent->GetRelativeRotation() + FRotator(0, SpeedRotatePickup * DeltaTime, 0));
}
