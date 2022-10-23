// Copyright Theo Leyenda 2022

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ModifiableStaticMesh.generated.h"

UCLASS()
class BUILDINGESCAPE_API AModifiableStaticMesh : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AModifiableStaticMesh();

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;

	void SetNewMaterial(int IndexMaterial, UMaterialInterface* MaterialInterface);
};
