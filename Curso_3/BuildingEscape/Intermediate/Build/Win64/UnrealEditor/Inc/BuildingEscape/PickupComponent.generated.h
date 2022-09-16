// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_PickupComponent_generated_h
#error "PickupComponent.generated.h already included, missing '#pragma once' in PickupComponent.h"
#endif
#define BUILDINGESCAPE_PickupComponent_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_RPC_WRAPPERS
#define FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPickupComponent(); \
	friend struct Z_Construct_UClass_UPickupComponent_Statics; \
public: \
	DECLARE_CLASS(UPickupComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UPickupComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UPickupComponent*>(this); }


#define FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPickupComponent(); \
	friend struct Z_Construct_UClass_UPickupComponent_Statics; \
public: \
	DECLARE_CLASS(UPickupComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UPickupComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UPickupComponent*>(this); }


#define FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPickupComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPickupComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPickupComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPickupComponent(UPickupComponent&&); \
	NO_API UPickupComponent(const UPickupComponent&); \
public:


#define FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPickupComponent(UPickupComponent&&); \
	NO_API UPickupComponent(const UPickupComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPickupComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPickupComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPickupComponent)


#define FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_12_PROLOG
#define FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_INCLASS \
	FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UPickupComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_PickupComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
