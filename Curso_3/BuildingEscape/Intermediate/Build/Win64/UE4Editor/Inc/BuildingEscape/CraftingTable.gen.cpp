// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/CraftingTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraftingTable() {}
// Cross Module References
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FCraftingInfo();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FActorsRequired();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FMatrixActorsPlace();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FActorsPlaceInfo();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACraftingTable_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACraftingTable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectSpawner_NoRegister();
// End Cross Module References
class UScriptStruct* FCraftingInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCraftingInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("CraftingInfo"), sizeof(FCraftingInfo), Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FCraftingInfo>()
{
	return FCraftingInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCraftingInfo(FCraftingInfo::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("CraftingInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFCraftingInfo
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFCraftingInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CraftingInfo")),new UScriptStruct::TCppStructOps<FCraftingInfo>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFCraftingInfo;
	struct Z_Construct_UScriptStruct_FCraftingInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CraftingActorSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CraftingActorSpawn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorsRequired_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsRequired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCraftingInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CraftingActorSpawn_MetaData[] = {
		{ "Category", "CraftingInfo" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CraftingActorSpawn = { "CraftingActorSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCraftingInfo, CraftingActorSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CraftingActorSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CraftingActorSpawn_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired_Inner = { "ActorsRequired", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorsRequired, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired_MetaData[] = {
		{ "Category", "CraftingInfo" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired = { "ActorsRequired", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCraftingInfo, ActorsRequired), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCraftingInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CraftingActorSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"CraftingInfo",
		sizeof(FCraftingInfo),
		alignof(FCraftingInfo),
		Z_Construct_UScriptStruct_FCraftingInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCraftingInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CraftingInfo"), sizeof(FCraftingInfo), Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCraftingInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash() { return 4084154673U; }
class UScriptStruct* FMatrixActorsPlace::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FMatrixActorsPlace_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatrixActorsPlace, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("MatrixActorsPlace"), sizeof(FMatrixActorsPlace), Get_Z_Construct_UScriptStruct_FMatrixActorsPlace_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FMatrixActorsPlace>()
{
	return FMatrixActorsPlace::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMatrixActorsPlace(FMatrixActorsPlace::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("MatrixActorsPlace"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFMatrixActorsPlace
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFMatrixActorsPlace()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MatrixActorsPlace")),new UScriptStruct::TCppStructOps<FMatrixActorsPlace>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFMatrixActorsPlace;
	struct Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsPlace_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorsPlace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractTrigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatrixActorsPlace>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_ActorsPlace_MetaData[] = {
		{ "Category", "MatrixActorsPlace" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_ActorsPlace = { "ActorsPlace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatrixActorsPlace, ActorsPlace), Z_Construct_UScriptStruct_FActorsPlaceInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_ActorsPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_ActorsPlace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_InteractTrigger_MetaData[] = {
		{ "Category", "MatrixActorsPlace" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_InteractTrigger = { "InteractTrigger", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatrixActorsPlace, InteractTrigger), Z_Construct_UClass_AInteractTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_InteractTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_InteractTrigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_ActorsPlace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_InteractTrigger,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"MatrixActorsPlace",
		sizeof(FMatrixActorsPlace),
		alignof(FMatrixActorsPlace),
		Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMatrixActorsPlace()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMatrixActorsPlace_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MatrixActorsPlace"), sizeof(FMatrixActorsPlace), Get_Z_Construct_UScriptStruct_FMatrixActorsPlace_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMatrixActorsPlace_Hash() { return 51748029U; }
class UScriptStruct* FActorsPlaceInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FActorsPlaceInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorsPlaceInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ActorsPlaceInfo"), sizeof(FActorsPlaceInfo), Get_Z_Construct_UScriptStruct_FActorsPlaceInfo_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FActorsPlaceInfo>()
{
	return FActorsPlaceInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorsPlaceInfo(FActorsPlaceInfo::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("ActorsPlaceInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFActorsPlaceInfo
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFActorsPlaceInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorsPlaceInfo")),new UScriptStruct::TCppStructOps<FActorsPlaceInfo>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFActorsPlaceInfo;
	struct Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentActorPlace_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentActorPlace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_indexPlace_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indexPlace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorsPlaceInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace_MetaData[] = {
		{ "Category", "ActorsPlaceInfo" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace = { "CurrentActorPlace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsPlaceInfo, CurrentActorPlace), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace_MetaData[] = {
		{ "Category", "ActorsPlaceInfo" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace = { "indexPlace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsPlaceInfo, indexPlace), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"ActorsPlaceInfo",
		sizeof(FActorsPlaceInfo),
		alignof(FActorsPlaceInfo),
		Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorsPlaceInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorsPlaceInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorsPlaceInfo"), sizeof(FActorsPlaceInfo), Get_Z_Construct_UScriptStruct_FActorsPlaceInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorsPlaceInfo_Hash() { return 1940102262U; }
class UScriptStruct* FActorsRequired::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FActorsRequired_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorsRequired, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ActorsRequired"), sizeof(FActorsRequired), Get_Z_Construct_UScriptStruct_FActorsRequired_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FActorsRequired>()
{
	return FActorsRequired::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorsRequired(FActorsRequired::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("ActorsRequired"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFActorsRequired
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFActorsRequired()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorsRequired")),new UScriptStruct::TCppStructOps<FActorsRequired>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFActorsRequired;
	struct Z_Construct_UScriptStruct_FActorsRequired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorPlaceRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorPlaceRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_indexPlace_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indexPlace;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsRequired_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorsRequired_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorsRequired>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_ActorPlaceRequired_MetaData[] = {
		{ "Category", "ActorsRequired" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_ActorPlaceRequired = { "ActorPlaceRequired", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsRequired, ActorPlaceRequired), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_ActorPlaceRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_ActorPlaceRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_indexPlace_MetaData[] = {
		{ "Category", "ActorsRequired" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_indexPlace = { "indexPlace", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsRequired, indexPlace), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_indexPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_indexPlace_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorsRequired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_ActorPlaceRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_indexPlace,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorsRequired_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"ActorsRequired",
		sizeof(FActorsRequired),
		alignof(FActorsRequired),
		Z_Construct_UScriptStruct_FActorsRequired_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsRequired_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsRequired_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsRequired_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorsRequired()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorsRequired_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorsRequired"), sizeof(FActorsRequired), Get_Z_Construct_UScriptStruct_FActorsRequired_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorsRequired_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorsRequired_Hash() { return 3805156416U; }
	void ACraftingTable::StaticRegisterNativesACraftingTable()
	{
	}
	UClass* Z_Construct_UClass_ACraftingTable_NoRegister()
	{
		return ACraftingTable::StaticClass();
	}
	struct Z_Construct_UClass_ACraftingTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CountSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MatrixActorsPlaceInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatrixActorsPlaceInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MatrixActorsPlaceInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComparePlaceActorsInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComparePlaceActorsInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComparePlaceActorsInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CraftingInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CraftingInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CraftingInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectSpawner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectSpawner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACraftingTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CraftingTable.h" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlots_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlots = { "CountSlots", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, CountSlots), METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo_Inner = { "MatrixActorsPlaceInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMatrixActorsPlace, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo = { "MatrixActorsPlaceInfo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, MatrixActorsPlaceInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo_Inner = { "ComparePlaceActorsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorsPlaceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo = { "ComparePlaceActorsInfo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, ComparePlaceActorsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_Inner = { "CraftingInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCraftingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo = { "CraftingInfo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, CraftingInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner = { "ObjectSpawner", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, ObjectSpawner), Z_Construct_UClass_AObjectSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACraftingTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACraftingTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACraftingTable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACraftingTable_Statics::ClassParams = {
		&ACraftingTable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACraftingTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACraftingTable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACraftingTable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACraftingTable, 3648226550);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ACraftingTable>()
	{
		return ACraftingTable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACraftingTable(Z_Construct_UClass_ACraftingTable, &ACraftingTable::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ACraftingTable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACraftingTable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
