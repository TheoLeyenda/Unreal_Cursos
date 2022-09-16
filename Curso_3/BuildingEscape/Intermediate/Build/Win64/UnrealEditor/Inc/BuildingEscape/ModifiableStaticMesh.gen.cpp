// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/ModifiableStaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModifiableStaticMesh() {}
// Cross Module References
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AModifiableStaticMesh_NoRegister();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_AModifiableStaticMesh();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AModifiableStaticMesh::StaticRegisterNativesAModifiableStaticMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModifiableStaticMesh);
	UClass* Z_Construct_UClass_AModifiableStaticMesh_NoRegister()
	{
		return AModifiableStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_AModifiableStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModifiableStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifiableStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ModifiableStaticMesh.h" },
		{ "ModuleRelativePath", "Public/ModifiableStaticMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifiableStaticMesh_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "ModifiableStaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModifiableStaticMesh.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModifiableStaticMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifiableStaticMesh, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModifiableStaticMesh_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModifiableStaticMesh_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModifiableStaticMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifiableStaticMesh_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModifiableStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModifiableStaticMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModifiableStaticMesh_Statics::ClassParams = {
		&AModifiableStaticMesh::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AModifiableStaticMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AModifiableStaticMesh_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AModifiableStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AModifiableStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AModifiableStaticMesh()
	{
		if (!Z_Registration_Info_UClass_AModifiableStaticMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModifiableStaticMesh.OuterSingleton, Z_Construct_UClass_AModifiableStaticMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AModifiableStaticMesh.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<AModifiableStaticMesh>()
	{
		return AModifiableStaticMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModifiableStaticMesh);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ModifiableStaticMesh_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ModifiableStaticMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AModifiableStaticMesh, AModifiableStaticMesh::StaticClass, TEXT("AModifiableStaticMesh"), &Z_Registration_Info_UClass_AModifiableStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModifiableStaticMesh), 3418084995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ModifiableStaticMesh_h_367737558(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ModifiableStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_ModifiableStaticMesh_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
