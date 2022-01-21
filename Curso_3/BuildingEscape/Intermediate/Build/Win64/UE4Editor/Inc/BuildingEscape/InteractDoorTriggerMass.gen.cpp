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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractDoorTriggerMass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractDoorTriggerMass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractDoorTriggerMass_Statics::ClassParams = {
		&AInteractDoorTriggerMass::StaticClass,
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
	IMPLEMENT_CLASS(AInteractDoorTriggerMass, 1837721087);
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
