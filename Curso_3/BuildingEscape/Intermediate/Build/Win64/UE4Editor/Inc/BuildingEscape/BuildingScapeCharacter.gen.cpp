// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/BuildingScapeCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingScapeCharacter() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingScapeCharacter_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingScapeCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UGrabber_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABuildingScapeCharacter::execUseItem)
	{
		P_GET_OBJECT(UItem,Z_Param_Item);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UseItem(Z_Param_Item);
		P_NATIVE_END;
	}
	void ABuildingScapeCharacter::StaticRegisterNativesABuildingScapeCharacter()
	{
		UClass* Class = ABuildingScapeCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UseItem", &ABuildingScapeCharacter::execUseItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics
	{
		struct BuildingScapeCharacter_eventUseItem_Parms
		{
			UItem* Item;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Item_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Item;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::NewProp_Item_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::NewProp_Item = { "Item", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BuildingScapeCharacter_eventUseItem_Parms, Item), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::NewProp_Item_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::NewProp_Item_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::NewProp_Item,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//------------------------------------------------------------------------------------------//\n" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingScapeCharacter, nullptr, "UseItem", nullptr, nullptr, sizeof(BuildingScapeCharacter_eventUseItem_Parms), Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingScapeCharacter_UseItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABuildingScapeCharacter_UseItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABuildingScapeCharacter_NoRegister()
	{
		return ABuildingScapeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingScapeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMovement_MetaData[];
#endif
		static void NewProp_bEnableMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reach_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Reach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grabber_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grabber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingScapeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuildingScapeCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuildingScapeCharacter_UseItem, "UseItem" }, // 3969207005
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BuildingScapeCharacter.h" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_SetBit(void* Obj)
	{
		((ABuildingScapeCharacter*)Obj)->bEnableMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement = { "bEnableMovement", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABuildingScapeCharacter), &Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InventoryComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Reach_MetaData[] = {
		{ "Category", "Player Stats" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Reach = { "Reach", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, Reach), METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Reach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Reach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber_MetaData[] = {
		{ "Category", "Grabber" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber = { "Grabber", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, Grabber), Z_Construct_UClass_UGrabber_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingScapeCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InventoryComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Reach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingScapeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingScapeCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::ClassParams = {
		&ABuildingScapeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuildingScapeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingScapeCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuildingScapeCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuildingScapeCharacter, 3047507718);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ABuildingScapeCharacter>()
	{
		return ABuildingScapeCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuildingScapeCharacter(Z_Construct_UClass_ABuildingScapeCharacter, &ABuildingScapeCharacter::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ABuildingScapeCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingScapeCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
