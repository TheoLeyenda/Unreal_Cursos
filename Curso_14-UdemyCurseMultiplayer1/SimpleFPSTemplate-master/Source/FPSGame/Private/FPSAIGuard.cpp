#include "FPSAIGuard.h"
#include "DrawDebugHelpers.h"

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
}

void AFPSAIGuard::OnPawnSeen(APawn* SeenPawn)
{
	if(SeenPawn == nullptr)
		return;
	
	DrawDebugSphere(GetWorld(), SeenPawn->GetActorLocation(), 32.0f + 5.0f, 12, FColor::Red, false, 10.0f);
}

void AFPSAIGuard::OnNoiseHeard(APawn* NoiseInstigator, const FVector& Location, float Volume)
{
	if(NoiseInstigator == nullptr)
		return;
	
	DrawDebugSphere(GetWorld(), Location, 32.0f - 5.0f, 12, FColor::Green, false, 10.0f);
}


void AFPSAIGuard::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
