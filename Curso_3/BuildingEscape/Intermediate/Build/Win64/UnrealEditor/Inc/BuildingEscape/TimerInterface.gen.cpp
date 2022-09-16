// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/TimerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerInterface() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTimerInterface_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTimerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void UTimerInterface::StaticRegisterNativesUTimerInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimerInterface);
	UClass* Z_Construct_UClass_UTimerInterface_NoRegister()
	{
		return UTimerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTimerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITimerInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimerInterface_Statics::ClassParams = {
		&UTimerInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTimerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimerInterface()
	{
		if (!Z_Registration_Info_UClass_UTimerInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimerInterface.OuterSingleton, Z_Construct_UClass_UTimerInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimerInterface.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTimerInterface>()
	{
		return UTimerInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimerInterface);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimerInterface, UTimerInterface::StaticClass, TEXT("UTimerInterface"), &Z_Registration_Info_UClass_UTimerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimerInterface), 931722781U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_891065810(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TimerInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
