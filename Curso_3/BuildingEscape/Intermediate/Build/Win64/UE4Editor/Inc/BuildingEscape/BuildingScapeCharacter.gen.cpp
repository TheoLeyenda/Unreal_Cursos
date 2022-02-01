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
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingScapeCharacter_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ABuildingScapeCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UGrabber_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UInteractComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape, nullptr, "OnSubstractLife__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void ABuildingScapeCharacter::StaticRegisterNativesABuildingScapeCharacter()
	{
	}
	UClass* Z_Construct_UClass_ABuildingScapeCharacter_NoRegister()
	{
		return ABuildingScapeCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingScapeCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Fatness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Fatness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lifes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Lifes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMovement_MetaData[];
#endif
		static void NewProp_bEnableMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSubstractLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSubstractLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Grabber_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Grabber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInventoryComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerInventoryComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingScapeCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Fatness_MetaData[] = {
		{ "Category", "BuildingScapeCharacter Settings" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Fatness = { "Fatness", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, Fatness), METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Fatness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Fatness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Lifes_MetaData[] = {
		{ "Category", "BuildingScapeCharacter Settings" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Lifes = { "Lifes", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, Lifes), METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Lifes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Lifes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_MetaData[] = {
		{ "Category", "BuildingScapeCharacter Settings" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_SetBit(void* Obj)
	{
		((ABuildingScapeCharacter*)Obj)->bEnableMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement = { "bEnableMovement", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABuildingScapeCharacter), &Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnSubstractLife_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnSubstractLife = { "OnSubstractLife", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, OnSubstractLife), Z_Construct_UDelegateFunction_BuildingEscape_OnSubstractLife__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnSubstractLife_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnSubstractLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber_MetaData[] = {
		{ "Category", "BuildingScapeCharacter Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber = { "Grabber", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, Grabber), Z_Construct_UClass_UGrabber_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_PlayerInventoryComponent_MetaData[] = {
		{ "Category", "BuildingScapeCharacter Settings" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= \"BuildingScapeCharacter Settings\")\n//class UInventoryComponent* InventoryComponent;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category= \"BuildingScapeCharacter Settings\")\nclass UInventoryComponent* InventoryComponent;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_PlayerInventoryComponent = { "PlayerInventoryComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, PlayerInventoryComponent), Z_Construct_UClass_UInventory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_PlayerInventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_PlayerInventoryComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InteractComponent_MetaData[] = {
		{ "Category", "BuildingScapeCharacter Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BuildingScapeCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InteractComponent = { "InteractComponent", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuildingScapeCharacter, InteractComponent), Z_Construct_UClass_UInteractComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InteractComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InteractComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingScapeCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Fatness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Lifes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_bEnableMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_OnSubstractLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_Grabber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_PlayerInventoryComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingScapeCharacter_Statics::NewProp_InteractComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingScapeCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingScapeCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuildingScapeCharacter_Statics::ClassParams = {
		&ABuildingScapeCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuildingScapeCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(ABuildingScapeCharacter, 322343191);
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
