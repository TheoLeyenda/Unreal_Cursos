// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/DoorInteractTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorInteractTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoorInteractTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoorInteractTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoor_NoRegister();
// End Cross Module References
	void ADoorInteractTrigger::StaticRegisterNativesADoorInteractTrigger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADoorInteractTrigger);
	UClass* Z_Construct_UClass_ADoorInteractTrigger_NoRegister()
	{
		return ADoorInteractTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ADoorInteractTrigger_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeToCloseDoor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeToCloseDoor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorInteractTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorInteractTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DoorInteractTrigger.h" },
		{ "ModuleRelativePath", "Public/DoorInteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADoorInteractTrigger_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorInteractTrigger_Statics::NewProp_Doors_MetaData[] = {
		{ "Category", "Interact Door Trigger" },
		{ "ModuleRelativePath", "Public/DoorInteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADoorInteractTrigger_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorInteractTrigger, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADoorInteractTrigger_Statics::NewProp_Doors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorInteractTrigger_Statics::NewProp_Doors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorInteractTrigger_Statics::NewProp_TimeToCloseDoor_MetaData[] = {
		{ "Category", "Interact Door Trigger" },
		{ "ModuleRelativePath", "Public/DoorInteractTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoorInteractTrigger_Statics::NewProp_TimeToCloseDoor = { "TimeToCloseDoor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorInteractTrigger, TimeToCloseDoor), METADATA_PARAMS(Z_Construct_UClass_ADoorInteractTrigger_Statics::NewProp_TimeToCloseDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorInteractTrigger_Statics::NewProp_TimeToCloseDoor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorInteractTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorInteractTrigger_Statics::NewProp_Doors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorInteractTrigger_Statics::NewProp_Doors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorInteractTrigger_Statics::NewProp_TimeToCloseDoor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorInteractTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorInteractTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADoorInteractTrigger_Statics::ClassParams = {
		&ADoorInteractTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADoorInteractTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADoorInteractTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADoorInteractTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorInteractTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADoorInteractTrigger()
	{
		if (!Z_Registration_Info_UClass_ADoorInteractTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADoorInteractTrigger.OuterSingleton, Z_Construct_UClass_ADoorInteractTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADoorInteractTrigger.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ADoorInteractTrigger>()
	{
		return ADoorInteractTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorInteractTrigger);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADoorInteractTrigger, ADoorInteractTrigger::StaticClass, TEXT("ADoorInteractTrigger"), &Z_Registration_Info_UClass_ADoorInteractTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADoorInteractTrigger), 875940703U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_1019285793(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DoorInteractTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
