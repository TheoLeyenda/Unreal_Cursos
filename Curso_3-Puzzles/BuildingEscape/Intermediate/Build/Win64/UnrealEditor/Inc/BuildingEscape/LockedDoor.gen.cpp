// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/LockedDoor.h"
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
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALockedDoor);
	UClass* Z_Construct_UClass_ALockedDoor_NoRegister()
	{
		return ALockedDoor::StaticClass();
	}
	struct Z_Construct_UClass_ALockedDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemToOpenDoor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemToOpenDoor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALockedDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADoor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALockedDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LockedDoor.h" },
		{ "ModuleRelativePath", "Public/LockedDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALockedDoor_Statics::NewProp_ItemToOpenDoor_MetaData[] = {
		{ "Category", "LockedDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LockedDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALockedDoor_Statics::NewProp_ItemToOpenDoor = { "ItemToOpenDoor", nullptr, (EPropertyFlags)0x0012000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALockedDoor, ItemToOpenDoor), Z_Construct_UClass_UItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALockedDoor_Statics::NewProp_ItemToOpenDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALockedDoor_Statics::NewProp_ItemToOpenDoor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALockedDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALockedDoor_Statics::NewProp_ItemToOpenDoor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALockedDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALockedDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALockedDoor_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_ALockedDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALockedDoor.OuterSingleton, Z_Construct_UClass_ALockedDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALockedDoor.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<ALockedDoor>()
	{
		return ALockedDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALockedDoor);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LockedDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LockedDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALockedDoor, ALockedDoor::StaticClass, TEXT("ALockedDoor"), &Z_Registration_Info_UClass_ALockedDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALockedDoor), 1801062838U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LockedDoor_h_2251328929(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LockedDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_LockedDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
