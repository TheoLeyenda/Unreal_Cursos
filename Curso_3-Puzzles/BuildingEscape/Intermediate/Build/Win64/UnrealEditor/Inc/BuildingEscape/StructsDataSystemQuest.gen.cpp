// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/StructsDataSystemQuest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructsDataSystemQuest() {}
// Cross Module References
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLastInteractActorInfo();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FDataPlayer();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStructsDataSystemQuest_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UStructsDataSystemQuest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LastInteractActorInfo;
class UScriptStruct* FLastInteractActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LastInteractActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LastInteractActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLastInteractActorInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("LastInteractActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_LastInteractActorInfo.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FLastInteractActorInfo>()
{
	return FLastInteractActorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorBlueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLastInteractActorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::NewProp_ActorBlueprint_MetaData[] = {
		{ "Category", "LastInteractActorInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::NewProp_ActorBlueprint = { "ActorBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLastInteractActorInfo, ActorBlueprint), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::NewProp_ActorBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::NewProp_ActorBlueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "LastInteractActorInfo" },
		{ "Comment", "// Clase del objeto activado.\n" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
		{ "ToolTip", "Clase del objeto activado." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLastInteractActorInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::NewProp_ID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::NewProp_ActorBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::NewProp_ID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		&NewStructOps,
		"LastInteractActorInfo",
		sizeof(FLastInteractActorInfo),
		alignof(FLastInteractActorInfo),
		Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLastInteractActorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_LastInteractActorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LastInteractActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LastInteractActorInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataPlayer;
class UScriptStruct* FDataPlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataPlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataPlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataPlayer, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("DataPlayer"));
	}
	return Z_Registration_Info_UScriptStruct_DataPlayer.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FDataPlayer>()
{
	return FDataPlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataPlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FClassPropertyParams NewProp_NeedItems_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NeedItems_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NeedItems;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFatnessText_MetaData[];
#endif
		static void NewProp_bUseFatnessText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFatnessText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Fatness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Fatness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextProgressFatness_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextProgressFatness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLifesText_MetaData[];
#endif
		static void NewProp_bUseLifesText_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLifesText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Lifes_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Lifes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextProgressLifes_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextProgressLifes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastInteractActorInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastInteractActorInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataPlayer>();
	}
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_Inner = { "NeedItems", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UItem_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems = { "NeedItems", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPlayer, NeedItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPlayer, InventoryComponent), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InventoryComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseFatnessText_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseFatnessText_SetBit(void* Obj)
	{
		((FDataPlayer*)Obj)->bUseFatnessText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseFatnessText = { "bUseFatnessText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDataPlayer), &Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseFatnessText_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseFatnessText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseFatnessText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Fatness_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Fatness = { "Fatness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPlayer, Fatness), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Fatness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Fatness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_TextProgressFatness_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_TextProgressFatness = { "TextProgressFatness", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPlayer, TextProgressFatness), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_TextProgressFatness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_TextProgressFatness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseLifesText_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseLifesText_SetBit(void* Obj)
	{
		((FDataPlayer*)Obj)->bUseLifesText = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseLifesText = { "bUseLifesText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDataPlayer), &Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseLifesText_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseLifesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseLifesText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Lifes_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Lifes = { "Lifes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPlayer, Lifes), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Lifes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Lifes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_TextProgressLifes_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_TextProgressLifes = { "TextProgressLifes", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPlayer, TextProgressLifes), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_TextProgressLifes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_TextProgressLifes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_LastInteractActorInfo_MetaData[] = {
		{ "Category", "DataPlayer" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_LastInteractActorInfo = { "LastInteractActorInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataPlayer, LastInteractActorInfo), Z_Construct_UScriptStruct_FLastInteractActorInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_LastInteractActorInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_LastInteractActorInfo_MetaData)) }; // 1295891003
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_NeedItems,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_InventoryComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseFatnessText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Fatness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_TextProgressFatness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_bUseLifesText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_Lifes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_TextProgressLifes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataPlayer_Statics::NewProp_LastInteractActorInfo,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataPlayer_Statics::ReturnStructParams = {
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
		if (!Z_Registration_Info_UScriptStruct_DataPlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataPlayer.InnerSingleton, Z_Construct_UScriptStruct_FDataPlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataPlayer.InnerSingleton;
	}
	void UStructsDataSystemQuest::StaticRegisterNativesUStructsDataSystemQuest()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStructsDataSystemQuest);
	UClass* Z_Construct_UClass_UStructsDataSystemQuest_NoRegister()
	{
		return UStructsDataSystemQuest::StaticClass();
	}
	struct Z_Construct_UClass_UStructsDataSystemQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStructsDataSystemQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStructsDataSystemQuest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuestSystem/StructsDataSystemQuest.h" },
		{ "ModuleRelativePath", "Public/QuestSystem/StructsDataSystemQuest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStructsDataSystemQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStructsDataSystemQuest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStructsDataSystemQuest_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UStructsDataSystemQuest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStructsDataSystemQuest.OuterSingleton, Z_Construct_UClass_UStructsDataSystemQuest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStructsDataSystemQuest.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UStructsDataSystemQuest>()
	{
		return UStructsDataSystemQuest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStructsDataSystemQuest);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_StructsDataSystemQuest_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_StructsDataSystemQuest_h_Statics::ScriptStructInfo[] = {
		{ FLastInteractActorInfo::StaticStruct, Z_Construct_UScriptStruct_FLastInteractActorInfo_Statics::NewStructOps, TEXT("LastInteractActorInfo"), &Z_Registration_Info_UScriptStruct_LastInteractActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLastInteractActorInfo), 1295891003U) },
		{ FDataPlayer::StaticStruct, Z_Construct_UScriptStruct_FDataPlayer_Statics::NewStructOps, TEXT("DataPlayer"), &Z_Registration_Info_UScriptStruct_DataPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataPlayer), 3108135505U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_StructsDataSystemQuest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStructsDataSystemQuest, UStructsDataSystemQuest::StaticClass, TEXT("UStructsDataSystemQuest"), &Z_Registration_Info_UClass_UStructsDataSystemQuest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStructsDataSystemQuest), 689163538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_StructsDataSystemQuest_h_2336383405(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_StructsDataSystemQuest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_StructsDataSystemQuest_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_StructsDataSystemQuest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_StructsDataSystemQuest_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
