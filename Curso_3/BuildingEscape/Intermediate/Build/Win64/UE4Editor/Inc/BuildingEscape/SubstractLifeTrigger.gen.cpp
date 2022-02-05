// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/SubstractLifeTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
	UClass* Z_Construct_UClass_ASubstractLifeTrigger_NoRegister()
	{
		return ASubstractLifeTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ASubstractLifeTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayEnableSubstractLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayEnableSubstractLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSubstractLife_MetaData[];
#endif
		static void NewProp_bEnableSubstractLife_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSubstractLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CountSubstractLifes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CountSubstractLifes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastActorCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastActorCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASubstractLifeTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubstractLifeTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SubstractLifeTrigger.h" },
		{ "ModuleRelativePath", "Public/SubstractLifeTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_DelayEnableSubstractLife_MetaData[] = {
		{ "Category", "SubstractLifeTrigger" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/SubstractLifeTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_DelayEnableSubstractLife = { "DelayEnableSubstractLife", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASubstractLifeTrigger, DelayEnableSubstractLife), METADATA_PARAMS(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_DelayEnableSubstractLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_DelayEnableSubstractLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife_MetaData[] = {
		{ "Category", "SubstractLifeTrigger" },
		{ "ModuleRelativePath", "Public/SubstractLifeTrigger.h" },
	};
#endif
	void Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife_SetBit(void* Obj)
	{
		((ASubstractLifeTrigger*)Obj)->bEnableSubstractLife = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife = { "bEnableSubstractLife", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASubstractLifeTrigger), &Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_CountSubstractLifes_MetaData[] = {
		{ "Category", "SubstractLifeTrigger" },
		{ "ModuleRelativePath", "Public/SubstractLifeTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_CountSubstractLifes = { "CountSubstractLifes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASubstractLifeTrigger, CountSubstractLifes), METADATA_PARAMS(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_CountSubstractLifes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_CountSubstractLifes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_LastActorCollision_MetaData[] = {
		{ "Category", "SubstractLifeTrigger" },
		{ "ModuleRelativePath", "Public/SubstractLifeTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_LastActorCollision = { "LastActorCollision", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASubstractLifeTrigger, LastActorCollision), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_LastActorCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_LastActorCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASubstractLifeTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_DelayEnableSubstractLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_bEnableSubstractLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_CountSubstractLifes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubstractLifeTrigger_Statics::NewProp_LastActorCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASubstractLifeTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASubstractLifeTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASubstractLifeTrigger_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASubstractLifeTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASubstractLifeTrigger, 2449989074);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ASubstractLifeTrigger>()
	{
		return ASubstractLifeTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASubstractLifeTrigger(Z_Construct_UClass_ASubstractLifeTrigger, &ASubstractLifeTrigger::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ASubstractLifeTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASubstractLifeTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
