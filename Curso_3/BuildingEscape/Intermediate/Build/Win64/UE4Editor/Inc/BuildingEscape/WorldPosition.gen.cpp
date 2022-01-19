// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/WorldPosition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldPosition() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UWorldPosition_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UWorldPosition();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
// End Cross Module References
	void UWorldPosition::StaticRegisterNativesUWorldPosition()
	{
	}
	UClass* Z_Construct_UClass_UWorldPosition_NoRegister()
	{
		return UWorldPosition::StaticClass();
	}
	struct Z_Construct_UClass_UWorldPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseShowMessegeLogs_MetaData[];
#endif
		static void NewProp_bUseShowMessegeLogs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseShowMessegeLogs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWorldPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPosition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WorldPosition.h" },
		{ "ModuleRelativePath", "WorldPosition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWorldPosition_Statics::NewProp_bUseShowMessegeLogs_MetaData[] = {
		{ "Category", "WorldPosition" },
		{ "ModuleRelativePath", "WorldPosition.h" },
	};
#endif
	void Z_Construct_UClass_UWorldPosition_Statics::NewProp_bUseShowMessegeLogs_SetBit(void* Obj)
	{
		((UWorldPosition*)Obj)->bUseShowMessegeLogs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWorldPosition_Statics::NewProp_bUseShowMessegeLogs = { "bUseShowMessegeLogs", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWorldPosition), &Z_Construct_UClass_UWorldPosition_Statics::NewProp_bUseShowMessegeLogs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWorldPosition_Statics::NewProp_bUseShowMessegeLogs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPosition_Statics::NewProp_bUseShowMessegeLogs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWorldPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWorldPosition_Statics::NewProp_bUseShowMessegeLogs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWorldPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWorldPosition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWorldPosition_Statics::ClassParams = {
		&UWorldPosition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWorldPosition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPosition_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWorldPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWorldPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWorldPosition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWorldPosition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorldPosition, 4281118000);
	template<> BUILDINGESCAPE_API UClass* StaticClass<UWorldPosition>()
	{
		return UWorldPosition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorldPosition(Z_Construct_UClass_UWorldPosition, &UWorldPosition::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("UWorldPosition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorldPosition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
