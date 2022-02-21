// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/SaveSystem/SaveDataManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataManager() {}
// Cross Module References
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSpawnInfo();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStats();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USaveDataManager_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_USaveDataManager();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
// End Cross Module References
class UScriptStruct* FActorSpawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FActorSpawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorSpawnInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("ActorSpawnInfo"), sizeof(FActorSpawnInfo), Get_Z_Construct_UScriptStruct_FActorSpawnInfo_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FActorSpawnInfo>()
{
	return FActorSpawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorSpawnInfo(FActorSpawnInfo::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("ActorSpawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFActorSpawnInfo
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFActorSpawnInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorSpawnInfo")),new UScriptStruct::TCppStructOps<FActorSpawnInfo>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFActorSpawnInfo;
	struct Z_Construct_UScriptStruct_FActorSpawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerStats;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ActorPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveDataManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorSpawnInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform_MetaData[] = {
		{ "Category", "ActorSpawnInfo" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform = { "ActorTransform", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnInfo, ActorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats_MetaData[] = {
		{ "Category", "ActorSpawnInfo" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats = { "PlayerStats", nullptr, (EPropertyFlags)0x0010000001000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnInfo, PlayerStats), Z_Construct_UScriptStruct_FPlayerStats, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_MetaData[] = {
		{ "Category", "ActorSpawnInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x001000800100000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnInfo, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr_MetaData[] = {
		{ "Category", "ActorSpawnInfo" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr = { "ActorPtr", nullptr, (EPropertyFlags)0x0014000001000005, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorSpawnInfo, ActorPtr), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_PlayerStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::NewProp_ActorPtr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"ActorSpawnInfo",
		sizeof(FActorSpawnInfo),
		alignof(FActorSpawnInfo),
		Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorSpawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorSpawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorSpawnInfo"), sizeof(FActorSpawnInfo), Get_Z_Construct_UScriptStruct_FActorSpawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorSpawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorSpawnInfo_Hash() { return 3001848620U; }
	DEFINE_FUNCTION(USaveDataManager::execLoad)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Load(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataManager::execSave)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Save(Z_Param_Actor);
		P_NATIVE_END;
	}
	void USaveDataManager::StaticRegisterNativesUSaveDataManager()
	{
		UClass* Class = USaveDataManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Load", &USaveDataManager::execLoad },
			{ "Save", &USaveDataManager::execSave },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataManager_Load_Statics
	{
		struct SaveDataManager_eventLoad_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataManager_Load_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataManager_eventLoad_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataManager_Load_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_Load_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataManager_Load_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveSystem/SaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataManager_Load_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataManager, nullptr, "Load", nullptr, nullptr, sizeof(SaveDataManager_eventLoad_Parms), Z_Construct_UFunction_USaveDataManager_Load_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_Load_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataManager_Load_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_Load_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataManager_Load()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataManager_Load_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataManager_Save_Statics
	{
		struct SaveDataManager_eventSave_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataManager_Save_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataManager_eventSave_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataManager_Save_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataManager_Save_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataManager_Save_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveSystem/SaveDataManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataManager_Save_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataManager, nullptr, "Save", nullptr, nullptr, sizeof(SaveDataManager_eventSave_Parms), Z_Construct_UFunction_USaveDataManager_Save_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_Save_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataManager_Save_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataManager_Save_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataManager_Save()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataManager_Save_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataManager_NoRegister()
	{
		return USaveDataManager::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataManager_Load, "Load" }, // 4037994485
		{ &Z_Construct_UFunction_USaveDataManager_Save, "Save" }, // 4220377651
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SaveSystem/SaveDataManager.h" },
		{ "ModuleRelativePath", "Public/SaveSystem/SaveDataManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataManager_Statics::ClassParams = {
		&USaveDataManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveDataManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataManager, 1322247938);
	template<> BUILDINGESCAPE_API UClass* StaticClass<USaveDataManager>()
	{
		return USaveDataManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataManager(Z_Construct_UClass_USaveDataManager, &USaveDataManager::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("USaveDataManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
