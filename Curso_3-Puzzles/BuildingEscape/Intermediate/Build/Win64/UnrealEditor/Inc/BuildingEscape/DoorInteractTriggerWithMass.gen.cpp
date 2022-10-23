// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/DoorInteractTriggerWithMass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorInteractTriggerWithMass() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoorInteractTriggerWithMass_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoorInteractTriggerWithMass();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoorInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void ADoorInteractTriggerWithMass::StaticRegisterNativesADoorInteractTriggerWithMass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorInteractTriggerWithMass);
	UClass* Z_Construct_UClass_ADoorInteractTriggerWithMass_NoRegister()
	{
		return ADoorInteractTriggerWithMass::StaticClass();
	}
	struct Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MassToOpenDoor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MassToOpenDoor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADoorInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DoorInteractTriggerWithMass.h" },
		{ "ModuleRelativePath", "Public/DoorInteractTriggerWithMass.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::NewProp_MassToOpenDoor_MetaData[] = {
		{ "Category", "Interact Door Trigger Mass" },
		{ "ModuleRelativePath", "Public/DoorInteractTriggerWithMass.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::NewProp_MassToOpenDoor = { "MassToOpenDoor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorInteractTriggerWithMass, MassToOpenDoor), METADATA_PARAMS(Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::NewProp_MassToOpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::NewProp_MassToOpenDoor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::NewProp_MassToOpenDoor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorInteractTriggerWithMass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::ClassParams = {
		&ADoorInteractTriggerWithMass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorInteractTriggerWithMass()
	{
		if (!Z_Registration_Info_UClass_ADoorInteractTriggerWithMass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorInteractTriggerWithMass.OuterSingleton, Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoorInteractTriggerWithMass.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ADoorInteractTriggerWithMass>()
	{
		return ADoorInteractTriggerWithMass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorInteractTriggerWithMass);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTriggerWithMass_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTriggerWithMass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoorInteractTriggerWithMass, ADoorInteractTriggerWithMass::StaticClass, TEXT("ADoorInteractTriggerWithMass"), &Z_Registration_Info_UClass_ADoorInteractTriggerWithMass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorInteractTriggerWithMass), 4086908626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTriggerWithMass_h_2341811810(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTriggerWithMass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTriggerWithMass_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS