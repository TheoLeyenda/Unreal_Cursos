// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/GameOverTriggerBySpecificObjects.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverTriggerBySpecificObjects() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AGameOverTriggerBySpecificObjects_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AGameOverTriggerBySpecificObjects();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectsInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void AGameOverTriggerBySpecificObjects::StaticRegisterNativesAGameOverTriggerBySpecificObjects()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameOverTriggerBySpecificObjects);
	UClass* Z_Construct_UClass_AGameOverTriggerBySpecificObjects_NoRegister()
	{
		return AGameOverTriggerBySpecificObjects::StaticClass();
	}
	struct Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectsInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameOverTriggerBySpecificObjects.h" },
		{ "ModuleRelativePath", "Public/GameOverTriggerBySpecificObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameOverTriggerBySpecificObjects>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::ClassParams = {
		&AGameOverTriggerBySpecificObjects::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameOverTriggerBySpecificObjects()
	{
		if (!Z_Registration_Info_UClass_AGameOverTriggerBySpecificObjects.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameOverTriggerBySpecificObjects.OuterSingleton, Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameOverTriggerBySpecificObjects.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<AGameOverTriggerBySpecificObjects>()
	{
		return AGameOverTriggerBySpecificObjects::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameOverTriggerBySpecificObjects);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_GameOverTriggerBySpecificObjects_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_GameOverTriggerBySpecificObjects_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameOverTriggerBySpecificObjects, AGameOverTriggerBySpecificObjects::StaticClass, TEXT("AGameOverTriggerBySpecificObjects"), &Z_Registration_Info_UClass_AGameOverTriggerBySpecificObjects, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameOverTriggerBySpecificObjects), 379322644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_GameOverTriggerBySpecificObjects_h_2026858879(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_GameOverTriggerBySpecificObjects_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_GameOverTriggerBySpecificObjects_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
