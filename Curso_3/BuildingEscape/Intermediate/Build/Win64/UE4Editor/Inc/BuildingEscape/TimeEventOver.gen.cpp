// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/TimeEventOver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeEventOver() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTimeEventOver_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTimeEventOver();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UTimerInterface_NoRegister();
// End Cross Module References
	void UTimeEventOver::StaticRegisterNativesUTimeEventOver()
	{
	}
	UClass* Z_Construct_UClass_UTimeEventOver_NoRegister()
	{
		return UTimeEventOver::StaticClass();
	}
	struct Z_Construct_UClass_UTimeEventOver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayToEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayToEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeEventOver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeEventOver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TimeEventOver.h" },
		{ "ModuleRelativePath", "Public/TimeEventOver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeEventOver_Statics::NewProp_DelayToEvent_MetaData[] = {
		{ "Category", "TimeEventOver" },
		{ "ModuleRelativePath", "Public/TimeEventOver.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimeEventOver_Statics::NewProp_DelayToEvent = { "DelayToEvent", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimeEventOver, DelayToEvent), METADATA_PARAMS(Z_Construct_UClass_UTimeEventOver_Statics::NewProp_DelayToEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeEventOver_Statics::NewProp_DelayToEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeEventOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeEventOver_Statics::NewProp_DelayToEvent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTimeEventOver_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTimerInterface_NoRegister, (int32)VTABLE_OFFSET(UTimeEventOver, ITimerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeEventOver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeEventOver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTimeEventOver_Statics::ClassParams = {
		&UTimeEventOver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTimeEventOver_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTimeEventOver_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTimeEventOver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeEventOver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTimeEventOver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTimeEventOver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTimeEventOver, 2209672286);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTimeEventOver>()
	{
		return UTimeEventOver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTimeEventOver(Z_Construct_UClass_UTimeEventOver, &UTimeEventOver::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UTimeEventOver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeEventOver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
