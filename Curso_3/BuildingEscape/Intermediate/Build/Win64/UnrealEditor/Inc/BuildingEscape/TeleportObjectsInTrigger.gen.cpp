// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/TeleportObjectsInTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleportObjectsInTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATeleportObjectsInTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATeleportObjectsInTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectsInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ATeleportObjectsInTrigger::StaticRegisterNativesATeleportObjectsInTrigger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeleportObjectsInTrigger);
	UClass* Z_Construct_UClass_ATeleportObjectsInTrigger_NoRegister()
	{
		return ATeleportObjectsInTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ATeleportObjectsInTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointsToTeleport_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointsToTeleport_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointsToTeleport;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectsInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TeleportObjectsInTrigger.h" },
		{ "ModuleRelativePath", "Public/TeleportObjectsInTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport_Inner = { "PointsToTeleport", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport_MetaData[] = {
		{ "Category", "TeleportObjectsInTrigger" },
		{ "ModuleRelativePath", "Public/TeleportObjectsInTrigger.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport = { "PointsToTeleport", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleportObjectsInTrigger, PointsToTeleport), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeleportObjectsInTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::ClassParams = {
		&ATeleportObjectsInTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeleportObjectsInTrigger()
	{
		if (!Z_Registration_Info_UClass_ATeleportObjectsInTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeleportObjectsInTrigger.OuterSingleton, Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeleportObjectsInTrigger.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ATeleportObjectsInTrigger>()
	{
		return ATeleportObjectsInTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeleportObjectsInTrigger);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TeleportObjectsInTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TeleportObjectsInTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeleportObjectsInTrigger, ATeleportObjectsInTrigger::StaticClass, TEXT("ATeleportObjectsInTrigger"), &Z_Registration_Info_UClass_ATeleportObjectsInTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeleportObjectsInTrigger), 2423731760U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TeleportObjectsInTrigger_h_3851908581(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TeleportObjectsInTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TeleportObjectsInTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
