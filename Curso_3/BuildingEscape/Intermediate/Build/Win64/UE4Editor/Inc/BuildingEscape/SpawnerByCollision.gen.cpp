// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/SpawnerByCollision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnerByCollision() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ASpawnerByCollision_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ASpawnerByCollision();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void ASpawnerByCollision::StaticRegisterNativesASpawnerByCollision()
	{
	}
	UClass* Z_Construct_UClass_ASpawnerByCollision_NoRegister()
	{
		return ASpawnerByCollision::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnerByCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnerByCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerByCollision_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnerByCollision.h" },
		{ "ModuleRelativePath", "Public/SpawnerByCollision.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnerByCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnerByCollision>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnerByCollision_Statics::ClassParams = {
		&ASpawnerByCollision::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpawnerByCollision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerByCollision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnerByCollision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnerByCollision_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnerByCollision, 254967096);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ASpawnerByCollision>()
	{
		return ASpawnerByCollision::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnerByCollision(Z_Construct_UClass_ASpawnerByCollision, &ASpawnerByCollision::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ASpawnerByCollision"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnerByCollision);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
