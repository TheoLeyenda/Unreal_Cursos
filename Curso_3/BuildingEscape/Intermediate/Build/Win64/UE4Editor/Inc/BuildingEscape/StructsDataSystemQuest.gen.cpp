// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/StructsDataSystemQuest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructsDataSystemQuest() {}
// Cross Module References
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FDataPlayer();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FInteractActorActivateData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStructsDataSystemQuest_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStructsDataSystemQuest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FDataPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FDataPlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataPlayer, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("DataPlayer"), sizeof(FDataPlayer), Get_Z_Construct_UScriptStruct_FDataPlayer_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FDataPlayer>()
{
	return FDataPlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataPlayer(FDataPlayer::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("DataPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFDataPlayer
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFDataPlayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DataPlayer")),new UScriptStruct::TCppStructOps<FDataPlayer>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFDataPlayer;
	struct Z_Construct_UScriptStruct_FDataPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedItems_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NeedItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NeedItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fatness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fatness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lifes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Lifes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractActorsActivateData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractActorsActivateData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataPlayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_Inner_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_Inner = { "NeedItems", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems = { "NeedItems", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPlayer, NeedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPlayer, InventoryComponent), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InventoryComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Fatness_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Fatness = { "Fatness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPlayer, Fatness), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Fatness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Fatness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Lifes_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Lifes = { "Lifes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPlayer, Lifes), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Lifes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Lifes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InteractActorsActivateData_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InteractActorsActivateData = { "InteractActorsActivateData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPlayer, InteractActorsActivateData), Z_Construct_UScriptStruct_FInteractActorActivateData, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InteractActorsActivateData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InteractActorsActivateData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InventoryComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Fatness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Lifes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InteractActorsActivateData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"DataPlayer",
		sizeof(FDataPlayer),
		alignof(FDataPlayer),
		Z_Construct_UScriptStruct_FDataPlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataPlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataPlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataPlayer"), sizeof(FDataPlayer), Get_Z_Construct_UScriptStruct_FDataPlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataPlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataPlayer_Hash() { return 1957074455U; }
class UScriptStruct* FInteractActorActivateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BUILDINGESCAPE_API uint32 Get_Z_Construct_UScriptStruct_FInteractActorActivateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractActorActivateData, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("InteractActorActivateData"), sizeof(FInteractActorActivateData), Get_Z_Construct_UScriptStruct_FInteractActorActivateData_Hash());
	}
	return Singleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FInteractActorActivateData>()
{
	return FInteractActorActivateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractActorActivateData(FInteractActorActivateData::StaticStruct, TEXT("/Script/BuildingEscape"), TEXT("InteractActorActivateData"), false, nullptr, nullptr);
static struct FScriptStruct_BuildingEscape_StaticRegisterNativesFInteractActorActivateData
{
	FScriptStruct_BuildingEscape_StaticRegisterNativesFInteractActorActivateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractActorActivateData")),new UScriptStruct::TCppStructOps<FInteractActorActivateData>);
	}
} ScriptStruct_BuildingEscape_StaticRegisterNativesFInteractActorActivateData;
	struct Z_Construct_UScriptStruct_FInteractActorActivateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractActorActivateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::NewProp_ActorBlueprint_MetaData[] = {
		{ "Category", "InteractActorActivateData" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::NewProp_ActorBlueprint = { "ActorBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractActorActivateData, ActorBlueprint), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::NewProp_ActorBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::NewProp_ActorBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "InteractActorActivateData" },
		{ "Comment", "// Clase del objeto activado.\n" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
		{ "ToolTip", "Clase del objeto activado." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractActorActivateData, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::NewProp_ActorBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::NewProp_Actor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"InteractActorActivateData",
		sizeof(FInteractActorActivateData),
		alignof(FInteractActorActivateData),
		Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractActorActivateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractActorActivateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BuildingEscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractActorActivateData"), sizeof(FInteractActorActivateData), Get_Z_Construct_UScriptStruct_FInteractActorActivateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractActorActivateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractActorActivateData_Hash() { return 3568883044U; }
	void UStructsDataSystemQuest::StaticRegisterNativesUStructsDataSystemQuest()
	{
	}
	UClass* Z_Construct_UClass_UStructsDataSystemQuest_NoRegister()
	{
		return UStructsDataSystemQuest::StaticClass();
	}
	struct Z_Construct_UClass_UStructsDataSystemQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStructsDataSystemQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructsDataSystemQuest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestSystem/StructsDataSystemQuest.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStructsDataSystemQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructsDataSystemQuest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStructsDataSystemQuest_Statics::ClassParams = {
		&UStructsDataSystemQuest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStructsDataSystemQuest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStructsDataSystemQuest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStructsDataSystemQuest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStructsDataSystemQuest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStructsDataSystemQuest, 2912241707);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UStructsDataSystemQuest>()
	{
		return UStructsDataSystemQuest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStructsDataSystemQuest(Z_Construct_UClass_UStructsDataSystemQuest, &UStructsDataSystemQuest::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UStructsDataSystemQuest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStructsDataSystemQuest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
