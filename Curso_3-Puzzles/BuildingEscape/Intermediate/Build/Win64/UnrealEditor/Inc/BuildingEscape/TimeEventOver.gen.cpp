// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/TimeEventOver.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimeEventOver);
	UClass* Z_Construct_UClass_UTimeEventOver_NoRegister()
	{
		return UTimeEventOver::StaticClass();
	}
	struct Z_Construct_UClass_UTimeEventOver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayToEvent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayToEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTimeEventOver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeEventOver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TimeEventOver.h" },
		{ "ModuleRelativePath", "Public/TimeEventOver.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTimeEventOver_Statics::NewProp_DelayToEvent_MetaData[] = {
		{ "Category", "TimeEventOver" },
		{ "ModuleRelativePath", "Public/TimeEventOver.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimeEventOver_Statics::NewProp_DelayToEvent = { "DelayToEvent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTimeEventOver, DelayToEvent), METADATA_PARAMS(Z_Construct_UClass_UTimeEventOver_Statics::NewProp_DelayToEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTimeEventOver_Statics::NewProp_DelayToEvent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeEventOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeEventOver_Statics::NewProp_DelayToEvent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTimeEventOver_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTimerInterface_NoRegister, (int32)VTABLE_OFFSET(UTimeEventOver, ITimerInterface), false },  // 931722781
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTimeEventOver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeEventOver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimeEventOver_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UTimeEventOver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimeEventOver.OuterSingleton, Z_Construct_UClass_UTimeEventOver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTimeEventOver.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UTimeEventOver>()
	{
		return UTimeEventOver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeEventOver);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TimeEventOver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TimeEventOver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTimeEventOver, UTimeEventOver::StaticClass, TEXT("UTimeEventOver"), &Z_Registration_Info_UClass_UTimeEventOver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimeEventOver), 535372159U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TimeEventOver_h_779730357(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TimeEventOver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_TimeEventOver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
