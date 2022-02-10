// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/GameOverTriggerBySpecificObjects.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverTriggerBySpecificObjects() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AGameOverTriggerBySpecificObjects_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AGameOverTriggerBySpecificObjects();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectsInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void AGameOverTriggerBySpecificObjects::StaticRegisterNativesAGameOverTriggerBySpecificObjects()
	{
	}
	UClass* Z_Construct_UClass_AGameOverTriggerBySpecificObjects_NoRegister()
	{
		return AGameOverTriggerBySpecificObjects::StaticClass();
	}
	struct Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectsInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameOverTriggerBySpecificObjects.h" },
		{ "ModuleRelativePath", "Public/GameOverTriggerBySpecificObjects.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameOverTriggerBySpecificObjects>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::ClassParams = {
		&AGameOverTriggerBySpecificObjects::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameOverTriggerBySpecificObjects()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameOverTriggerBySpecificObjects_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameOverTriggerBySpecificObjects, 3210368192);
	template<> BUILDINGESCAPE_API UClass* StaticClass<AGameOverTriggerBySpecificObjects>()
	{
		return AGameOverTriggerBySpecificObjects::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameOverTriggerBySpecificObjects(Z_Construct_UClass_AGameOverTriggerBySpecificObjects, &AGameOverTriggerBySpecificObjects::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("AGameOverTriggerBySpecificObjects"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameOverTriggerBySpecificObjects);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
