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
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FActorsPlaceInfo();
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCraftingInfo_Statics::NewProp_ActorsRequired_Inner = { "ActorsRequired", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorsPlaceInfo, METADATA_PARAMS(nullptr, 0) };
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
	uint32 Get_Z_Construct_UScriptStruct_FCraftingInfo_Hash() { return 3083822199U; }
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace = { "CurrentActorPlace", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsPlaceInfo, CurrentActorPlace), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_CurrentActorPlace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace_MetaData[] = {
		{ "Category", "ActorsPlaceInfo" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace = { "indexPlace", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorsPlaceInfo, indexPlace), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics::NewProp_indexPlace_MetaData)) };
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
	uint32 Get_Z_Construct_UScriptStruct_FActorsPlaceInfo_Hash() { return 239297148U; }
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountSlotsCraftingTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CountSlotsCraftingTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorsPlaceInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsPlaceInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsPlaceInfo;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlotsCraftingTable_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlotsCraftingTable = { "CountSlotsCraftingTable", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, CountSlotsCraftingTable), METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlotsCraftingTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlotsCraftingTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_ActorsPlaceInfo_Inner = { "ActorsPlaceInfo", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorsPlaceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_ActorsPlaceInfo_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_ActorsPlaceInfo = { "ActorsPlaceInfo", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, ActorsPlaceInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_ActorsPlaceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_ActorsPlaceInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_Inner = { "CraftingInfo", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCraftingInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo = { "CraftingInfo", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, CraftingInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_CraftingInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner_MetaData[] = {
		{ "Category", "CraftingTable" },
		{ "ModuleRelativePath", "Public/CraftingTable.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner = { "ObjectSpawner", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACraftingTable, ObjectSpawner), Z_Construct_UClass_AObjectSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACraftingTable_Statics::NewProp_ObjectSpawner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACraftingTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_CountSlotsCraftingTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_ActorsPlaceInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACraftingTable_Statics::NewProp_ActorsPlaceInfo,
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
	IMPLEMENT_CLASS(ACraftingTable, 4125119826);
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
