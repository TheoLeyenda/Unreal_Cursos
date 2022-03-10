// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/ObjetiveType/FatnessObjetive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFatnessObjetive() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UFatnessObjetive_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UFatnessObjetive();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStep();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void UFatnessObjetive::StaticRegisterNativesUFatnessObjetive()
	{
	}
	UClass* Z_Construct_UClass_UFatnessObjetive_NoRegister()
	{
		return UFatnessObjetive::StaticClass();
	}
	struct Z_Construct_UClass_UFatnessObjetive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetFatness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetFatness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextProgressFatness_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TextProgressFatness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFatnessObjetive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStep,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFatnessObjetive_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/ObjetiveType/FatnessObjetive.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/FatnessObjetive.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFatnessObjetive_Statics::NewProp_TargetFatness_MetaData[] = {
		{ "Category", "FatnessObjetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/FatnessObjetive.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFatnessObjetive_Statics::NewProp_TargetFatness = { "TargetFatness", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFatnessObjetive, TargetFatness), METADATA_PARAMS(Z_Construct_UClass_UFatnessObjetive_Statics::NewProp_TargetFatness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFatnessObjetive_Statics::NewProp_TargetFatness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFatnessObjetive_Statics::NewProp_TextProgressFatness_MetaData[] = {
		{ "Category", "FatnessObjetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/FatnessObjetive.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFatnessObjetive_Statics::NewProp_TextProgressFatness = { "TextProgressFatness", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFatnessObjetive, TextProgressFatness), METADATA_PARAMS(Z_Construct_UClass_UFatnessObjetive_Statics::NewProp_TextProgressFatness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFatnessObjetive_Statics::NewProp_TextProgressFatness_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFatnessObjetive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFatnessObjetive_Statics::NewProp_TargetFatness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFatnessObjetive_Statics::NewProp_TextProgressFatness,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFatnessObjetive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFatnessObjetive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFatnessObjetive_Statics::ClassParams = {
		&UFatnessObjetive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFatnessObjetive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFatnessObjetive_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFatnessObjetive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFatnessObjetive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFatnessObjetive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFatnessObjetive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFatnessObjetive, 3019100720);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UFatnessObjetive>()
	{
		return UFatnessObjetive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFatnessObjetive(Z_Construct_UClass_UFatnessObjetive, &UFatnessObjetive::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UFatnessObjetive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFatnessObjetive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
