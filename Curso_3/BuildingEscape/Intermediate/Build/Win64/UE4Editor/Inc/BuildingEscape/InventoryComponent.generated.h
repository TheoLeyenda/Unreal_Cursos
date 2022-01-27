// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define BUILDINGESCAPE_InventoryComponent_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_10_DELEGATE \
static inline void FOnInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnInventoryUpdated) \
{ \
	OnInventoryUpdated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_12_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS