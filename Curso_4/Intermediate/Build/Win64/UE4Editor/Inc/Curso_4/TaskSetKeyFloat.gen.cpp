// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_4/Public/IA/Task/TaskSetKeyFloat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskSetKeyFloat() {}
// Cross Module References
	CURSO_4_API UClass* Z_Construct_UClass_UTaskSetKeyFloat_NoRegister();
	CURSO_4_API UClass* Z_Construct_UClass_UTaskSetKeyFloat();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlueprintBase();
	UPackage* Z_Construct_UPackage__Script_Curso_4();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UTaskSetKeyFloat::StaticRegisterNativesUTaskSetKeyFloat()
	{
	}
	UClass* Z_Construct_UClass_UTaskSetKeyFloat_NoRegister()
	{
		return UTaskSetKeyFloat::StaticClass();
	}
	struct Z_Construct_UClass_UTaskSetKeyFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FloatKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskSetKeyFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlueprintBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskSetKeyFloat_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IA/Task/TaskSetKeyFloat.h" },
		{ "ModuleRelativePath", "Public/IA/Task/TaskSetKeyFloat.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskSetKeyFloat_Statics::NewProp_FloatKey_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/IA/Task/TaskSetKeyFloat.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTaskSetKeyFloat_Statics::NewProp_FloatKey = { "FloatKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskSetKeyFloat, FloatKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTaskSetKeyFloat_Statics::NewProp_FloatKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskSetKeyFloat_Statics::NewProp_FloatKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskSetKeyFloat_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/IA/Task/TaskSetKeyFloat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTaskSetKeyFloat_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskSetKeyFloat, FloatValue), METADATA_PARAMS(Z_Construct_UClass_UTaskSetKeyFloat_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskSetKeyFloat_Statics::NewProp_FloatValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskSetKeyFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskSetKeyFloat_Statics::NewProp_FloatKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskSetKeyFloat_Statics::NewProp_FloatValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskSetKeyFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskSetKeyFloat>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaskSetKeyFloat_Statics::ClassParams = {
		&UTaskSetKeyFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTaskSetKeyFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskSetKeyFloat_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskSetKeyFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskSetKeyFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskSetKeyFloat()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaskSetKeyFloat_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaskSetKeyFloat, 3030290957);
	template<> CURSO_4_API UClass* StaticClass<UTaskSetKeyFloat>()
	{
		return UTaskSetKeyFloat::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaskSetKeyFloat(Z_Construct_UClass_UTaskSetKeyFloat, &UTaskSetKeyFloat::StaticClass, TEXT("/Script/Curso_4"), TEXT("UTaskSetKeyFloat"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskSetKeyFloat);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
