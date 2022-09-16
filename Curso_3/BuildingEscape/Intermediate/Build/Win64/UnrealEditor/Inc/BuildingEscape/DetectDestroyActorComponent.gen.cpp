// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/DetectDestroyActorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetectDestroyActorComponent() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UDetectDestroyActorComponent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UDetectDestroyActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics
	{
		struct DetectDestroyActorComponent_eventOnDestroyActor_Parms
		{
			TSubclassOf<AActor>  ActorDestroyedClass;
			int32 ID;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorDestroyedClass;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::NewProp_ActorDestroyedClass = { "ActorDestroyedClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetectDestroyActorComponent_eventOnDestroyActor_Parms, ActorDestroyedClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DetectDestroyActorComponent_eventOnDestroyActor_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::NewProp_ActorDestroyedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DetectDestroyActorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDetectDestroyActorComponent, nullptr, "OnDestroyActor__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::DetectDestroyActorComponent_eventOnDestroyActor_Parms), Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UDetectDestroyActorComponent::StaticRegisterNativesUDetectDestroyActorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDetectDestroyActorComponent);
	UClass* Z_Construct_UClass_UDetectDestroyActorComponent_NoRegister()
	{
		return UDetectDestroyActorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDetectDestroyActorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDetectDestroyActorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UDetectDestroyActorComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UDetectDestroyActorComponent_OnDestroyActor__DelegateSignature, "OnDestroyActor__DelegateSignature" }, // 3972651337
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDetectDestroyActorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DetectDestroyActorComponent.h" },
		{ "ModuleRelativePath", "Public/DetectDestroyActorComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDetectDestroyActorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDetectDestroyActorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDetectDestroyActorComponent_Statics::ClassParams = {
		&UDetectDestroyActorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDetectDestroyActorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDetectDestroyActorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDetectDestroyActorComponent()
	{
		if (!Z_Registration_Info_UClass_UDetectDestroyActorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDetectDestroyActorComponent.OuterSingleton, Z_Construct_UClass_UDetectDestroyActorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDetectDestroyActorComponent.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UDetectDestroyActorComponent>()
	{
		return UDetectDestroyActorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDetectDestroyActorComponent);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDetectDestroyActorComponent, UDetectDestroyActorComponent::StaticClass, TEXT("UDetectDestroyActorComponent"), &Z_Registration_Info_UClass_UDetectDestroyActorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDetectDestroyActorComponent), 1143666684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_2507999087(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_DetectDestroyActorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
