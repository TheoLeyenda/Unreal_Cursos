// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/LeverSwitchCombinePanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeverSwitchCombinePanel() {}
// Cross Module References
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSwitcherInfo();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectSpawnLeverSwitch_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AModifiableStaticMesh_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnObjectInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALeverSwitchCombinePanel_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALeverSwitchCombinePanel();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACombinePanel();
// End Cross Module References
class UScriptStruct* FSwitcherInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FSwitcherInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwitcherInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("SwitcherInfo"), sizeof(FSwitcherInfo), Get_Z_Construct_UScriptStruct_FSwitcherInfo_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FSwitcherInfo>()
{
	return FSwitcherInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSwitcherInfo(FSwitcherInfo::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("SwitcherInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFSwitcherInfo
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFSwitcherInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SwitcherInfo")),new UScriptStruct::TCppStructOps<FSwitcherInfo>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFSwitcherInfo;
	struct Z_Construct_UScriptStruct_FSwitcherInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeverSwitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeverSwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FeedbackLeverMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FeedbackLeverMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckDone_MetaData[];
#endif
		static void NewProp_bCheckDone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckDone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAssignedObjectSpawn_MetaData[];
#endif
		static void NewProp_bAssignedObjectSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAssignedObjectSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwitcherInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_LeverSwitch_MetaData[] = {
		{ "Category", "SwitcherInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_LeverSwitch = { "LeverSwitch", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitcherInfo, LeverSwitch), Z_Construct_UClass_AObjectSpawnLeverSwitch_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_LeverSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_LeverSwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "SwitcherInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitcherInfo, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_FeedbackLeverMesh_MetaData[] = {
		{ "Category", "SwitcherInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_FeedbackLeverMesh = { "FeedbackLeverMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitcherInfo, FeedbackLeverMesh), Z_Construct_UClass_AModifiableStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_FeedbackLeverMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_FeedbackLeverMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_ObjectSpawn_MetaData[] = {
		{ "Category", "SwitcherInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_ObjectSpawn = { "ObjectSpawn", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitcherInfo, ObjectSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_ObjectSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_ObjectSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone_MetaData[] = {
		{ "Category", "SwitcherInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone_SetBit(void* Obj)
	{
		((FSwitcherInfo*)Obj)->bCheckDone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone = { "bCheckDone", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSwitcherInfo), &Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn_MetaData[] = {
		{ "Category", "SwitcherInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn_SetBit(void* Obj)
	{
		((FSwitcherInfo*)Obj)->bAssignedObjectSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn = { "bAssignedObjectSpawn", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSwitcherInfo), &Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwitcherInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_LeverSwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_FeedbackLeverMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_ObjectSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"SwitcherInfo",
		sizeof(FSwitcherInfo),
		alignof(FSwitcherInfo),
		Z_Construct_UScriptStruct_FSwitcherInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSwitcherInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSwitcherInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SwitcherInfo"), sizeof(FSwitcherInfo), Get_Z_Construct_UScriptStruct_FSwitcherInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSwitcherInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSwitcherInfo_Hash() { return 167873278U; }
class UScriptStruct* FSpawnObjectInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FSpawnObjectInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnObjectInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("SpawnObjectInfo"), sizeof(FSpawnObjectInfo), Get_Z_Construct_UScriptStruct_FSpawnObjectInfo_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FSpawnObjectInfo>()
{
	return FSpawnObjectInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnObjectInfo(FSpawnObjectInfo::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("SpawnObjectInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFSpawnObjectInfo
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFSpawnObjectInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpawnObjectInfo")),new UScriptStruct::TCppStructOps<FSpawnObjectInfo>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFSpawnObjectInfo;
	struct Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n*/" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnObjectInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "SpawnObjectInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnObjectInfo, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_ObjectSpawn_MetaData[] = {
		{ "Category", "SpawnObjectInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_ObjectSpawn = { "ObjectSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnObjectInfo, ObjectSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_ObjectSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_ObjectSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "SpawnObjectInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnObjectInfo, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Material_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Code,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_ObjectSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Material,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"SpawnObjectInfo",
		sizeof(FSpawnObjectInfo),
		alignof(FSpawnObjectInfo),
		Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnObjectInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnObjectInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnObjectInfo"), sizeof(FSpawnObjectInfo), Get_Z_Construct_UScriptStruct_FSpawnObjectInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnObjectInfo_Hash() { return 3571213544U; }
	void ALeverSwitchCombinePanel::StaticRegisterNativesALeverSwitchCombinePanel()
	{
	}
	UClass* Z_Construct_UClass_ALeverSwitchCombinePanel_NoRegister()
	{
		return ALeverSwitchCombinePanel::StaticClass();
	}
	struct Z_Construct_UClass_ALeverSwitchCombinePanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnObjectsInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnObjectsInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnObjectsInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeverSwitchesInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeverSwitchesInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeverSwitchesInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifeSubstractForFail_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LifeSubstractForFail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACombinePanel,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LeverSwitchCombinePanel.h" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo_Inner = { "SpawnObjectsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnObjectInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo_MetaData[] = {
		{ "Category", "LeverSwitchCombinePanel" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo = { "SpawnObjectsInfo", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitchCombinePanel, SpawnObjectsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo_Inner = { "LeverSwitchesInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSwitcherInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo_MetaData[] = {
		{ "Category", "LeverSwitchCombinePanel" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo = { "LeverSwitchesInfo", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitchCombinePanel, LeverSwitchesInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LifeSubstractForFail_MetaData[] = {
		{ "Category", "LeverSwitchCombinePanel" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LifeSubstractForFail = { "LifeSubstractForFail", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitchCombinePanel, LifeSubstractForFail), METADATA_PARAMS(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LifeSubstractForFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LifeSubstractForFail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LifeSubstractForFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeverSwitchCombinePanel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::ClassParams = {
		&ALeverSwitchCombinePanel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALeverSwitchCombinePanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALeverSwitchCombinePanel, 3000957654);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ALeverSwitchCombinePanel>()
	{
		return ALeverSwitchCombinePanel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALeverSwitchCombinePanel(Z_Construct_UClass_ALeverSwitchCombinePanel, &ALeverSwitchCombinePanel::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ALeverSwitchCombinePanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALeverSwitchCombinePanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
