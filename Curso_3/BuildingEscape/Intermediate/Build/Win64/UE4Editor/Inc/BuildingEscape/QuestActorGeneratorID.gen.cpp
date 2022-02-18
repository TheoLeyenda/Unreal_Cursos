// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/QuestActorGeneratorID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestActorGeneratorID() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AQuestActorGeneratorID_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AQuestActorGeneratorID();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UQuestActorComponentID_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AQuestActorGeneratorID::execShowNamesActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowNamesActors();
		P_NATIVE_END;
	}
	void AQuestActorGeneratorID::StaticRegisterNativesAQuestActorGeneratorID()
	{
		UClass* Class = AQuestActorGeneratorID::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ShowNamesActors", &AQuestActorGeneratorID::execShowNamesActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AQuestActorGeneratorID_ShowNamesActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AQuestActorGeneratorID_ShowNamesActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/QuestActorGeneratorID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AQuestActorGeneratorID_ShowNamesActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AQuestActorGeneratorID, nullptr, "ShowNamesActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AQuestActorGeneratorID_ShowNamesActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AQuestActorGeneratorID_ShowNamesActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AQuestActorGeneratorID_ShowNamesActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AQuestActorGeneratorID_ShowNamesActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AQuestActorGeneratorID_NoRegister()
	{
		return AQuestActorGeneratorID::StaticClass();
	}
	struct Z_Construct_UClass_AQuestActorGeneratorID_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestActorComponentIds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestActorComponentIds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QuestActorComponentIds;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NamesActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamesActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NamesActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowNames_MetaData[];
#endif
		static void NewProp_bShowNames_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuestActorGeneratorID_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AQuestActorGeneratorID_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AQuestActorGeneratorID_ShowNamesActors, "ShowNamesActors" }, // 2460131322
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestActorGeneratorID_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestSystem/QuestActorGeneratorID.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestActorGeneratorID.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_QuestActorComponentIds_Inner = { "QuestActorComponentIds", nullptr, (EPropertyFlags)0x00000000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UQuestActorComponentID_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_QuestActorComponentIds_MetaData[] = {
		{ "Category", "QuestActorGeneratorID" },
		{ "Comment", "// Called when the game starts or when spawned\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestActorGeneratorID.h" },
		{ "ToolTip", "Called when the game starts or when spawned" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_QuestActorComponentIds = { "QuestActorComponentIds", nullptr, (EPropertyFlags)0x0020088000020009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestActorGeneratorID, QuestActorComponentIds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_QuestActorComponentIds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_QuestActorComponentIds_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_NamesActors_Inner = { "NamesActors", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_NamesActors_MetaData[] = {
		{ "Category", "QuestActorGeneratorID" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestActorGeneratorID.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_NamesActors = { "NamesActors", nullptr, (EPropertyFlags)0x0020080000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestActorGeneratorID, NamesActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_NamesActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_NamesActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "QuestActorGeneratorID" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestActorGeneratorID.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AQuestActorGeneratorID, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_bShowNames_MetaData[] = {
		{ "Category", "QuestActorGeneratorID" },
		{ "ModuleRelativePath", "Public/QuestSystem/QuestActorGeneratorID.h" },
	};
#endif
	void Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_bShowNames_SetBit(void* Obj)
	{
		((AQuestActorGeneratorID*)Obj)->bShowNames = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_bShowNames = { "bShowNames", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AQuestActorGeneratorID), &Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_bShowNames_SetBit, METADATA_PARAMS(Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_bShowNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_bShowNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AQuestActorGeneratorID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_QuestActorComponentIds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_QuestActorComponentIds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_NamesActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_NamesActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AQuestActorGeneratorID_Statics::NewProp_bShowNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuestActorGeneratorID_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestActorGeneratorID>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuestActorGeneratorID_Statics::ClassParams = {
		&AQuestActorGeneratorID::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AQuestActorGeneratorID_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AQuestActorGeneratorID_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuestActorGeneratorID_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestActorGeneratorID_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuestActorGeneratorID()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuestActorGeneratorID_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuestActorGeneratorID, 137377298);
	template<> BUILDINGESCAPE_API UClass* StaticClass<AQuestActorGeneratorID>()
	{
		return AQuestActorGeneratorID::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuestActorGeneratorID(Z_Construct_UClass_AQuestActorGeneratorID, &AQuestActorGeneratorID::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("AQuestActorGeneratorID"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestActorGeneratorID);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
