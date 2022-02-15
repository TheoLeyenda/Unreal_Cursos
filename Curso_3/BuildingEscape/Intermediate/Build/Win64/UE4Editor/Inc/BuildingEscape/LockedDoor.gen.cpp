// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/LockedDoor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockedDoor() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALockedDoor_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ALockedDoor();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ADoor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UItem_NoRegister();
// End Cross Module References
	void ALockedDoor::StaticRegisterNativesALockedDoor()
	{
	}
	UClass* Z_Construct_UClass_ALockedDoor_NoRegister()
	{
		return ALockedDoor::StaticClass();
	}
	struct Z_Construct_UClass_ALockedDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemToOpenDoor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemToOpenDoor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALockedDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADoor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALockedDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LockedDoor.h" },
		{ "ModuleRelativePath", "Public/LockedDoor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALockedDoor_Statics::NewProp_ItemToOpenDoor_MetaData[] = {
		{ "Category", "LockedDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LockedDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALockedDoor_Statics::NewProp_ItemToOpenDoor = { "ItemToOpenDoor", nullptr, (EPropertyFlags)0x0012000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALockedDoor, ItemToOpenDoor), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALockedDoor_Statics::NewProp_ItemToOpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALockedDoor_Statics::NewProp_ItemToOpenDoor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALockedDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALockedDoor_Statics::NewProp_ItemToOpenDoor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALockedDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALockedDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALockedDoor_Statics::ClassParams = {
		&ALockedDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALockedDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALockedDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALockedDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALockedDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALockedDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALockedDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALockedDoor, 4113872905);
	template<> BUILDINGESCAPE_API UClass* StaticClass<ALockedDoor>()
	{
		return ALockedDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALockedDoor(Z_Construct_UClass_ALockedDoor, &ALockedDoor::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("ALockedDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALockedDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
