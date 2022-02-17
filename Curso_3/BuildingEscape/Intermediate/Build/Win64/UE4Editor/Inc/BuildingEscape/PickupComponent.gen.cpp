// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/PickupComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupComponent() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UPickupComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UPickupComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	void UPickupComponent::StaticRegisterNativesUPickupComponent()
	{
	}
	UClass* Z_Construct_UClass_UPickupComponent_NoRegister()
	{
		return UPickupComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPickupComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupItem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickupComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PickupComponent.h" },
		{ "ModuleRelativePath", "Public/PickupComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupComponent_Statics::NewProp_PickupItem_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickupComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickupComponent_Statics::NewProp_PickupItem = { "PickupItem", nullptr, (EPropertyFlags)0x0012000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickupComponent, PickupItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickupComponent_Statics::NewProp_PickupItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupComponent_Statics::NewProp_PickupItem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPickupComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupComponent_Statics::NewProp_PickupItem,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPickupComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(UPickupComponent, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickupComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPickupComponent_Statics::ClassParams = {
		&UPickupComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPickupComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPickupComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPickupComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickupComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPickupComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPickupComponent, 3416027700);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UPickupComponent>()
	{
		return UPickupComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPickupComponent(Z_Construct_UClass_UPickupComponent, &UPickupComponent::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UPickupComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
