// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/SubstractLifeTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubstractLifeTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ASubstractLifeTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ASubstractLifeTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ASubstractLifeTrigger::StaticRegisterNativesASubstractLifeTrigger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASubstractLifeTrigger);
	UClass* Z_Construct_UClass_ASubstractLifeTrigger_NoRegister()
	{
		return ASubstractLifeTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ASubstractLifeTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayEnableSubstractLife_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayEnableSubstractLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubstractLife_MetaData[];
#endif
		static void NewProp_bEnableSubstractLife_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubstractLife;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountSubstractLifes_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CountSubstractLifes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastActorCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastActorCollision;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASubstractLifeTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubstractLifeTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SubstractLifeTrigger.h" },
		{ "ModuleRelativePath", "Public/SubstractLifeTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_DelayEnableSubstractLife_MetaData[] = {
		{ "Category", "SubstractLifeTrigger" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/SubstractLifeTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_DelayEnableSubstractLife = { "DelayEnableSubstractLife", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASubstractLifeTrigger, DelayEnableSubstractLife), METADATA_PARAMS(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_DelayEnableSubstractLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_DelayEnableSubstractLife_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife_MetaData[] = {
		{ "Category", "SubstractLifeTrigger" },
		{ "ModuleRelativePath", "Public/SubstractLifeTrigger.h" },
	};
#endif
	void Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife_SetBit(void* Obj)
	{
		((ASubstractLifeTrigger*)Obj)->bEnableSubstractLife = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife = { "bEnableSubstractLife", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASubstractLifeTrigger), &Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_CountSubstractLifes_MetaData[] = {
		{ "Category", "SubstractLifeTrigger" },
		{ "ModuleRelativePath", "Public/SubstractLifeTrigger.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_CountSubstractLifes = { "CountSubstractLifes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASubstractLifeTrigger, CountSubstractLifes), METADATA_PARAMS(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_CountSubstractLifes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_CountSubstractLifes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_LastActorCollision_MetaData[] = {
		{ "Category", "SubstractLifeTrigger" },
		{ "ModuleRelativePath", "Public/SubstractLifeTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_LastActorCollision = { "LastActorCollision", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASubstractLifeTrigger, LastActorCollision), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_LastActorCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_LastActorCollision_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASubstractLifeTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_DelayEnableSubstractLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_CountSubstractLifes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_LastActorCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASubstractLifeTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASubstractLifeTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASubstractLifeTrigger_Statics::ClassParams = {
		&ASubstractLifeTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASubstractLifeTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASubstractLifeTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASubstractLifeTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASubstractLifeTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASubstractLifeTrigger()
	{
		if (!Z_Registration_Info_UClass_ASubstractLifeTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASubstractLifeTrigger.OuterSingleton, Z_Construct_UClass_ASubstractLifeTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASubstractLifeTrigger.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ASubstractLifeTrigger>()
	{
		return ASubstractLifeTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASubstractLifeTrigger);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SubstractLifeTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SubstractLifeTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASubstractLifeTrigger, ASubstractLifeTrigger::StaticClass, TEXT("ASubstractLifeTrigger"), &Z_Registration_Info_UClass_ASubstractLifeTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASubstractLifeTrigger), 2000982565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SubstractLifeTrigger_h_2569843930(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SubstractLifeTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SubstractLifeTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
