#include "FPSAIGuard.h"
#include "DrawDebugHelpers.h"
#include "FPSGameMode.h"

AFPSAIGuard::AFPSAIGuard()
{
	PrimaryActorTick.bCanEverTick = true;

	PawnSensingComponent = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComponent"));

	PawnSensingComponent->OnSeePawn.AddDynamic(this, &ThisClass::OnPawnSeen);
	PawnSensingComponent->OnHearNoise.AddDynamic(this, &ThisClass::OnNoiseHeard);
}

void AFPSAIGuard::BeginPlay()
{
	Super::BeginPlay();

	OriginalRotation = GetActorRotation();
}

void AFPSAIGuard::OnPawnSeen(APawn* SeenPawn)
{
	if(SeenPawn == nullptr)
		return;
	
	DrawDebugSphere(GetWorld(), SeenPawn->GetActorLocation(), 32.0f + 5.0f, 12, FColor::Red, false, 10.0f);

	if(auto* GameMode = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode()))
	{
		GameMode->CompleteMission(SeenPawn, false);
	}
}

void AFPSAIGuard::OnNoiseHeard(APawn* NoiseInstigator, const FVector& Location, float Volume)
{
	if(NoiseInstigator == nullptr)
		return;
	
	DrawDebugSphere(GetWorld(), Location, 32.0f - 5.0f, 12, FColor::Green, false, 10.0f);

	FVector Direction = Location - GetActorLocation();
	Direction.Normalize();
	
	FRotator NewLookAt = FRotationMatrix::MakeFromX(Direction).Rotator();
	NewLookAt.Pitch = 0.0f;
	NewLookAt.Roll = 0.0f;
	
	SetActorRotation(NewLookAt);
	
	GetWorldTimerManager().SetTimer(TimerHandle_ResetOrientation, this, &ThisClass::ResetOrientation, 3.0f);
}

void AFPSAIGuard::ResetOrientation()
{
	SetActorRotation(OriginalRotation);
}


void AFPSAIGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
