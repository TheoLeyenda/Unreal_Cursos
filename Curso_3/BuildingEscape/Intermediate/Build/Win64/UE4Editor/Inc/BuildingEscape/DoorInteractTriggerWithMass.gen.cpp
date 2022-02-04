// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/DoorInteractTriggerWithMass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
	UClass* Z_Construct_UClass_ADoorInteractTriggerWithMass_NoRegister()
	{
		return ADoorInteractTriggerWithMass::StaticClass();
	}
	struct Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassToOpenDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassToOpenDoor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADoorInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DoorInteractTriggerWithMass.h" },
		{ "ModuleRelativePath", "Public/DoorInteractTriggerWithMass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::NewProp_MassToOpenDoor_MetaData[] = {
		{ "Category", "Interact Door Trigger Mass" },
		{ "ModuleRelativePath", "Public/DoorInteractTriggerWithMass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::NewProp_MassToOpenDoor = { "MassToOpenDoor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADoorInteractTriggerWithMass, MassToOpenDoor), METADATA_PARAMS(Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::NewProp_MassToOpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::NewProp_MassToOpenDoor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::NewProp_MassToOpenDoor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADoorInteractTriggerWithMass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADoorInteractTriggerWithMass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADoorInteractTriggerWithMass, 3343783384);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ADoorInteractTriggerWithMass>()
	{
		return ADoorInteractTriggerWithMass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADoorInteractTriggerWithMass(Z_Construct_UClass_ADoorInteractTriggerWithMass, &ADoorInteractTriggerWithMass::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ADoorInteractTriggerWithMass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADoorInteractTriggerWithMass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
