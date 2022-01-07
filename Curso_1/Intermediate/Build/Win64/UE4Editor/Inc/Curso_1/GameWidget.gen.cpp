// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_1/GameWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameWidget() {}
// Cross Module References
	CURSO_1_API UClass* Z_Construct_UClass_UGameWidget_NoRegister();
	CURSO_1_API UClass* Z_Construct_UClass_UGameWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Curso_1();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGameWidget::execSetScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Score);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScore_Implementation(Z_Param_Score);
		P_NATIVE_END;
	}
	static FName NAME_UGameWidget_SetScore = FName(TEXT("SetScore"));
	void UGameWidget::SetScore(int32 Score)
	{
		GameWidget_eventSetScore_Parms Parms;
		Parms.Score=Score;
		ProcessEvent(FindFunctionChecked(NAME_UGameWidget_SetScore),&Parms);
	}
	void UGameWidget::StaticRegisterNativesUGameWidget()
	{
		UClass* Class = UGameWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetScore", &UGameWidget::execSetScore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameWidget_SetScore_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UGameWidget_SetScore_Statics::NewProp_Score = { "Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameWidget_eventSetScore_Parms, Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameWidget_SetScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameWidget_SetScore_Statics::NewProp_Score,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameWidget_SetScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameWidget_SetScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameWidget, nullptr, "SetScore", nullptr, nullptr, sizeof(GameWidget_eventSetScore_Parms), Z_Construct_UFunction_UGameWidget_SetScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWidget_SetScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameWidget_SetScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameWidget_SetScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameWidget_SetScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameWidget_SetScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameWidget_NoRegister()
	{
		return UGameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_1,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameWidget_SetScore, "SetScore" }, // 3567049419
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameWidget.h" },
		{ "ModuleRelativePath", "GameWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameWidget_Statics::NewProp_TextBlock_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameWidget_Statics::NewProp_TextBlock = { "TextBlock", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameWidget, TextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameWidget_Statics::NewProp_TextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameWidget_Statics::NewProp_TextBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameWidget_Statics::NewProp_TextBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameWidget_Statics::ClassParams = {
		&UGameWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameWidget, 1565023658);
	template<> CURSO_1_API UClass* StaticClass<UGameWidget>()
	{
		return UGameWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameWidget(Z_Construct_UClass_UGameWidget, &UGameWidget::StaticClass, TEXT("/Script/Curso_1"), TEXT("UGameWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
