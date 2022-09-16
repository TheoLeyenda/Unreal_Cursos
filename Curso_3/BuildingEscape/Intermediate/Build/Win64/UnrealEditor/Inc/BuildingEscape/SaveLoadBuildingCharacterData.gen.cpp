// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/SaveSystem/SaveLoadBuildingCharacterData.h"
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
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorSpawnInfo;
class UScriptStruct* FActorSpawnInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorSpawnInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorSpawnInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSpawnInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ActorSpawnInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ActorSpawnInfo.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FActorSpawnInfo>()
{
	return FActorSpawnInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorSpawnInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStats_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerStats;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ActorPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadBuildingCharacterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSpawnInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform_MetaData[] = {
		{ "Category", "ActorSpawnInfo" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadBuildingCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnInfo, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats_MetaData[] = {
		{ "Category", "ActorSpawnInfo" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadBuildingCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats = { "PlayerStats", nullptr, (EPropertyFlags)0x0010000001000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnInfo, PlayerStats), Z_Construct_UScriptStruct_FPlayerStats, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats_MetaData)) }; // 524547010
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "ActorSpawnInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadBuildingCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x001000800100000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnInfo, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr_MetaData[] = {
		{ "Category", "ActorSpawnInfo" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadBuildingCharacterData.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr = { "ActorPtr", nullptr, (EPropertyFlags)0x0014000001000005, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnInfo, ActorPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_ActorSpawnInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorSpawnInfo.InnerSingleton, Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorSpawnInfo.InnerSingleton;
	}
	void USaveLoadBuildingCharacterData::StaticRegisterNativesUSaveLoadBuildingCharacterData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveLoadBuildingCharacterData);
	UClass* Z_Construct_UClass_USaveLoadBuildingCharacterData_NoRegister()
	{
		return USaveLoadBuildingCharacterData::StaticClass();
	}
	struct Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveLoadData,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveSystem/SaveLoadBuildingCharacterData.h" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveLoadBuildingCharacterData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveLoadBuildingCharacterData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_USaveLoadBuildingCharacterData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveLoadBuildingCharacterData.OuterSingleton, Z_Construct_UClass_USaveLoadBuildingCharacterData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveLoadBuildingCharacterData.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<USaveLoadBuildingCharacterData>()
	{
		return USaveLoadBuildingCharacterData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveLoadBuildingCharacterData);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadBuildingCharacterData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadBuildingCharacterData_h_Statics::ScriptStructInfo[] = {
		{ FActorSpawnInfo::StaticStruct, Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewStructOps, TEXT("ActorSpawnInfo"), &Z_Registration_Info_UScriptStruct_ActorSpawnInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorSpawnInfo), 3640306854U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadBuildingCharacterData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USaveLoadBuildingCharacterData, USaveLoadBuildingCharacterData::StaticClass, TEXT("USaveLoadBuildingCharacterData"), &Z_Registration_Info_UClass_USaveLoadBuildingCharacterData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveLoadBuildingCharacterData), 468645029U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadBuildingCharacterData_h_3387516662(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadBuildingCharacterData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadBuildingCharacterData_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadBuildingCharacterData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadBuildingCharacterData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
