// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/Trap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrap() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATrap_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATrap();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestActorComponentID_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTrapInterface_NoRegister();
// End Cross Module References
	void ATrap::StaticRegisterNativesATrap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrap);
	UClass* Z_Construct_UClass_ATrap_NoRegister()
	{
		return ATrap::StaticClass();
	}
	struct Z_Construct_UClass_ATrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestActorComponentID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestActorComponentID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayRestartTrap_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayRestartTrap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Trap.h" },
		{ "ModuleRelativePath", "Public/Trap.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Statics::NewProp_QuestActorComponentID_MetaData[] = {
		{ "Category", "Trap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Trap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrap_Statics::NewProp_QuestActorComponentID = { "QuestActorComponentID", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrap, QuestActorComponentID), Z_Construct_UClass_UQuestActorComponentID_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrap_Statics::NewProp_QuestActorComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrap_Statics::NewProp_QuestActorComponentID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Statics::NewProp_DelayRestartTrap_MetaData[] = {
		{ "Category", "Trap" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/Trap.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrap_Statics::NewProp_DelayRestartTrap = { "DelayRestartTrap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrap, DelayRestartTrap), METADATA_PARAMS(Z_Construct_UClass_ATrap_Statics::NewProp_DelayRestartTrap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATrap_Statics::NewProp_DelayRestartTrap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Statics::NewProp_QuestActorComponentID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Statics::NewProp_DelayRestartTrap,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATrap_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTrapInterface_NoRegister, (int32)VTABLE_OFFSET(ATrap, ITrapInterface), false },  // 1866663402
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrap_Statics::ClassParams = {
		&ATrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATrap_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATrap_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrap()
	{
		if (!Z_Registration_Info_UClass_ATrap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrap.OuterSingleton, Z_Construct_UClass_ATrap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrap.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ATrap>()
	{
		return ATrap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrap);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrap, ATrap::StaticClass, TEXT("ATrap"), &Z_Registration_Info_UClass_ATrap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrap), 2221035108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_3513369825(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Trap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
