// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/InteractDoorTriggerMass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractDoorTriggerMass() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractDoorTriggerMass_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractDoorTriggerMass();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractDoorTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void AInteractDoorTriggerMass::StaticRegisterNativesAInteractDoorTriggerMass()
	{
	}
	UClass* Z_Construct_UClass_AInteractDoorTriggerMass_NoRegister()
	{
		return AInteractDoorTriggerMass::StaticClass();
	}
	struct Z_Construct_UClass_AInteractDoorTriggerMass_Statics
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
	UObject* (*const Z_Construct_UClass_AInteractDoorTriggerMass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractDoorTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractDoorTriggerMass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InteractDoorTriggerMass.h" },
		{ "ModuleRelativePath", "InteractDoorTriggerMass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractDoorTriggerMass_Statics::NewProp_MassToOpenDoor_MetaData[] = {
		{ "Category", "Interact Door Trigger Mass" },
		{ "ModuleRelativePath", "InteractDoorTriggerMass.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AInteractDoorTriggerMass_Statics::NewProp_MassToOpenDoor = { "MassToOpenDoor", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractDoorTriggerMass, MassToOpenDoor), METADATA_PARAMS(Z_Construct_UClass_AInteractDoorTriggerMass_Statics::NewProp_MassToOpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractDoorTriggerMass_Statics::NewProp_MassToOpenDoor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractDoorTriggerMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractDoorTriggerMass_Statics::NewProp_MassToOpenDoor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractDoorTriggerMass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractDoorTriggerMass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractDoorTriggerMass_Statics::ClassParams = {
		&AInteractDoorTriggerMass::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractDoorTriggerMass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractDoorTriggerMass_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractDoorTriggerMass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractDoorTriggerMass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractDoorTriggerMass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractDoorTriggerMass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractDoorTriggerMass, 299654240);
	template<> BUILDINGESCAPE_API UClass* StaticClass<AInteractDoorTriggerMass>()
	{
		return AInteractDoorTriggerMass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractDoorTriggerMass(Z_Construct_UClass_AInteractDoorTriggerMass, &AInteractDoorTriggerMass::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("AInteractDoorTriggerMass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractDoorTriggerMass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
