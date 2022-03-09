// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/Objetive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjetive() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UObjetive_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UObjetive();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FDataPlayer();
// End Cross Module References
	void UObjetive::StaticRegisterNativesUObjetive()
	{
	}
	UClass* Z_Construct_UClass_UObjetive_NoRegister()
	{
		return UObjetive::StaticClass();
	}
	struct Z_Construct_UClass_UObjetive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoneAccion_MetaData[];
#endif
		static void NewProp_bDoneAccion_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoneAccion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseIdentificationObject_MetaData[];
#endif
		static void NewProp_bUseIdentificationObject_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseIdentificationObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequiredDataPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RequiredDataPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjetive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuestSystem/Objetive.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Objetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjetive, Description), METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_MetaData[] = {
		{ "Category", "Objetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	void Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_SetBit(void* Obj)
	{
		((UObjetive*)Obj)->bDoneAccion = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion = { "bDoneAccion", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjetive), &Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_MetaData[] = {
		{ "Category", "Objetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	void Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_SetBit(void* Obj)
	{
		((UObjetive*)Obj)->bUseIdentificationObject = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject = { "bUseIdentificationObject", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UObjetive), &Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_SetBit, METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjetive_Statics::NewProp_RequiredDataPlayer_MetaData[] = {
		{ "Category", "Objetive" },
		{ "ModuleRelativePath", "Public/QuestSystem/Objetive.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UObjetive_Statics::NewProp_RequiredDataPlayer = { "RequiredDataPlayer", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjetive, RequiredDataPlayer), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::NewProp_RequiredDataPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::NewProp_RequiredDataPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjetive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_bDoneAccion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_bUseIdentificationObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjetive_Statics::NewProp_RequiredDataPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjetive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjetive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjetive_Statics::ClassParams = {
		&UObjetive::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjetive_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjetive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjetive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjetive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjetive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjetive, 2434667282);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UObjetive>()
	{
		return UObjetive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjetive(Z_Construct_UClass_UObjetive, &UObjetive::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UObjetive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjetive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
