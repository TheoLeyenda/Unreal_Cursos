// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/QuestActorComponentID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestActorComponentID() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestActorComponentID_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestActorComponentID();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UQuestActorComponentID::StaticRegisterNativesUQuestActorComponentID()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuestActorComponentID);
	UClass* Z_Construct_UClass_UQuestActorComponentID_NoRegister()
	{
		return UQuestActorComponentID::StaticClass();
	}
	struct Z_Construct_UClass_UQuestActorComponentID_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlueprintClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestActorComponentID_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestActorComponentID_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuestSystem/QuestActorComponentID.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestActorComponentID.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestActorComponentID_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "QuestActorComponentID" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestActorComponentID.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UQuestActorComponentID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestActorComponentID, ID), METADATA_PARAMS(Z_Construct_UClass_UQuestActorComponentID_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestActorComponentID_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestActorComponentID_Statics::NewProp_BlueprintClass_MetaData[] = {
		{ "Category", "QuestActorComponentID" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestActorComponentID.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UQuestActorComponentID_Statics::NewProp_BlueprintClass = { "BlueprintClass", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestActorComponentID, BlueprintClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UQuestActorComponentID_Statics::NewProp_BlueprintClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestActorComponentID_Statics::NewProp_BlueprintClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestActorComponentID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestActorComponentID_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestActorComponentID_Statics::NewProp_BlueprintClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestActorComponentID_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestActorComponentID>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuestActorComponentID_Statics::ClassParams = {
		&UQuestActorComponentID::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestActorComponentID_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestActorComponentID_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestActorComponentID_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestActorComponentID_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestActorComponentID()
	{
		if (!Z_Registration_Info_UClass_UQuestActorComponentID.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuestActorComponentID.OuterSingleton, Z_Construct_UClass_UQuestActorComponentID_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuestActorComponentID.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UQuestActorComponentID>()
	{
		return UQuestActorComponentID::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestActorComponentID);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestActorComponentID_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestActorComponentID_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuestActorComponentID, UQuestActorComponentID::StaticClass, TEXT("UQuestActorComponentID"), &Z_Registration_Info_UClass_UQuestActorComponentID, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuestActorComponentID), 2868436577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestActorComponentID_h_1809214484(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestActorComponentID_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestActorComponentID_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
