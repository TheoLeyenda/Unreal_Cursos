// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/SelfDestructionByTimeOver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelfDestructionByTimeOver() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USelfDestructionByTimeOver_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USelfDestructionByTimeOver();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTimeEventOver();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void USelfDestructionByTimeOver::StaticRegisterNativesUSelfDestructionByTimeOver()
	{
	}
	UClass* Z_Construct_UClass_USelfDestructionByTimeOver_NoRegister()
	{
		return USelfDestructionByTimeOver::StaticClass();
	}
	struct Z_Construct_UClass_USelfDestructionByTimeOver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelfDestructionByTimeOver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimeEventOver,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelfDestructionByTimeOver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SelfDestructionByTimeOver.h" },
		{ "ModuleRelativePath", "Public/SelfDestructionByTimeOver.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelfDestructionByTimeOver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelfDestructionByTimeOver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelfDestructionByTimeOver_Statics::ClassParams = {
		&USelfDestructionByTimeOver::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USelfDestructionByTimeOver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelfDestructionByTimeOver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelfDestructionByTimeOver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelfDestructionByTimeOver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelfDestructionByTimeOver, 3637227684);
	template<> BUILDINGESCAPE_API UClass* StaticClass<USelfDestructionByTimeOver>()
	{
		return USelfDestructionByTimeOver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelfDestructionByTimeOver(Z_Construct_UClass_USelfDestructionByTimeOver, &USelfDestructionByTimeOver::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("USelfDestructionByTimeOver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelfDestructionByTimeOver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
