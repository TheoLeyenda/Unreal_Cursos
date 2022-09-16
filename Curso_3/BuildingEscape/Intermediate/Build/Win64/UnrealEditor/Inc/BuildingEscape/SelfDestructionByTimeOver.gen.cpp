// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/SelfDestructionByTimeOver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelfDestructionByTimeOver() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USelfDestructionByTimeOver_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USelfDestructionByTimeOver();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTimeEventOver();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void USelfDestructionByTimeOver::StaticRegisterNativesUSelfDestructionByTimeOver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelfDestructionByTimeOver);
	UClass* Z_Construct_UClass_USelfDestructionByTimeOver_NoRegister()
	{
		return USelfDestructionByTimeOver::StaticClass();
	}
	struct Z_Construct_UClass_USelfDestructionByTimeOver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelfDestructionByTimeOver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimeEventOver,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfDestructionByTimeOver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SelfDestructionByTimeOver.h" },
		{ "ModuleRelativePath", "Public/SelfDestructionByTimeOver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelfDestructionByTimeOver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelfDestructionByTimeOver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USelfDestructionByTimeOver_Statics::ClassParams = {
		&USelfDestructionByTimeOver::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USelfDestructionByTimeOver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelfDestructionByTimeOver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelfDestructionByTimeOver()
	{
		if (!Z_Registration_Info_UClass_USelfDestructionByTimeOver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelfDestructionByTimeOver.OuterSingleton, Z_Construct_UClass_USelfDestructionByTimeOver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USelfDestructionByTimeOver.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<USelfDestructionByTimeOver>()
	{
		return USelfDestructionByTimeOver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelfDestructionByTimeOver);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SelfDestructionByTimeOver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SelfDestructionByTimeOver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USelfDestructionByTimeOver, USelfDestructionByTimeOver::StaticClass, TEXT("USelfDestructionByTimeOver"), &Z_Registration_Info_UClass_USelfDestructionByTimeOver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelfDestructionByTimeOver), 1664336645U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SelfDestructionByTimeOver_h_2517286820(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SelfDestructionByTimeOver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_SelfDestructionByTimeOver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
