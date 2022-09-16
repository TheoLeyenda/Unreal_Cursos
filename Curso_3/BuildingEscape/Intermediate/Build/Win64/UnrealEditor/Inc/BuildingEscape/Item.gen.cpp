// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/Item.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingScapeCharacter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
// End Cross Module References
	static FName NAME_UItem_OnUse = FName(TEXT("OnUse"));
	void UItem::OnUse(ABuildingScapeCharacter* Character)
	{
		Item_eventOnUse_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_UItem_OnUse),&Parms);
	}
	void UItem::StaticRegisterNativesUItem()
	{
	}
	struct Z_Construct_UFunction_UItem_OnUse_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItem_OnUse_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Item_eventOnUse_Parms, Character), Z_Construct_UClass_ABuildingScapeCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItem_OnUse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItem_OnUse_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UItem_OnUse_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItem_OnUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItem, nullptr, "OnUse", nullptr, nullptr, sizeof(Item_eventOnUse_Parms), Z_Construct_UFunction_UItem_OnUse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_OnUse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UItem_OnUse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UItem_OnUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UItem_OnUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItem_OnUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItem);
	UClass* Z_Construct_UClass_UItem_NoRegister()
	{
		return UItem::StaticClass();
	}
	struct Z_Construct_UClass_UItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSelectedItem_MetaData[];
#endif
		static void NewProp_bSelectedItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectedItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintActorItem_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BlueprintActorItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseItemFuncionality_MetaData[];
#endif
		static void NewProp_bUseItemFuncionality_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseItemFuncionality;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseActionText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_UseActionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDisplayName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ItemDisplayName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ItemDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UItem_OnUse, "OnUse" }, // 2264653912
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Item.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, ID), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_bSelectedItem_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	void Z_Construct_UClass_UItem_Statics::NewProp_bSelectedItem_SetBit(void* Obj)
	{
		((UItem*)Obj)->bSelectedItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_bSelectedItem = { "bSelectedItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UItem), &Z_Construct_UClass_UItem_Statics::NewProp_bSelectedItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_bSelectedItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_bSelectedItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_BlueprintActorItem_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_BlueprintActorItem = { "BlueprintActorItem", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, BlueprintActorItem), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_BlueprintActorItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_BlueprintActorItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_bUseItemFuncionality_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Item.h" },
	};
#endif
	void Z_Construct_UClass_UItem_Statics::NewProp_bUseItemFuncionality_SetBit(void* Obj)
	{
		((UItem*)Obj)->bUseItemFuncionality = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_bUseItemFuncionality = { "bUseItemFuncionality", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UItem), &Z_Construct_UClass_UItem_Statics::NewProp_bUseItemFuncionality_SetBit, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_bUseItemFuncionality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_bUseItemFuncionality_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_UseActionText_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/** The Text for using the item. (Equip, Eat, etc)**/" },
		{ "ModuleRelativePath", "Public/Item.h" },
		{ "ToolTip", "The Text for using the item. (Equip, Eat, etc)*" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_UseActionText = { "UseActionText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, UseActionText), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_UseActionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_UseActionText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/**The thumbnail for this item**/" },
		{ "ModuleRelativePath", "Public/Item.h" },
		{ "ToolTip", "The thumbnail for this item*" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_ItemDisplayName_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/**The display name for this item in the inventory**/" },
		{ "ModuleRelativePath", "Public/Item.h" },
		{ "ToolTip", "The display name for this item in the inventory*" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ItemDisplayName = { "ItemDisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, ItemDisplayName), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_ItemDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_ItemDisplayName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_ItemDescription_MetaData[] = {
		{ "Category", "Item" },
		{ "Comment", "/**An optional description for the item**/" },
		{ "ModuleRelativePath", "Public/Item.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "An optional description for the item*" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_ItemDescription = { "ItemDescription", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, ItemDescription), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_ItemDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_ItemDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UItem_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "Item" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/**The weight of the item**/" },
		{ "ModuleRelativePath", "Public/Item.h" },
		{ "ToolTip", "The weight of the item*" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UItem_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UItem, Weight), METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::NewProp_Weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_bSelectedItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_BlueprintActorItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_bUseItemFuncionality,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_UseActionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ItemDisplayName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_ItemDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItem_Statics::NewProp_Weight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UItem_Statics::ClassParams = {
		&UItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UItem()
	{
		if (!Z_Registration_Info_UClass_UItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItem.OuterSingleton, Z_Construct_UClass_UItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UItem.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UItem>()
	{
		return UItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UItem);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UItem, UItem::StaticClass, TEXT("UItem"), &Z_Registration_Info_UClass_UItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItem), 2496474949U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_3998075220(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
