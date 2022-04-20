// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/ObjetiveType/CounterObjetive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCounterObjetive() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UCounterObjetive_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UCounterObjetive();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStep();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStep_NoRegister();
// End Cross Module References
	void UCounterObjetive::StaticRegisterNativesUCounterObjetive()
	{
	}
	UClass* Z_Construct_UClass_UCounterObjetive_NoRegister()
	{
		return UCounterObjetive::StaticClass();
	}
	struct Z_Construct_UClass_UCounterObjetive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StepsToProgress_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepsToProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StepsToProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentProgressToObjetive_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentProgressToObjetive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetToObjective_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetToObjective;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCounterObjetive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStep,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCounterObjetive_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/ObjetiveType/CounterObjetive.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/CounterObjetive.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCounterObjetive_Statics::NewProp_StepsToProgress_Inner = { "StepsToProgress", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStep_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCounterObjetive_Statics::NewProp_StepsToProgress_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/CounterObjetive.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCounterObjetive_Statics::NewProp_StepsToProgress = { "StepsToProgress", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCounterObjetive, StepsToProgress), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCounterObjetive_Statics::NewProp_StepsToProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCounterObjetive_Statics::NewProp_StepsToProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCounterObjetive_Statics::NewProp_CurrentProgressToObjetive_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/CounterObjetive.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCounterObjetive_Statics::NewProp_CurrentProgressToObjetive = { "CurrentProgressToObjetive", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCounterObjetive, CurrentProgressToObjetive), METADATA_PARAMS(Z_Construct_UClass_UCounterObjetive_Statics::NewProp_CurrentProgressToObjetive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCounterObjetive_Statics::NewProp_CurrentProgressToObjetive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCounterObjetive_Statics::NewProp_TargetToObjective_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/CounterObjetive.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCounterObjetive_Statics::NewProp_TargetToObjective = { "TargetToObjective", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCounterObjetive, TargetToObjective), METADATA_PARAMS(Z_Construct_UClass_UCounterObjetive_Statics::NewProp_TargetToObjective_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCounterObjetive_Statics::NewProp_TargetToObjective_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCounterObjetive_Statics::NewProp_TextProgress_MetaData[] = {
		{ "Category", "CounterObjetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/CounterObjetive.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCounterObjetive_Statics::NewProp_TextProgress = { "TextProgress", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCounterObjetive, TextProgress), METADATA_PARAMS(Z_Construct_UClass_UCounterObjetive_Statics::NewProp_TextProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCounterObjetive_Statics::NewProp_TextProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCounterObjetive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCounterObjetive_Statics::NewProp_StepsToProgress_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCounterObjetive_Statics::NewProp_StepsToProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCounterObjetive_Statics::NewProp_CurrentProgressToObjetive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCounterObjetive_Statics::NewProp_TargetToObjective,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCounterObjetive_Statics::NewProp_TextProgress,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCounterObjetive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCounterObjetive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCounterObjetive_Statics::ClassParams = {
		&UCounterObjetive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCounterObjetive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCounterObjetive_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCounterObjetive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCounterObjetive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCounterObjetive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCounterObjetive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCounterObjetive, 700848520);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UCounterObjetive>()
	{
		return UCounterObjetive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCounterObjetive(Z_Construct_UClass_UCounterObjetive, &UCounterObjetive::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UCounterObjetive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCounterObjetive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
