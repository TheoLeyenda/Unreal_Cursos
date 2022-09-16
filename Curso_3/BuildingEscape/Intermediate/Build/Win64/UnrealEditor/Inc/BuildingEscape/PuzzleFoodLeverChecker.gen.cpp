// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/PuzzleFoodLeverChecker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleFoodLeverChecker() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_APuzzleFoodLeverChecker_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_APuzzleFoodLeverChecker();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_APuzzleChecker();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectsInteractTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALeverSwitchCombinePanel_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingScapeCharacter_NoRegister();
// End Cross Module References
	void APuzzleFoodLeverChecker::StaticRegisterNativesAPuzzleFoodLeverChecker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuzzleFoodLeverChecker);
	UClass* Z_Construct_UClass_APuzzleFoodLeverChecker_NoRegister()
	{
		return APuzzleFoodLeverChecker::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleFoodLeverChecker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Doors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Doors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsInteractTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectsInteractTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeverSwitchCombinePanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeverSwitchCombinePanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildingScapeCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildingScapeCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetFoodValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetFoodValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APuzzleChecker,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PuzzleFoodLeverChecker.h" },
		{ "ModuleRelativePath", "Public/PuzzleFoodLeverChecker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_Doors_MetaData[] = {
		{ "Category", "PuzzleFoodLeverChecker" },
		{ "ModuleRelativePath", "Public/PuzzleFoodLeverChecker.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleFoodLeverChecker, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_Doors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_Doors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_ObjectsInteractTrigger_MetaData[] = {
		{ "Category", "PuzzleFoodLeverChecker" },
		{ "ModuleRelativePath", "Public/PuzzleFoodLeverChecker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_ObjectsInteractTrigger = { "ObjectsInteractTrigger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleFoodLeverChecker, ObjectsInteractTrigger), Z_Construct_UClass_AObjectsInteractTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_ObjectsInteractTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_ObjectsInteractTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_LeverSwitchCombinePanel_MetaData[] = {
		{ "Category", "PuzzleFoodLeverChecker" },
		{ "ModuleRelativePath", "Public/PuzzleFoodLeverChecker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_LeverSwitchCombinePanel = { "LeverSwitchCombinePanel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleFoodLeverChecker, LeverSwitchCombinePanel), Z_Construct_UClass_ALeverSwitchCombinePanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_LeverSwitchCombinePanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_LeverSwitchCombinePanel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_BuildingScapeCharacter_MetaData[] = {
		{ "Category", "PuzzleFoodLeverChecker" },
		{ "ModuleRelativePath", "Public/PuzzleFoodLeverChecker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_BuildingScapeCharacter = { "BuildingScapeCharacter", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleFoodLeverChecker, BuildingScapeCharacter), Z_Construct_UClass_ABuildingScapeCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_BuildingScapeCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_BuildingScapeCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_TargetFoodValue_MetaData[] = {
		{ "Category", "PuzzleFoodLeverChecker" },
		{ "ModuleRelativePath", "Public/PuzzleFoodLeverChecker.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_TargetFoodValue = { "TargetFoodValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APuzzleFoodLeverChecker, TargetFoodValue), METADATA_PARAMS(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_TargetFoodValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_TargetFoodValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_Doors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_Doors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_ObjectsInteractTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_LeverSwitchCombinePanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_BuildingScapeCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::NewProp_TargetFoodValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleFoodLeverChecker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::ClassParams = {
		&APuzzleFoodLeverChecker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleFoodLeverChecker()
	{
		if (!Z_Registration_Info_UClass_APuzzleFoodLeverChecker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuzzleFoodLeverChecker.OuterSingleton, Z_Construct_UClass_APuzzleFoodLeverChecker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APuzzleFoodLeverChecker.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<APuzzleFoodLeverChecker>()
	{
		return APuzzleFoodLeverChecker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleFoodLeverChecker);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PuzzleFoodLeverChecker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PuzzleFoodLeverChecker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APuzzleFoodLeverChecker, APuzzleFoodLeverChecker::StaticClass, TEXT("APuzzleFoodLeverChecker"), &Z_Registration_Info_UClass_APuzzleFoodLeverChecker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuzzleFoodLeverChecker), 1568738801U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PuzzleFoodLeverChecker_h_2682760474(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PuzzleFoodLeverChecker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PuzzleFoodLeverChecker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
