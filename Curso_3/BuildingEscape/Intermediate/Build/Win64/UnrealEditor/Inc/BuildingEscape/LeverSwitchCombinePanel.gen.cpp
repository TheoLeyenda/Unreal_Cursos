// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/LeverSwitchCombinePanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeverSwitchCombinePanel() {}
// Cross Module References
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnObjectInfo();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FSwitcherInfo();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectSpawnLeverSwitch_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AModifiableStaticMesh_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALeverSwitchCombinePanel_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALeverSwitchCombinePanel();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACombinePanel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnObjectInfo;
class UScriptStruct* FSpawnObjectInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnObjectInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnObjectInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnObjectInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("SpawnObjectInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnObjectInfo.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FSpawnObjectInfo>()
{
	return FSpawnObjectInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n*/" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnObjectInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "SpawnObjectInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnObjectInfo, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_ObjectSpawn_MetaData[] = {
		{ "Category", "SpawnObjectInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_ObjectSpawn = { "ObjectSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnObjectInfo, ObjectSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_ObjectSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_ObjectSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "SpawnObjectInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnObjectInfo, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_ObjectSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewProp_Material,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_SpawnObjectInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnObjectInfo.InnerSingleton, Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpawnObjectInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SwitcherInfo;
class UScriptStruct* FSwitcherInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SwitcherInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SwitcherInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSwitcherInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("SwitcherInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SwitcherInfo.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FSwitcherInfo>()
{
	return FSwitcherInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSwitcherInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeverSwitch_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeverSwitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Code_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Code;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeedbackLeverMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FeedbackLeverMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ObjectSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCheckDone_MetaData[];
#endif
		static void NewProp_bCheckDone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckDone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAssignedObjectSpawn_MetaData[];
#endif
		static void NewProp_bAssignedObjectSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignedObjectSpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSwitcherInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_LeverSwitch_MetaData[] = {
		{ "Category", "SwitcherInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_LeverSwitch = { "LeverSwitch", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitcherInfo, LeverSwitch), Z_Construct_UClass_AObjectSpawnLeverSwitch_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_LeverSwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_LeverSwitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_Code_MetaData[] = {
		{ "Category", "SwitcherInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_Code = { "Code", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitcherInfo, Code), METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_Code_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_Code_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_FeedbackLeverMesh_MetaData[] = {
		{ "Category", "SwitcherInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_FeedbackLeverMesh = { "FeedbackLeverMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitcherInfo, FeedbackLeverMesh), Z_Construct_UClass_AModifiableStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_FeedbackLeverMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_FeedbackLeverMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_ObjectSpawn_MetaData[] = {
		{ "Category", "SwitcherInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_ObjectSpawn = { "ObjectSpawn", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSwitcherInfo, ObjectSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_ObjectSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_ObjectSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone_MetaData[] = {
		{ "Category", "SwitcherInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone_SetBit(void* Obj)
	{
		((FSwitcherInfo*)Obj)->bCheckDone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone = { "bCheckDone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSwitcherInfo), &Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn_MetaData[] = {
		{ "Category", "SwitcherInfo" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn_SetBit(void* Obj)
	{
		((FSwitcherInfo*)Obj)->bAssignedObjectSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn = { "bAssignedObjectSpawn", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSwitcherInfo), &Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSwitcherInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_LeverSwitch,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_Code,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_FeedbackLeverMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_ObjectSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bCheckDone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewProp_bAssignedObjectSpawn,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSwitcherInfo_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_SwitcherInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SwitcherInfo.InnerSingleton, Z_Construct_UScriptStruct_FSwitcherInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SwitcherInfo.InnerSingleton;
	}
	void ALeverSwitchCombinePanel::StaticRegisterNativesALeverSwitchCombinePanel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALeverSwitchCombinePanel);
	UClass* Z_Construct_UClass_ALeverSwitchCombinePanel_NoRegister()
	{
		return ALeverSwitchCombinePanel::StaticClass();
	}
	struct Z_Construct_UClass_ALeverSwitchCombinePanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnObjectsInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnObjectsInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnObjectsInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LeverSwitchesInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeverSwitchesInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LeverSwitchesInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeSubstractForFail_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_LifeSubstractForFail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACombinePanel,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LeverSwitchCombinePanel.h" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo_Inner = { "SpawnObjectsInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpawnObjectInfo, METADATA_PARAMS(nullptr, 0) }; // 3810117276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo_MetaData[] = {
		{ "Category", "LeverSwitchCombinePanel" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo = { "SpawnObjectsInfo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitchCombinePanel, SpawnObjectsInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo_MetaData)) }; // 3810117276
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo_Inner = { "LeverSwitchesInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSwitcherInfo, METADATA_PARAMS(nullptr, 0) }; // 3948889383
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo_MetaData[] = {
		{ "Category", "LeverSwitchCombinePanel" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo = { "LeverSwitchesInfo", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitchCombinePanel, LeverSwitchesInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo_MetaData)) }; // 3948889383
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LifeSubstractForFail_MetaData[] = {
		{ "Category", "LeverSwitchCombinePanel" },
		{ "ModuleRelativePath", "Public/LeverSwitchCombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LifeSubstractForFail = { "LifeSubstractForFail", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALeverSwitchCombinePanel, LifeSubstractForFail), METADATA_PARAMS(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LifeSubstractForFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LifeSubstractForFail_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_SpawnObjectsInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LeverSwitchesInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::NewProp_LifeSubstractForFail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALeverSwitchCombinePanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_ALeverSwitchCombinePanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALeverSwitchCombinePanel.OuterSingleton, Z_Construct_UClass_ALeverSwitchCombinePanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALeverSwitchCombinePanel.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ALeverSwitchCombinePanel>()
	{
		return ALeverSwitchCombinePanel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALeverSwitchCombinePanel);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchCombinePanel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchCombinePanel_h_Statics::ScriptStructInfo[] = {
		{ FSpawnObjectInfo::StaticStruct, Z_Construct_UScriptStruct_FSpawnObjectInfo_Statics::NewStructOps, TEXT("SpawnObjectInfo"), &Z_Registration_Info_UScriptStruct_SpawnObjectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnObjectInfo), 3810117276U) },
		{ FSwitcherInfo::StaticStruct, Z_Construct_UScriptStruct_FSwitcherInfo_Statics::NewStructOps, TEXT("SwitcherInfo"), &Z_Registration_Info_UScriptStruct_SwitcherInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSwitcherInfo), 3948889383U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchCombinePanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALeverSwitchCombinePanel, ALeverSwitchCombinePanel::StaticClass, TEXT("ALeverSwitchCombinePanel"), &Z_Registration_Info_UClass_ALeverSwitchCombinePanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALeverSwitchCombinePanel), 3152719436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchCombinePanel_h_2044558151(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchCombinePanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchCombinePanel_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchCombinePanel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LeverSwitchCombinePanel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
