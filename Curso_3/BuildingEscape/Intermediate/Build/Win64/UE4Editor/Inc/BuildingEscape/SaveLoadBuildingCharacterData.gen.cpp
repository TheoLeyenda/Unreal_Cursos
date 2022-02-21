// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/SaveSystem/SaveLoadBuildingCharacterData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveLoadBuildingCharacterData() {}
// Cross Module References
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSpawnInfo();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStats();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USaveLoadBuildingCharacterData_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USaveLoadBuildingCharacterData();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USaveLoadData();
// End Cross Module References
class UScriptStruct* FActorSpawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FActorSpawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSpawnInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ActorSpawnInfo"), sizeof(FActorSpawnInfo), Get_Z_Construct_UScriptStruct_FActorSpawnInfo_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FActorSpawnInfo>()
{
	return FActorSpawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorSpawnInfo(FActorSpawnInfo::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("ActorSpawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFActorSpawnInfo
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFActorSpawnInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorSpawnInfo")),new UScriptStruct::TCppStructOps<FActorSpawnInfo>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFActorSpawnInfo;
	struct Z_Construct_UScriptStruct_FActorSpawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerStats;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ActorPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadBuildingCharacterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSpawnInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform_MetaData[] = {
		{ "Category", "ActorSpawnInfo" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadBuildingCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnInfo, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats_MetaData[] = {
		{ "Category", "ActorSpawnInfo" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadBuildingCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats = { "PlayerStats", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnInfo, PlayerStats), Z_Construct_UScriptStruct_FPlayerStats, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "ActorSpawnInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadBuildingCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x001000800100000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnInfo, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr_MetaData[] = {
		{ "Category", "ActorSpawnInfo" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadBuildingCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr = { "ActorPtr", nullptr, (EPropertyFlags)0x0014000001000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnInfo, ActorPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"ActorSpawnInfo",
		sizeof(FActorSpawnInfo),
		alignof(FActorSpawnInfo),
		Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSpawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorSpawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorSpawnInfo"), sizeof(FActorSpawnInfo), Get_Z_Construct_UScriptStruct_FActorSpawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorSpawnInfo_Hash() { return 3706252387U; }
	void USaveLoadBuildingCharacterData::StaticRegisterNativesUSaveLoadBuildingCharacterData()
	{
	}
	UClass* Z_Construct_UClass_USaveLoadBuildingCharacterData_NoRegister()
	{
		return USaveLoadBuildingCharacterData::StaticClass();
	}
	struct Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveLoadData,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveSystem/SaveLoadBuildingCharacterData.h" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadBuildingCharacterData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveLoadBuildingCharacterData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics::ClassParams = {
		&USaveLoadBuildingCharacterData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveLoadBuildingCharacterData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveLoadBuildingCharacterData, 2341025976);
	template<> BUILDINGESCAPE_API UClass* StaticClass<USaveLoadBuildingCharacterData>()
	{
		return USaveLoadBuildingCharacterData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveLoadBuildingCharacterData(Z_Construct_UClass_USaveLoadBuildingCharacterData, &USaveLoadBuildingCharacterData::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("USaveLoadBuildingCharacterData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveLoadBuildingCharacterData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
