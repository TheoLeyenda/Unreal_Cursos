// Copyright Theo Leyenda 2022


#include "BuildingScapeCharacter.h"
#include "BuildingEscapeGameMode.h"
#include "Grabber.h"
#include "Inventory.h"
#include "InteractComponent.h"
#include "Components/CapsuleComponent.h"
#include "Kismet/GameplayStatics.h"

ABuildingScapeCharacter::ABuildingScapeCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	
	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;

	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	Grabber = CreateDefaultSubobject<UGrabber>(TEXT("Grabber"));

	PlayerInventoryComponent = CreateDefaultSubobject<UInventory>(TEXT("PlayerInventoryComponent"));

	PlayerInventoryComponent->BuildingScapeCharacter = this;
	
	InteractComponent = CreateDefaultSubobject<UInteractComponent>(TEXT("InteractComponent"));
	
}

void ABuildingScapeCharacter::BeginPlay()
{
	Super::BeginPlay();
	BuildingEscapeGameMode = Cast<ABuildingEscapeGameMode>(GetWorld()->GetAuthGameMode());

	if(BuildingEscapeGameMode)
	{
		BuildingEscapeGameMode->OnGameoverActivate.AddDynamic(this, &ABuildingScapeCharacter::DisableMovement);
	}
}

void ABuildingScapeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ABuildingScapeCharacter::Interact);
	PlayerInputComponent->BindAction("Restart", IE_Pressed, this, &ABuildingScapeCharacter::RestartGamePressed);
	PlayerInputComponent->BindAction("Grab", IE_Pressed, this, &ABuildingScapeCharacter::GrabPressed);
    PlayerInputComponent->BindAction("Grab", IE_Released, this, &ABuildingScapeCharacter::GrabRelease);
	PlayerInputComponent->BindAction("Throw", IE_Pressed, this, &ABuildingScapeCharacter::ThrowObject);
	
	PlayerInputComponent->BindAxis("MoveForward", this, &ABuildingScapeCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABuildingScapeCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &ABuildingScapeCharacter::Turn);

	PlayerInputComponent->BindAxis("LookUp", this, &ABuildingScapeCharacter::LookUp);

	

}

void ABuildingScapeCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if(!InteractComponent){return;}
	InteractComponent->CheckEnableInteract(DeltaSeconds);
}



void ABuildingScapeCharacter::MoveForward(float Value)
{
	if(!bEnableMovement){return;}
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ABuildingScapeCharacter::MoveRight(float Value)
{
	if(!bEnableMovement){return;}
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ABuildingScapeCharacter::Turn(float Value)
{
	if(!bEnableMovement){return;}
	AddControllerYawInput(Value);
}

void ABuildingScapeCharacter::LookUp(float Value)
{
	if(!bEnableMovement){return;}
	AddControllerPitchInput(Value);
}

void ABuildingScapeCharacter::Interact()
{
	InteractComponent->Interact(this);
}

void ABuildingScapeCharacter::ThrowObject()
{
	if (Grabber)
	{
		Grabber->Throw(FirstPersonCameraComponent->GetForwardVector());
	}
}

void ABuildingScapeCharacter::RestartGamePressed()
{
	BuildingEscapeGameMode = Cast<ABuildingEscapeGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
	if(!BuildingEscapeGameMode){ return; }

	BuildingEscapeGameMode->Restart();
}

void ABuildingScapeCharacter::GrabPressed()
{
	if(Grabber)
	{
		Grabber->Grab();
	}
}

void ABuildingScapeCharacter::GrabRelease()
{
	if(Grabber)
	{
		Grabber->Release();
	}
}

void ABuildingScapeCharacter::SetPlayerFatness(float Value)
{
	OnUpdatePlayerStats.Broadcast(this);
	PlayerStats.Fatness = Value;
}
float ABuildingScapeCharacter::GetPlayerFatness()
{
	return PlayerStats.Fatness;
}

void ABuildingScapeCharacter::AddPlayerFatness(float Value)
{
	OnUpdatePlayerStats.Broadcast(this);
	PlayerStats.Fatness+= Value;
}

void ABuildingScapeCharacter::SubstractPlayerFatness(float Value)
{
	OnUpdatePlayerStats.Broadcast(this);
	PlayerStats.Fatness-= Value;
}

void ABuildingScapeCharacter::SetPlayerLifes(int Value)
{
	OnUpdatePlayerStats.Broadcast(this);
	PlayerStats.Lifes = Value;
}

int ABuildingScapeCharacter::GetPlayerLifes()
{
	return PlayerStats.Lifes;
}

void ABuildingScapeCharacter::SubstractLifes(int Value)
{
	OnUpdatePlayerStats.Broadcast(this);
	OnSubstractLife.Broadcast();
	PlayerStats.Lifes -= Value;
}

void ABuildingScapeCharacter::AddLifes(int Value)
{
	OnUpdatePlayerStats.Broadcast(this);
	PlayerStats.Lifes += Value;
}

void ABuildingScapeCharacter::DisableMovement()
{
	bEnableMovement = false;
}
