// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/InteractComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractComponent() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void UInteractComponent::StaticRegisterNativesUInteractComponent()
	{
	}
	UClass* Z_Construct_UClass_UInteractComponent_NoRegister()
	{
		return UInteractComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Reach;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InteractComponent.h" },
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_Reach_MetaData[] = {
		{ "Category", "Interact Component" },
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_Reach = { "Reach", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, Reach), METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_Reach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_Reach_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_Reach,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractComponent_Statics::ClassParams = {
		&UInteractComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractComponent, 3572711614);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UInteractComponent>()
	{
		return UInteractComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractComponent(Z_Construct_UClass_UInteractComponent, &UInteractComponent::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UInteractComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif