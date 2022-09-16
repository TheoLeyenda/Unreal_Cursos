// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/CombinePanel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombinePanel() {}
// Cross Module References
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACombinePanel();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ACombinePanel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestActorComponentID_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATrap_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature_Statics
	{
		struct CombinePanel_eventOnCompleteCombinePanel_Parms
		{
			ACombinePanel* CombinePanel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CombinePanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature_Statics::NewProp_CombinePanel = { "CombinePanel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CombinePanel_eventOnCompleteCombinePanel_Parms, CombinePanel), Z_Construct_UClass_ACombinePanel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature_Statics::NewProp_CombinePanel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACombinePanel, nullptr, "OnCompleteCombinePanel__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature_Statics::CombinePanel_eventOnCompleteCombinePanel_Parms), Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ACombinePanel::StaticRegisterNativesACombinePanel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACombinePanel);
	UClass* Z_Construct_UClass_ACombinePanel_NoRegister()
	{
		return ACombinePanel::StaticClass();
	}
	struct Z_Construct_UClass_ACombinePanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestActorComponentID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestActorComponentID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountNumbersCode_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CountNumbersCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Trap_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Trap;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CodeNumbers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CodeNumbers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CodeNumbers;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentAnswer_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAnswer_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentAnswer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACombinePanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_ACombinePanel_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_ACombinePanel_OnCompleteCombinePanel__DelegateSignature, "OnCompleteCombinePanel__DelegateSignature" }, // 1744813833
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinePanel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CombinePanel.h" },
		{ "ModuleRelativePath", "Public/CombinePanel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinePanel_Statics::NewProp_QuestActorComponentID_MetaData[] = {
		{ "Category", "CombinePanel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinePanel_Statics::NewProp_QuestActorComponentID = { "QuestActorComponentID", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombinePanel, QuestActorComponentID), Z_Construct_UClass_UQuestActorComponentID_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinePanel_Statics::NewProp_QuestActorComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinePanel_Statics::NewProp_QuestActorComponentID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinePanel_Statics::NewProp_CountNumbersCode_MetaData[] = {
		{ "Category", "CombinePanel" },
		{ "ModuleRelativePath", "Public/CombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACombinePanel_Statics::NewProp_CountNumbersCode = { "CountNumbersCode", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombinePanel, CountNumbersCode), METADATA_PARAMS(Z_Construct_UClass_ACombinePanel_Statics::NewProp_CountNumbersCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinePanel_Statics::NewProp_CountNumbersCode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinePanel_Statics::NewProp_Trap_MetaData[] = {
		{ "Category", "CombinePanel" },
		{ "ModuleRelativePath", "Public/CombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACombinePanel_Statics::NewProp_Trap = { "Trap", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombinePanel, Trap), Z_Construct_UClass_ATrap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACombinePanel_Statics::NewProp_Trap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinePanel_Statics::NewProp_Trap_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACombinePanel_Statics::NewProp_CodeNumbers_Inner = { "CodeNumbers", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinePanel_Statics::NewProp_CodeNumbers_MetaData[] = {
		{ "Category", "CombinePanel" },
		{ "ModuleRelativePath", "Public/CombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACombinePanel_Statics::NewProp_CodeNumbers = { "CodeNumbers", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombinePanel, CodeNumbers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACombinePanel_Statics::NewProp_CodeNumbers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinePanel_Statics::NewProp_CodeNumbers_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACombinePanel_Statics::NewProp_CurrentAnswer_Inner = { "CurrentAnswer", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACombinePanel_Statics::NewProp_CurrentAnswer_MetaData[] = {
		{ "Category", "CombinePanel" },
		{ "ModuleRelativePath", "Public/CombinePanel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACombinePanel_Statics::NewProp_CurrentAnswer = { "CurrentAnswer", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACombinePanel, CurrentAnswer), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACombinePanel_Statics::NewProp_CurrentAnswer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinePanel_Statics::NewProp_CurrentAnswer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACombinePanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinePanel_Statics::NewProp_QuestActorComponentID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinePanel_Statics::NewProp_CountNumbersCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinePanel_Statics::NewProp_Trap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinePanel_Statics::NewProp_CodeNumbers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinePanel_Statics::NewProp_CodeNumbers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinePanel_Statics::NewProp_CurrentAnswer_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACombinePanel_Statics::NewProp_CurrentAnswer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACombinePanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACombinePanel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACombinePanel_Statics::ClassParams = {
		&ACombinePanel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_ACombinePanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACombinePanel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACombinePanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACombinePanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACombinePanel()
	{
		if (!Z_Registration_Info_UClass_ACombinePanel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACombinePanel.OuterSingleton, Z_Construct_UClass_ACombinePanel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACombinePanel.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ACombinePanel>()
	{
		return ACombinePanel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACombinePanel);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACombinePanel, ACombinePanel::StaticClass, TEXT("ACombinePanel"), &Z_Registration_Info_UClass_ACombinePanel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACombinePanel), 1094680976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_3789702778(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
