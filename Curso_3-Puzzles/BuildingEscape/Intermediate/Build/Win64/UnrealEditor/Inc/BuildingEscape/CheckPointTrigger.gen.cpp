// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/CheckPointTrigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckPointTrigger() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACheckPointTrigger();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACheckPointTrigger_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AInteractTrigger();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature_Statics
	{
		struct CheckPointTrigger_eventOnCheckPointTrigger_Parms
		{
			ACheckPointTrigger* CheckPointTrigger;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CheckPointTrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature_Statics::NewProp_CheckPointTrigger = { "CheckPointTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckPointTrigger_eventOnCheckPointTrigger_Parms, CheckPointTrigger), Z_Construct_UClass_ACheckPointTrigger_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature_Statics::NewProp_CheckPointTrigger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CheckPointTrigger.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACheckPointTrigger, nullptr, "OnCheckPointTrigger__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature_Statics::CheckPointTrigger_eventOnCheckPointTrigger_Parms), Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ACheckPointTrigger::StaticRegisterNativesACheckPointTrigger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACheckPointTrigger);
	UClass* Z_Construct_UClass_ACheckPointTrigger_NoRegister()
	{
		return ACheckPointTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ACheckPointTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointToCurrentRespawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointToCurrentRespawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerStart;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACheckPointTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_ACheckPointTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_ACheckPointTrigger_OnCheckPointTrigger__DelegateSignature, "OnCheckPointTrigger__DelegateSignature" }, // 1758856819
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckPointTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CheckPointTrigger.h" },
		{ "ModuleRelativePath", "Public/CheckPointTrigger.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PointToCurrentRespawn_MetaData[] = {
		{ "Category", "CheckPointTrigger" },
		{ "ModuleRelativePath", "Public/CheckPointTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PointToCurrentRespawn = { "PointToCurrentRespawn", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckPointTrigger, PointToCurrentRespawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PointToCurrentRespawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PointToCurrentRespawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PlayerStart_MetaData[] = {
		{ "Category", "CheckPointTrigger" },
		{ "ModuleRelativePath", "Public/CheckPointTrigger.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PlayerStart = { "PlayerStart", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACheckPointTrigger, PlayerStart), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PlayerStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PlayerStart_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACheckPointTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PointToCurrentRespawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACheckPointTrigger_Statics::NewProp_PlayerStart,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACheckPointTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACheckPointTrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACheckPointTrigger_Statics::ClassParams = {
		&ACheckPointTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_ACheckPointTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPointTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACheckPointTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACheckPointTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACheckPointTrigger()
	{
		if (!Z_Registration_Info_UClass_ACheckPointTrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACheckPointTrigger.OuterSingleton, Z_Construct_UClass_ACheckPointTrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACheckPointTrigger.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ACheckPointTrigger>()
	{
		return ACheckPointTrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACheckPointTrigger);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACheckPointTrigger, ACheckPointTrigger::StaticClass, TEXT("ACheckPointTrigger"), &Z_Registration_Info_UClass_ACheckPointTrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACheckPointTrigger), 3749635551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_3905570796(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CheckPointTrigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
