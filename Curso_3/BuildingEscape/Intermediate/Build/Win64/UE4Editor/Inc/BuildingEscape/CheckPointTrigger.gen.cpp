// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/CheckPointTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckPointTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACheckPointTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACheckPointTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ACheckPointTrigger::StaticRegisterNativesACheckPointTrigger()
	{
	}
	UClass* Z_Construct_UClass_ACheckPointTrigger_NoRegister()
	{
		return ACheckPointTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ACheckPointTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointToCurrentRespawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PointToCurrentRespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACheckPointTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckPointTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CheckPointTrigger.h" },
		{ "ModuleRelativePath", "Public/CheckPointTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PointToCurrentRespawn_MetaData[] = {
		{ "Category", "CheckPointTrigger" },
		{ "ModuleRelativePath", "Public/CheckPointTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PointToCurrentRespawn = { "PointToCurrentRespawn", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckPointTrigger, PointToCurrentRespawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PointToCurrentRespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PointToCurrentRespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PlayerStart_MetaData[] = {
		{ "Category", "CheckPointTrigger" },
		{ "ModuleRelativePath", "Public/CheckPointTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PlayerStart = { "PlayerStart", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckPointTrigger, PlayerStart), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PlayerStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PlayerStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckPointTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PointToCurrentRespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PlayerStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACheckPointTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckPointTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACheckPointTrigger_Statics::ClassParams = {
		&ACheckPointTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACheckPointTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPointTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACheckPointTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPointTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACheckPointTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACheckPointTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACheckPointTrigger, 3775395104);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ACheckPointTrigger>()
	{
		return ACheckPointTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACheckPointTrigger(Z_Construct_UClass_ACheckPointTrigger, &ACheckPointTrigger::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ACheckPointTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckPointTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
