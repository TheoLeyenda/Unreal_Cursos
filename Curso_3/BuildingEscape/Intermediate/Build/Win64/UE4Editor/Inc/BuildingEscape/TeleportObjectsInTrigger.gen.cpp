// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/TeleportObjectsInTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleportObjectsInTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATeleportObjectsInTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATeleportObjectsInTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AObjectsInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ATeleportObjectsInTrigger::StaticRegisterNativesATeleportObjectsInTrigger()
	{
	}
	UClass* Z_Construct_UClass_ATeleportObjectsInTrigger_NoRegister()
	{
		return ATeleportObjectsInTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ATeleportObjectsInTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointsToTeleport_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointsToTeleport_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PointsToTeleport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObjectsInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TeleportObjectsInTrigger.h" },
		{ "ModuleRelativePath", "Public/TeleportObjectsInTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport_Inner = { "PointsToTeleport", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport_MetaData[] = {
		{ "Category", "TeleportObjectsInTrigger" },
		{ "ModuleRelativePath", "Public/TeleportObjectsInTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport = { "PointsToTeleport", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleportObjectsInTrigger, PointsToTeleport), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::NewProp_PointsToTeleport,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeleportObjectsInTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::ClassParams = {
		&ATeleportObjectsInTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeleportObjectsInTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeleportObjectsInTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeleportObjectsInTrigger, 3439982554);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ATeleportObjectsInTrigger>()
	{
		return ATeleportObjectsInTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeleportObjectsInTrigger(Z_Construct_UClass_ATeleportObjectsInTrigger, &ATeleportObjectsInTrigger::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ATeleportObjectsInTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeleportObjectsInTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
