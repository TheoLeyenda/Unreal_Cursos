// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/Pickup.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickup() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_APickup_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_APickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestActorComponentID_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	void APickup::StaticRegisterNativesAPickup()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APickup);
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	struct Z_Construct_UClass_APickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestActorComponentID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestActorComponentID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableUseMessagePickup_MetaData[];
#endif
		static void NewProp_bEnableUseMessagePickup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableUseMessagePickup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRotatePickup_MetaData[];
#endif
		static void NewProp_bUseRotatePickup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRotatePickup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpeedRotatePickup_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedRotatePickup;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MyText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupItem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pickup.h" },
		{ "ModuleRelativePath", "Public/Pickup.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_QuestActorComponentID_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_QuestActorComponentID = { "QuestActorComponentID", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, QuestActorComponentID), Z_Construct_UClass_UQuestActorComponentID_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_QuestActorComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_QuestActorComponentID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_bEnableUseMessagePickup_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Pickup.h" },
	};
#endif
	void Z_Construct_UClass_APickup_Statics::NewProp_bEnableUseMessagePickup_SetBit(void* Obj)
	{
		((APickup*)Obj)->bEnableUseMessagePickup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_bEnableUseMessagePickup = { "bEnableUseMessagePickup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APickup), &Z_Construct_UClass_APickup_Statics::NewProp_bEnableUseMessagePickup_SetBit, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_bEnableUseMessagePickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_bEnableUseMessagePickup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_bUseRotatePickup_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Pickup.h" },
	};
#endif
	void Z_Construct_UClass_APickup_Statics::NewProp_bUseRotatePickup_SetBit(void* Obj)
	{
		((APickup*)Obj)->bUseRotatePickup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_bUseRotatePickup = { "bUseRotatePickup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APickup), &Z_Construct_UClass_APickup_Statics::NewProp_bUseRotatePickup_SetBit, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_bUseRotatePickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_bUseRotatePickup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_SpeedRotatePickup_MetaData[] = {
		{ "Category", "Pickup" },
		{ "ModuleRelativePath", "Public/Pickup.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_SpeedRotatePickup = { "SpeedRotatePickup", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, SpeedRotatePickup), METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_SpeedRotatePickup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_SpeedRotatePickup_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_MyText_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_MyText = { "MyText", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, MyText), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_MyText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_MyText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APickup_Statics::NewProp_PickupItem_MetaData[] = {
		{ "Category", "Pickup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pickup.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APickup_Statics::NewProp_PickupItem = { "PickupItem", nullptr, (EPropertyFlags)0x0012000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APickup, PickupItem), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::NewProp_PickupItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::NewProp_PickupItem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APickup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_QuestActorComponentID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_bEnableUseMessagePickup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_bUseRotatePickup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_SpeedRotatePickup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_MyText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APickup_Statics::NewProp_PickupItem,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APickup_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(APickup, IInteractInterface), false },  // 1810917348
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APickup>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APickup_Statics::ClassParams = {
		&APickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APickup_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APickup()
	{
		if (!Z_Registration_Info_UClass_APickup.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APickup.OuterSingleton, Z_Construct_UClass_APickup_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APickup.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<APickup>()
	{
		return APickup::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Pickup_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Pickup_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APickup, APickup::StaticClass, TEXT("APickup"), &Z_Registration_Info_UClass_APickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APickup), 1707032331U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Pickup_h_3743854391(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Pickup_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Pickup_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
