// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/DoorInteractTriggerWithActors.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorInteractTriggerWithActors() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoorInteractTriggerWithActors_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoorInteractTriggerWithActors();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoorInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ADoorInteractTriggerWithActors::StaticRegisterNativesADoorInteractTriggerWithActors()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorInteractTriggerWithActors);
	UClass* Z_Construct_UClass_ADoorInteractTriggerWithActors_NoRegister()
	{
		return ADoorInteractTriggerWithActors::StaticClass();
	}
	struct Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorsTriggerClass_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsTriggerClass_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsTriggerClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADoorInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DoorInteractTriggerWithActors.h" },
		{ "ModuleRelativePath", "Public/DoorInteractTriggerWithActors.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::NewProp_ActorsTriggerClass_Inner = { "ActorsTriggerClass", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::NewProp_ActorsTriggerClass_MetaData[] = {
		{ "Category", "Interact Door Trigger Actor" },
		{ "ModuleRelativePath", "Public/DoorInteractTriggerWithActors.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::NewProp_ActorsTriggerClass = { "ActorsTriggerClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorInteractTriggerWithActors, ActorsTriggerClass), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::NewProp_ActorsTriggerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::NewProp_ActorsTriggerClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::NewProp_ActorsTriggerClass_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::NewProp_ActorsTriggerClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorInteractTriggerWithActors>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::ClassParams = {
		&ADoorInteractTriggerWithActors::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorInteractTriggerWithActors()
	{
		if (!Z_Registration_Info_UClass_ADoorInteractTriggerWithActors.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorInteractTriggerWithActors.OuterSingleton, Z_Construct_UClass_ADoorInteractTriggerWithActors_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoorInteractTriggerWithActors.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ADoorInteractTriggerWithActors>()
	{
		return ADoorInteractTriggerWithActors::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorInteractTriggerWithActors);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTriggerWithActors_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTriggerWithActors_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoorInteractTriggerWithActors, ADoorInteractTriggerWithActors::StaticClass, TEXT("ADoorInteractTriggerWithActors"), &Z_Registration_Info_UClass_ADoorInteractTriggerWithActors, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorInteractTriggerWithActors), 2782323906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTriggerWithActors_h_666707431(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTriggerWithActors_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTriggerWithActors_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
