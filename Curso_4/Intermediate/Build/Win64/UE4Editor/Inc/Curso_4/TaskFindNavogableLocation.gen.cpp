// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Curso_4/Public/IA/Task/TaskFindNavogableLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskFindNavogableLocation() {}
// Cross Module References
	CURSO_4_API UClass* Z_Construct_UClass_UTaskFindNavogableLocation_NoRegister();
	CURSO_4_API UClass* Z_Construct_UClass_UTaskFindNavogableLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Curso_4();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UTaskFindNavogableLocation::StaticRegisterNativesUTaskFindNavogableLocation()
	{
	}
	UClass* Z_Construct_UClass_UTaskFindNavogableLocation_NoRegister()
	{
		return UTaskFindNavogableLocation::StaticClass();
	}
	struct Z_Construct_UClass_UTaskFindNavogableLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PatrolRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocationKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocationKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskFindNavogableLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Curso_4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskFindNavogableLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IA/Task/TaskFindNavogableLocation.h" },
		{ "ModuleRelativePath", "Public/IA/Task/TaskFindNavogableLocation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskFindNavogableLocation_Statics::NewProp_PatrolRadius_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/IA/Task/TaskFindNavogableLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTaskFindNavogableLocation_Statics::NewProp_PatrolRadius = { "PatrolRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskFindNavogableLocation, PatrolRadius), METADATA_PARAMS(Z_Construct_UClass_UTaskFindNavogableLocation_Statics::NewProp_PatrolRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskFindNavogableLocation_Statics::NewProp_PatrolRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskFindNavogableLocation_Statics::NewProp_TargetLocationKey_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/IA/Task/TaskFindNavogableLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTaskFindNavogableLocation_Statics::NewProp_TargetLocationKey = { "TargetLocationKey", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskFindNavogableLocation, TargetLocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UTaskFindNavogableLocation_Statics::NewProp_TargetLocationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskFindNavogableLocation_Statics::NewProp_TargetLocationKey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskFindNavogableLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskFindNavogableLocation_Statics::NewProp_PatrolRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskFindNavogableLocation_Statics::NewProp_TargetLocationKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskFindNavogableLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskFindNavogableLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaskFindNavogableLocation_Statics::ClassParams = {
		&UTaskFindNavogableLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTaskFindNavogableLocation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskFindNavogableLocation_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskFindNavogableLocation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskFindNavogableLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskFindNavogableLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaskFindNavogableLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaskFindNavogableLocation, 890644356);
	template<> CURSO_4_API UClass* StaticClass<UTaskFindNavogableLocation>()
	{
		return UTaskFindNavogableLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaskFindNavogableLocation(Z_Construct_UClass_UTaskFindNavogableLocation, &UTaskFindNavogableLocation::StaticClass, TEXT("/Script/Curso_4"), TEXT("UTaskFindNavogableLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskFindNavogableLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
