// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/PickupComponent.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickupComponent);
	UClass* Z_Construct_UClass_UPickupComponent_NoRegister()
	{
		return UPickupComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPickupComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickupComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PickupComponent.h" },
		{ "ModuleRelativePath", "Public/PickupComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickupComponent_Statics::NewProp_PickupItem_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PickupComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickupComponent_Statics::NewProp_PickupItem = { "PickupItem", nullptr, (EPropertyFlags)0x0012000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickupComponent, PickupItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickupComponent_Statics::NewProp_PickupItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickupComponent_Statics::NewProp_PickupItem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPickupComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickupComponent_Statics::NewProp_PickupItem,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPickupComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(UPickupComponent, IInteractInterface), false },  // 1810917348
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickupComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickupComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupComponent_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UPickupComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickupComponent.OuterSingleton, Z_Construct_UClass_UPickupComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPickupComponent.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UPickupComponent>()
	{
		return UPickupComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupComponent);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPickupComponent, UPickupComponent::StaticClass, TEXT("UPickupComponent"), &Z_Registration_Info_UClass_UPickupComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupComponent), 334220055U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_604233393(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
