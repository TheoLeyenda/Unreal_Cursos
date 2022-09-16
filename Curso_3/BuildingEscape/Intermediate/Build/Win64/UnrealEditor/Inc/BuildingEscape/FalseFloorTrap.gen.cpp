// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/FalseFloorTrap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFalseFloorTrap() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AFalseFloorTrap_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AFalseFloorTrap();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_ATrap();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void AFalseFloorTrap::StaticRegisterNativesAFalseFloorTrap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFalseFloorTrap);
	UClass* Z_Construct_UClass_AFalseFloorTrap_NoRegister()
	{
		return AFalseFloorTrap::StaticClass();
	}
	struct Z_Construct_UClass_AFalseFloorTrap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectsFloor_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectsFloor_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectsFloor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFalseFloorTrap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATrap,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseFloorTrap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FalseFloorTrap.h" },
		{ "ModuleRelativePath", "Public/FalseFloorTrap.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFalseFloorTrap_Statics::NewProp_ObjectsFloor_Inner = { "ObjectsFloor", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFalseFloorTrap_Statics::NewProp_ObjectsFloor_MetaData[] = {
		{ "Category", "FalseFloorTrap" },
		{ "ModuleRelativePath", "Public/FalseFloorTrap.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFalseFloorTrap_Statics::NewProp_ObjectsFloor = { "ObjectsFloor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFalseFloorTrap, ObjectsFloor), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFalseFloorTrap_Statics::NewProp_ObjectsFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFalseFloorTrap_Statics::NewProp_ObjectsFloor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFalseFloorTrap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseFloorTrap_Statics::NewProp_ObjectsFloor_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFalseFloorTrap_Statics::NewProp_ObjectsFloor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFalseFloorTrap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFalseFloorTrap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFalseFloorTrap_Statics::ClassParams = {
		&AFalseFloorTrap::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFalseFloorTrap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFalseFloorTrap_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFalseFloorTrap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFalseFloorTrap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFalseFloorTrap()
	{
		if (!Z_Registration_Info_UClass_AFalseFloorTrap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFalseFloorTrap.OuterSingleton, Z_Construct_UClass_AFalseFloorTrap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFalseFloorTrap.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<AFalseFloorTrap>()
	{
		return AFalseFloorTrap::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFalseFloorTrap);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_FalseFloorTrap_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_FalseFloorTrap_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFalseFloorTrap, AFalseFloorTrap::StaticClass, TEXT("AFalseFloorTrap"), &Z_Registration_Info_UClass_AFalseFloorTrap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFalseFloorTrap), 1342919759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_FalseFloorTrap_h_3534230946(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_FalseFloorTrap_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_FalseFloorTrap_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
