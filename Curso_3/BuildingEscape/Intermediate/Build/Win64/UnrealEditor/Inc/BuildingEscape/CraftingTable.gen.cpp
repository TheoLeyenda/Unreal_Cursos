// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/CraftingTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCraftingTable() {}
// Cross Module References
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FActorsRequired();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FActorsPlaceInfo();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FMatrixActorsPlace();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger_NoRegister();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FCraftingInfo();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACraftingTable();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACraftingTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectSpawner_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorsRequired;
class UScriptStruct* FActorsRequired::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorsRequired.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorsRequired.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorsRequired, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ActorsRequired"));
	}
	return Z_Registration_Info_UScriptStruct_ActorsRequired.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FActorsRequired>()
{
	return FActorsRequired::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorsRequired_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPlaceRequired_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorPlaceRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_indexPlace_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_indexPlace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsRequired_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorsRequired_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorsRequired>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_ActorPlaceRequired_MetaData[] = {
		{ "Category", "ActorsRequired" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_ActorPlaceRequired = { "ActorPlaceRequired", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsRequired, ActorPlaceRequired), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_ActorPlaceRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_ActorPlaceRequired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_indexPlace_MetaData[] = {
		{ "Category", "ActorsRequired" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_indexPlace = { "indexPlace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsRequired, indexPlace), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_indexPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_indexPlace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorsRequired_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_ActorPlaceRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsRequired_Statics::NewProp_indexPlace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorsRequired_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_ActorsRequired.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorsRequired.InnerSingleton, Z_Construct_UScriptStruct_FActorsRequired_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorsRequired.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorsPlaceInfo;
class UScriptStruct* FActorsPlaceInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorsPlaceInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorsPlaceInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorsPlaceInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ActorsPlaceInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ActorsPlaceInfo.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FActorsPlaceInfo>()
{
	return FActorsPlaceInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActorPlace_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActorPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_indexPlace_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_indexPlace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorsPlaceInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace_MetaData[] = {
		{ "Category", "ActorsPlaceInfo" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace = { "CurrentActorPlace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsPlaceInfo, CurrentActorPlace), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace_MetaData[] = {
		{ "Category", "ActorsPlaceInfo" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace = { "indexPlace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsPlaceInfo, indexPlace), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_ActorsPlaceInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorsPlaceInfo.InnerSingleton, Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorsPlaceInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MatrixActorsPlace;
class UScriptStruct* FMatrixActorsPlace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MatrixActorsPlace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MatrixActorsPlace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMatrixActorsPlace, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("MatrixActorsPlace"));
	}
	return Z_Registration_Info_UScriptStruct_MatrixActorsPlace.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FMatrixActorsPlace>()
{
	return FMatrixActorsPlace::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsPlace_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorsPlace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractTrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMatrixActorsPlace>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_ActorsPlace_MetaData[] = {
		{ "Category", "MatrixActorsPlace" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_ActorsPlace = { "ActorsPlace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatrixActorsPlace, ActorsPlace), Z_Construct_UScriptStruct_FActorsPlaceInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_ActorsPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_ActorsPlace_MetaData)) }; // 2447891204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_InteractTrigger_MetaData[] = {
		{ "Category", "MatrixActorsPlace" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_InteractTrigger = { "InteractTrigger", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMatrixActorsPlace, InteractTrigger), Z_Construct_UClass_AInteractTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_InteractTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_InteractTrigger_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_ActorsPlace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewProp_InteractTrigger,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_MatrixActorsPlace.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MatrixActorsPlace.InnerSingleton, Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MatrixActorsPlace.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CraftingInfo;
class UScriptStruct* FCraftingInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CraftingInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CraftingInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCraftingInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("CraftingInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CraftingInfo.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FCraftingInfo>()
{
	return FCraftingInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCraftingInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraftingActorSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CraftingActorSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountActorsSpawns_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CountActorsSpawns;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorsRequired_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsRequired_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsRequired;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCraftingInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CraftingActorSpawn_MetaData[] = {
		{ "Category", "CraftingInfo" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CraftingActorSpawn = { "CraftingActorSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCraftingInfo, CraftingActorSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CraftingActorSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CraftingActorSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CountActorsSpawns_MetaData[] = {
		{ "Category", "CraftingInfo" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CountActorsSpawns = { "CountActorsSpawns", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCraftingInfo, CountActorsSpawns), METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CountActorsSpawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CountActorsSpawns_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired_Inner = { "ActorsRequired", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorsRequired, METADATA_PARAMS(nullptr, 0) }; // 2853220045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired_MetaData[] = {
		{ "Category", "CraftingInfo" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired = { "ActorsRequired", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCraftingInfo, ActorsRequired), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired_MetaData)) }; // 2853220045
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCraftingInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CraftingActorSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_CountActorsSpawns,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_CraftingInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CraftingInfo.InnerSingleton, Z_Construct_UScriptStruct_FCraftingInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CraftingInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics
	{
		struct CraftingTable_eventOnCraftingActor_Parms
		{
			TSubclassOf<AActor>  ActorCraftedClass;
			ACraftingTable* CraftingTable;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorCraftedClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CraftingTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::NewProp_ActorCraftedClass = { "ActorCraftedClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_eventOnCraftingActor_Parms, ActorCraftedClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::NewProp_CraftingTable = { "CraftingTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CraftingTable_eventOnCraftingActor_Parms, CraftingTable), Z_Construct_UClass_ACraftingTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::NewProp_ActorCraftedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::NewProp_CraftingTable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACraftingTable, nullptr, "OnCraftingActor__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::CraftingTable_eventOnCraftingActor_Parms), Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ACraftingTable::StaticRegisterNativesACraftingTable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACraftingTable);
	UClass* Z_Construct_UClass_ACraftingTable_NoRegister()
	{
		return ACraftingTable::StaticClass();
	}
	struct Z_Construct_UClass_ACraftingTable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountSlots_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CountSlots;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MatrixActorsPlaceInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MatrixActorsPlaceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MatrixActorsPlaceInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComparePlaceActorsInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComparePlaceActorsInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComparePlaceActorsInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CraftingInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CraftingInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CraftingInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectSpawner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectSpawner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACraftingTable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_ACraftingTable_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_ACraftingTable_OnCraftingActor__DelegateSignature, "OnCraftingActor__DelegateSignature" }, // 3258373651
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CraftingTable.h" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlots_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlots = { "CountSlots", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, CountSlots), METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlots_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo_Inner = { "MatrixActorsPlaceInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMatrixActorsPlace, METADATA_PARAMS(nullptr, 0) }; // 577137899
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo = { "MatrixActorsPlaceInfo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, MatrixActorsPlaceInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo_MetaData)) }; // 577137899
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo_Inner = { "ComparePlaceActorsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorsPlaceInfo, METADATA_PARAMS(nullptr, 0) }; // 2447891204
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo = { "ComparePlaceActorsInfo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, ComparePlaceActorsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo_MetaData)) }; // 2447891204
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_Inner = { "CraftingInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCraftingInfo, METADATA_PARAMS(nullptr, 0) }; // 2431845079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo = { "CraftingInfo", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, CraftingInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_MetaData)) }; // 2431845079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner = { "ObjectSpawner", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, ObjectSpawner), Z_Construct_UClass_AObjectSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACraftingTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_MatrixActorsPlaceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_ComparePlaceActorsInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACraftingTable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACraftingTable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACraftingTable_Statics::ClassParams = {
		&ACraftingTable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_ACraftingTable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACraftingTable()
	{
		if (!Z_Registration_Info_UClass_ACraftingTable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACraftingTable.OuterSingleton, Z_Construct_UClass_ACraftingTable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACraftingTable.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ACraftingTable>()
	{
		return ACraftingTable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACraftingTable);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_Statics::ScriptStructInfo[] = {
		{ FActorsRequired::StaticStruct, Z_Construct_UScriptStruct_FActorsRequired_Statics::NewStructOps, TEXT("ActorsRequired"), &Z_Registration_Info_UScriptStruct_ActorsRequired, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorsRequired), 2853220045U) },
		{ FActorsPlaceInfo::StaticStruct, Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewStructOps, TEXT("ActorsPlaceInfo"), &Z_Registration_Info_UScriptStruct_ActorsPlaceInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorsPlaceInfo), 2447891204U) },
		{ FMatrixActorsPlace::StaticStruct, Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics::NewStructOps, TEXT("MatrixActorsPlace"), &Z_Registration_Info_UScriptStruct_MatrixActorsPlace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMatrixActorsPlace), 577137899U) },
		{ FCraftingInfo::StaticStruct, Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewStructOps, TEXT("CraftingInfo"), &Z_Registration_Info_UScriptStruct_CraftingInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCraftingInfo), 2431845079U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACraftingTable, ACraftingTable::StaticClass, TEXT("ACraftingTable"), &Z_Registration_Info_UClass_ACraftingTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACraftingTable), 33235580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_3826134726(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
