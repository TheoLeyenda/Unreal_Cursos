// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/TrapInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrapInterface() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTrapInterface_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTrapInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void UTrapInterface::StaticRegisterNativesUTrapInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTrapInterface);
	UClass* Z_Construct_UClass_UTrapInterface_NoRegister()
	{
		return UTrapInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTrapInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrapInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrapInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrapInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrapInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITrapInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrapInterface_Statics::ClassParams = {
		&UTrapInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTrapInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrapInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrapInterface()
	{
		if (!Z_Registration_Info_UClass_UTrapInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrapInterface.OuterSingleton, Z_Construct_UClass_UTrapInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTrapInterface.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTrapInterface>()
	{
		return UTrapInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrapInterface);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTrapInterface, UTrapInterface::StaticClass, TEXT("UTrapInterface"), &Z_Registration_Info_UClass_UTrapInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrapInterface), 1866663402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_263808100(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TrapInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
