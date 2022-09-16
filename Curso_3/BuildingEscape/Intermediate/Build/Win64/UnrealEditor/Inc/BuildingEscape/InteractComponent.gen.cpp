// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/InteractComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractComponent() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingScapeCharacter_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UPickupComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics
	{
		struct _Script_BuildingEscape_eventOnInteract_Parms
		{
			UInteractComponent* InteractComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::NewProp_InteractComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::NewProp_InteractComponent = { "InteractComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_BuildingEscape_eventOnInteract_Parms, InteractComponent), Z_Construct_UClass_UInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::NewProp_InteractComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::NewProp_InteractComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::NewProp_InteractComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, nullptr, "OnInteract__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::_Script_BuildingEscape_eventOnInteract_Parms), Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UInteractComponent::execInteract)
	{
		P_GET_OBJECT(ABuildingScapeCharacter,Z_Param_Character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Interact(Z_Param_Character);
		P_NATIVE_END;
	}
	void UInteractComponent::StaticRegisterNativesUInteractComponent()
	{
		UClass* Class = UInteractComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Interact", &UInteractComponent::execInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractComponent_Interact_Statics
	{
		struct InteractComponent_eventInteract_Parms
		{
			ABuildingScapeCharacter* Character;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractComponent_Interact_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractComponent_eventInteract_Parms, Character), Z_Construct_UClass_ABuildingScapeCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractComponent_Interact_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractComponent_Interact_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractComponent_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractComponent_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractComponent, nullptr, "Interact", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInteractComponent_Interact_Statics::InteractComponent_eventInteract_Parms), Z_Construct_UFunction_UInteractComponent_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractComponent_Interact_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractComponent_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractComponent_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractComponent_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractComponent_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractComponent);
	UClass* Z_Construct_UClass_UInteractComponent_NoRegister()
	{
		return UInteractComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Reach_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Reach;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnInteract_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteract;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastPickupComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastPickupComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorHit_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractComponent_Interact, "Interact" }, // 2655482494
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "InteractComponent.h" },
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_Reach_MetaData[] = {
		{ "Category", "Interact Component" },
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_Reach = { "Reach", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, Reach), METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_Reach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_Reach_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_OnInteract_MetaData[] = {
		{ "Category", "InteractComponent" },
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_OnInteract = { "OnInteract", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, OnInteract), Z_Construct_UDelegateFunction_BuildingEscape_OnInteract__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_OnInteract_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_OnInteract_MetaData)) }; // 4256214093
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_PickupComponent_MetaData[] = {
		{ "Category", "Current PickUpComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_PickupComponent = { "PickupComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, PickupComponent), Z_Construct_UClass_UPickupComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_PickupComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_PickupComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_LastPickupComponent_MetaData[] = {
		{ "Category", "Current PickUpComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_LastPickupComponent = { "LastPickupComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, LastPickupComponent), Z_Construct_UClass_UPickupComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_LastPickupComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_LastPickupComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractComponent_Statics::NewProp_ActorHit_MetaData[] = {
		{ "Category", "InteractComponent" },
		{ "ModuleRelativePath", "Public/InteractComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractComponent_Statics::NewProp_ActorHit = { "ActorHit", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractComponent, ActorHit), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::NewProp_ActorHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::NewProp_ActorHit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_Reach,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_OnInteract,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_PickupComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_LastPickupComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractComponent_Statics::NewProp_ActorHit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractComponent_Statics::ClassParams = {
		&UInteractComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractComponent()
	{
		if (!Z_Registration_Info_UClass_UInteractComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractComponent.OuterSingleton, Z_Construct_UClass_UInteractComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractComponent.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UInteractComponent>()
	{
		return UInteractComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractComponent);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractComponent, UInteractComponent::StaticClass, TEXT("UInteractComponent"), &Z_Registration_Info_UClass_UInteractComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractComponent), 3257613974U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_253814671(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_InteractComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
