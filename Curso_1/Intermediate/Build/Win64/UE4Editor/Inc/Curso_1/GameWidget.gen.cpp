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
	void UGameWidget::StaticRegisterNativesUGameWidget()
	{
	}
	UClass* Z_Construct_UClass_UGameWidget_NoRegister()
	{
		return UGameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		Z_Construct_UClass_UGameWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(UGameWidget, 4105112163);
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
