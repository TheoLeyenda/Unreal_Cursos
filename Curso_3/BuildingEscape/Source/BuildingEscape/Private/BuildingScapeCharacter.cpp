// Copyright Theo Leyenda 2022


#include "BuildingScapeCharacter.h"

// Sets default values
ABuildingScapeCharacter::ABuildingScapeCharacter()
{
	PrimaryActorTick.bCanEverTick = false;
	BaseTurnRate = 45.0f;
	BaseLookUpRate = 45.0f;

	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
}

// Called when the game starts or when spawned
void ABuildingScapeCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called to bind functionality to input
void ABuildingScapeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &ABuildingScapeCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABuildingScapeCharacter::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);

	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);

}

void ABuildingScapeCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ABuildingScapeCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		AddMovementInput(GetActorRightVector(), Value);
	}
}
