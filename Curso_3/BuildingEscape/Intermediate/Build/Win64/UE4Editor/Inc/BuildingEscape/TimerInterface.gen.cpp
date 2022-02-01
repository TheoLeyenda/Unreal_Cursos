// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/TimerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimerInterface() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTimerInterface_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTimerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void UTimerInterface::StaticRegisterNativesUTimerInterface()
	{
	}
	UClass* Z_Construct_UClass_UTimerInterface_NoRegister()
	{
		return UTimerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTimerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TimerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITimerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimerInterface_Statics::ClassParams = {
		&UTimerInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTimerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimerInterface, 3307027996);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTimerInterface>()
	{
		return UTimerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimerInterface(Z_Construct_UClass_UTimerInterface, &UTimerInterface::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UTimerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimerInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
