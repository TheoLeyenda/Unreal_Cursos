// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/ObjetiveType/LastInteractActorObjetive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLastInteractActorObjetive() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ULastInteractActorObjetive_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ULastInteractActorObjetive();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStep();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ULastInteractActorObjetive::StaticRegisterNativesULastInteractActorObjetive()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULastInteractActorObjetive);
	UClass* Z_Construct_UClass_ULastInteractActorObjetive_NoRegister()
	{
		return ULastInteractActorObjetive::StaticClass();
	}
	struct Z_Construct_UClass_ULastInteractActorObjetive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULastInteractActorObjetive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStep,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULastInteractActorObjetive_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/ObjetiveType/LastInteractActorObjetive.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/LastInteractActorObjetive.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULastInteractActorObjetive_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "LastInteractActorObjetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/LastInteractActorObjetive.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULastInteractActorObjetive_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULastInteractActorObjetive, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULastInteractActorObjetive_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULastInteractActorObjetive_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULastInteractActorObjetive_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "LastInteractActorObjetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/ObjetiveType/LastInteractActorObjetive.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULastInteractActorObjetive_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULastInteractActorObjetive, ID), METADATA_PARAMS(Z_Construct_UClass_ULastInteractActorObjetive_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULastInteractActorObjetive_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULastInteractActorObjetive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULastInteractActorObjetive_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULastInteractActorObjetive_Statics::NewProp_ID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULastInteractActorObjetive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULastInteractActorObjetive>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULastInteractActorObjetive_Statics::ClassParams = {
		&ULastInteractActorObjetive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULastInteractActorObjetive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULastInteractActorObjetive_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULastInteractActorObjetive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULastInteractActorObjetive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULastInteractActorObjetive()
	{
		if (!Z_Registration_Info_UClass_ULastInteractActorObjetive.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULastInteractActorObjetive.OuterSingleton, Z_Construct_UClass_ULastInteractActorObjetive_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULastInteractActorObjetive.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ULastInteractActorObjetive>()
	{
		return ULastInteractActorObjetive::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULastInteractActorObjetive);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_LastInteractActorObjetive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_LastInteractActorObjetive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULastInteractActorObjetive, ULastInteractActorObjetive::StaticClass, TEXT("ULastInteractActorObjetive"), &Z_Registration_Info_UClass_ULastInteractActorObjetive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULastInteractActorObjetive), 3395838841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_LastInteractActorObjetive_h_545632448(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_LastInteractActorObjetive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_ObjetiveType_LastInteractActorObjetive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
