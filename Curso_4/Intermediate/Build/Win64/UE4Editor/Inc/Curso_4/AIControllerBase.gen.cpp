// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_4/Public/Characters/Controllers/AIControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIControllerBase() {}
// Cross Module References
	CURSO_4_API UClass* Z_Construct_UClass_AAIControllerBase_NoRegister();
	CURSO_4_API UClass* Z_Construct_UClass_AAIControllerBase();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Curso_4();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	void AAIControllerBase::StaticRegisterNativesAAIControllerBase()
	{
	}
	UClass* Z_Construct_UClass_AAIControllerBase_NoRegister()
	{
		return AAIControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_AAIControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentBehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentBehaviorTree;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Characters/Controllers/AIControllerBase.h" },
		{ "ModuleRelativePath", "Public/Characters/Controllers/AIControllerBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIControllerBase_Statics::NewProp_CurrentBehaviorTree_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Characters/Controllers/AIControllerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIControllerBase_Statics::NewProp_CurrentBehaviorTree = { "CurrentBehaviorTree", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIControllerBase, CurrentBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIControllerBase_Statics::NewProp_CurrentBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerBase_Statics::NewProp_CurrentBehaviorTree_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIControllerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIControllerBase_Statics::NewProp_CurrentBehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIControllerBase_Statics::ClassParams = {
		&AAIControllerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIControllerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerBase_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIControllerBase, 3392119830);
	template<> CURSO_4_API UClass* StaticClass<AAIControllerBase>()
	{
		return AAIControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIControllerBase(Z_Construct_UClass_AAIControllerBase, &AAIControllerBase::StaticClass, TEXT("/Script/Curso_4"), TEXT("AAIControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
