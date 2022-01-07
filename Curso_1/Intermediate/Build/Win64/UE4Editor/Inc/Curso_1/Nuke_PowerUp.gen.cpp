// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_1/Nuke_PowerUp.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNuke_PowerUp() {}
// Cross Module References
	CURSO_1_API UClass* Z_Construct_UClass_ANuke_PowerUp_NoRegister();
	CURSO_1_API UClass* Z_Construct_UClass_ANuke_PowerUp();
	CURSO_1_API UClass* Z_Construct_UClass_APowerUp();
	UPackage* Z_Construct_UPackage__Script_Curso_1();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CURSO_1_API UClass* Z_Construct_UClass_AEnemy_Cohete_NoRegister();
// End Cross Module References
	void ANuke_PowerUp::StaticRegisterNativesANuke_PowerUp()
	{
	}
	UClass* Z_Construct_UClass_ANuke_PowerUp_NoRegister()
	{
		return ANuke_PowerUp::StaticClass();
	}
	struct Z_Construct_UClass_ANuke_PowerUp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorDestroy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANuke_PowerUp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APowerUp,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuke_PowerUp_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nuke_PowerUp.h" },
		{ "ModuleRelativePath", "Nuke_PowerUp.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuke_PowerUp_Statics::NewProp_ActorDestroy_MetaData[] = {
		{ "Category", "Nuke_PowerUp" },
		{ "ModuleRelativePath", "Nuke_PowerUp.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANuke_PowerUp_Statics::NewProp_ActorDestroy = { "ActorDestroy", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANuke_PowerUp, ActorDestroy), Z_Construct_UClass_AEnemy_Cohete_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANuke_PowerUp_Statics::NewProp_ActorDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANuke_PowerUp_Statics::NewProp_ActorDestroy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANuke_PowerUp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANuke_PowerUp_Statics::NewProp_ActorDestroy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANuke_PowerUp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANuke_PowerUp>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANuke_PowerUp_Statics::ClassParams = {
		&ANuke_PowerUp::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANuke_PowerUp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANuke_PowerUp_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANuke_PowerUp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANuke_PowerUp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANuke_PowerUp()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANuke_PowerUp_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANuke_PowerUp, 2569945975);
	template<> CURSO_1_API UClass* StaticClass<ANuke_PowerUp>()
	{
		return ANuke_PowerUp::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANuke_PowerUp(Z_Construct_UClass_ANuke_PowerUp, &ANuke_PowerUp::StaticClass, TEXT("/Script/Curso_1"), TEXT("ANuke_PowerUp"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANuke_PowerUp);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
