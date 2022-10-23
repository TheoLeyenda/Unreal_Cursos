// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/PuzzleChecker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuzzleChecker() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_APuzzleChecker_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_APuzzleChecker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void APuzzleChecker::StaticRegisterNativesAPuzzleChecker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuzzleChecker);
	UClass* Z_Construct_UClass_APuzzleChecker_NoRegister()
	{
		return APuzzleChecker::StaticClass();
	}
	struct Z_Construct_UClass_APuzzleChecker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuzzleChecker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuzzleChecker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PuzzleChecker.h" },
		{ "ModuleRelativePath", "Public/PuzzleChecker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuzzleChecker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuzzleChecker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APuzzleChecker_Statics::ClassParams = {
		&APuzzleChecker::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APuzzleChecker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APuzzleChecker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuzzleChecker()
	{
		if (!Z_Registration_Info_UClass_APuzzleChecker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuzzleChecker.OuterSingleton, Z_Construct_UClass_APuzzleChecker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APuzzleChecker.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<APuzzleChecker>()
	{
		return APuzzleChecker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuzzleChecker);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PuzzleChecker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PuzzleChecker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APuzzleChecker, APuzzleChecker::StaticClass, TEXT("APuzzleChecker"), &Z_Registration_Info_UClass_APuzzleChecker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuzzleChecker), 767392916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PuzzleChecker_h_2146422914(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PuzzleChecker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PuzzleChecker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
