// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/InteractTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UEnum* Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	static UEnum* ELastStateObjectOverlap_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ELastStateObjectOverlap"));
		}
		return Singleton;
	}
	template<> BUILDINGESCAPE_API UEnum* StaticEnum<ELastStateObjectOverlap>()
	{
		return ELastStateObjectOverlap_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELastStateObjectOverlap(ELastStateObjectOverlap_StaticEnum, TEXT("/Script/BuildingEscape"), TEXT("ELastStateObjectOverlap"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap_Hash() { return 2317326143U; }
	UEnum* Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELastStateObjectOverlap"), 0, Get_Z_Construct_UEnum_BuildingEscape_ELastStateObjectOverlap_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELastStateObjectOverlap::BeginOverlap", (int64)ELastStateObjectOverlap::BeginOverlap },
				{ "ELastStateObjectOverlap::EndOverlap", (int64)ELastStateObjectOverlap::EndOverlap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BeginOverlap.Name", "ELastStateObjectOverlap::BeginOverlap" },
				{ "EndOverlap.Name", "ELastStateObjectOverlap::EndOverlap" },
				{ "ModuleRelativePath", "Public/InteractTrigger.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape,
				nullptr,
				"ELastStateObjectOverlap",
				"ELastStateObjectOverlap",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AInteractTrigger::StaticRegisterNativesAInteractTrigger()
	{
	}
	UClass* Z_Construct_UClass_AInteractTrigger_NoRegister()
	{
		return AInteractTrigger::StaticClass();
	}
	struct Z_Construct_UClass_AInteractTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxTriggerVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxTriggerVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractTrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractTrigger.h" },
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractTrigger_Statics::NewProp_BoxTriggerVolume_MetaData[] = {
		{ "Category", "Interact Trigger" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractTrigger_Statics::NewProp_BoxTriggerVolume = { "BoxTriggerVolume", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractTrigger, BoxTriggerVolume), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractTrigger_Statics::NewProp_BoxTriggerVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractTrigger_Statics::NewProp_BoxTriggerVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractTrigger_Statics::NewProp_BoxTriggerVolume,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractTrigger_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractTrigger, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractTrigger_Statics::ClassParams = {
		&AInteractTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractTrigger_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractTrigger_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractTrigger, 3101126872);
	template<> BUILDINGESCAPE_API UClass* StaticClass<AInteractTrigger>()
	{
		return AInteractTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractTrigger(Z_Construct_UClass_AInteractTrigger, &AInteractTrigger::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("AInteractTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
