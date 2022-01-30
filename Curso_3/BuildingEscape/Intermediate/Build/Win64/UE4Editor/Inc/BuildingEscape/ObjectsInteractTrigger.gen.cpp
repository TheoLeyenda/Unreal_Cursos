// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/ObjectsInteractTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectsInteractTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectsInteractTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectsInteractTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AObjectsInteractTrigger::StaticRegisterNativesAObjectsInteractTrigger()
	{
	}
	UClass* Z_Construct_UClass_AObjectsInteractTrigger_NoRegister()
	{
		return AObjectsInteractTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AObjectsInteractTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectsToOverlapCheck_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsToOverlapCheck_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectsToOverlapCheck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectsInteractTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectsInteractTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ObjectsInteractTrigger.h" },
		{ "ModuleRelativePath", "Public/ObjectsInteractTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AObjectsInteractTrigger_Statics::NewProp_ObjectsToOverlapCheck_Inner = { "ObjectsToOverlapCheck", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectsInteractTrigger_Statics::NewProp_ObjectsToOverlapCheck_MetaData[] = {
		{ "Category", "ObjectsInteractTrigger" },
		{ "ModuleRelativePath", "Public/ObjectsInteractTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObjectsInteractTrigger_Statics::NewProp_ObjectsToOverlapCheck = { "ObjectsToOverlapCheck", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObjectsInteractTrigger, ObjectsToOverlapCheck), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AObjectsInteractTrigger_Statics::NewProp_ObjectsToOverlapCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectsInteractTrigger_Statics::NewProp_ObjectsToOverlapCheck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObjectsInteractTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectsInteractTrigger_Statics::NewProp_ObjectsToOverlapCheck_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObjectsInteractTrigger_Statics::NewProp_ObjectsToOverlapCheck,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectsInteractTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectsInteractTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjectsInteractTrigger_Statics::ClassParams = {
		&AObjectsInteractTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObjectsInteractTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObjectsInteractTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObjectsInteractTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectsInteractTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjectsInteractTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjectsInteractTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjectsInteractTrigger, 2098252015);
	template<> BUILDINGESCAPE_API UClass* StaticClass<AObjectsInteractTrigger>()
	{
		return AObjectsInteractTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjectsInteractTrigger(Z_Construct_UClass_AObjectsInteractTrigger, &AObjectsInteractTrigger::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("AObjectsInteractTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectsInteractTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
