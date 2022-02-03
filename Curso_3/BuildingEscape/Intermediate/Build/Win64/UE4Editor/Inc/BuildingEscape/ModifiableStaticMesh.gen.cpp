// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/ModifiableStaticMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
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
	UClass* Z_Construct_UClass_AModifiableStaticMesh_NoRegister()
	{
		return AModifiableStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_AModifiableStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModifiableStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifiableStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ModifiableStaticMesh.h" },
		{ "ModuleRelativePath", "Public/ModifiableStaticMesh.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModifiableStaticMesh_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "ModifiableStaticMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ModifiableStaticMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AModifiableStaticMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AModifiableStaticMesh, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AModifiableStaticMesh_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AModifiableStaticMesh_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AModifiableStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AModifiableStaticMesh_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModifiableStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModifiableStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AModifiableStaticMesh_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AModifiableStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AModifiableStaticMesh, 1515901660);
	template<> BUILDINGESCAPE_API UClass* StaticClass<AModifiableStaticMesh>()
	{
		return AModifiableStaticMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AModifiableStaticMesh(Z_Construct_UClass_AModifiableStaticMesh, &AModifiableStaticMesh::StaticClass, TEXT("/Script/BuildingEscape"), TEXT("AModifiableStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModifiableStaticMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
