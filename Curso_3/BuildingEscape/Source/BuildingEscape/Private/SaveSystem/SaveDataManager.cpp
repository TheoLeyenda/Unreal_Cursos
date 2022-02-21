// Copyright Theo Leyenda 2022


#include "SaveSystem/SaveDataManager.h"

#include "Serialization/Archive.h"
#include "Serialization/BufferArchive.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UObject/SoftObjectPtr.h"
#include "Serialization/NameAsStringProxyArchive.h"
#include "Misc/FileHelper.h"

bool USaveDataManager::ShouldCreateSubsystem(UObject* Outer) const
{
	const UWorld* World = Cast<UWorld>(Outer);
	return World && World->IsGameWorld();
}

void USaveDataManager::Save(AActor* Actor)
{
	if(!Actor)
	{
		UE_LOG(LogTemp, Error, TEXT("SaveDataManager: Parametro Actor NULO"));
		return;
	}
	FString FilePath = UKismetSystemLibrary::GetProjectDirectory() + "Player.sav";
	FActorSpawnInfo ActorData;
	
	ActorData.ActorTransform = Actor->GetTransform();
	ActorData.ActorPtr = Actor->GetClass();

	FMemoryWriter ActorWriter = FMemoryWriter(ActorData.ActorSaveData, true);

	FSaveArchive Ar(ActorWriter, true);

	Ar << ActorData;

	Actor->Serialize(Ar);

	if(FFileHelper::SaveArrayToFile(ActorData.ActorSaveData, *FilePath)){}

	Ar.FlushCache();
	Ar.Close();
}

void USaveDataManager::Load(AActor* Actor)
{
	FString FilePath = UKismetSystemLibrary::GetProjectSavedDirectory() + "Player.sav";

	TArray<uint8> BinaryArray;

	if(!FFileHelper::LoadFileToArray(BinaryArray, *FilePath)){ return; }

	if(BinaryArray.Num() <= 0) { return; }

	FMemoryReader FromBinary(BinaryArray, true);
	FromBinary.Seek(0);

	FSaveArchive Ar(FromBinary, true);

	FActorSpawnInfo SpawnInfo;
	Ar << SpawnInfo;
	AActor* ActorOut = Actor;

	ActorOut->SetActorTransform(SpawnInfo.ActorTransform);
	ActorOut->Serialize(Ar);

	FromBinary.FlushCache();
	BinaryArray.Empty();
	FromBinary.Close();
}


