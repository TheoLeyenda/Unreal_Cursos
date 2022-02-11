// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/DestroyObjectsByTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestroyObjectsByTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADestroyObjectsByTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADestroyObjectsByTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ADestroyObjectsByTrigger::StaticRegisterNativesADestroyObjectsByTrigger()
	{
	}
	UClass* Z_Construct_UClass_ADestroyObjectsByTrigger_NoRegister()
	{
		return ADestroyObjectsByTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ADestroyObjectsByTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorsDestroy_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorsDestroy_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorsDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOtherActor_MetaData[];
#endif
		static void NewProp_bDestroyOtherActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DestroyObjectsByTrigger.h" },
		{ "ModuleRelativePath", "Public/DestroyObjectsByTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_ActorsDestroy_Inner = { "ActorsDestroy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_ActorsDestroy_MetaData[] = {
		{ "Category", "DestroyObjectsByTrigger" },
		{ "ModuleRelativePath", "Public/DestroyObjectsByTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_ActorsDestroy = { "ActorsDestroy", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestroyObjectsByTrigger, ActorsDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_ActorsDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_ActorsDestroy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_bDestroyOtherActor_MetaData[] = {
		{ "Category", "DestroyObjectsByTrigger" },
		{ "ModuleRelativePath", "Public/DestroyObjectsByTrigger.h" },
	};
#endif
	void Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_bDestroyOtherActor_SetBit(void* Obj)
	{
		((ADestroyObjectsByTrigger*)Obj)->bDestroyOtherActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_bDestroyOtherActor = { "bDestroyOtherActor", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADestroyObjectsByTrigger), &Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_bDestroyOtherActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_bDestroyOtherActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_bDestroyOtherActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_ActorsDestroy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_ActorsDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::NewProp_bDestroyOtherActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestroyObjectsByTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::ClassParams = {
		&ADestroyObjectsByTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADestroyObjectsByTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADestroyObjectsByTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADestroyObjectsByTrigger, 1573516212);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ADestroyObjectsByTrigger>()
	{
		return ADestroyObjectsByTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADestroyObjectsByTrigger(Z_Construct_UClass_ADestroyObjectsByTrigger, &ADestroyObjectsByTrigger::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ADestroyObjectsByTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADestroyObjectsByTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
