// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInventory;
class UItem;
#ifdef BUILDINGESCAPE_Inventory_generated_h
#error "Inventory.generated.h already included, missing '#pragma once' in Inventory.h"
#endif
#define BUILDINGESCAPE_Inventory_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_18_DELEGATE \
struct Inventory_eventOnPlayerInventorySpecificUpdate_Parms \
{ \
	UInventory* Inventory; \
}; \
static inline void FOnPlayerInventorySpecificUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerInventorySpecificUpdate, UInventory* Inventory) \
{ \
	Inventory_eventOnPlayerInventorySpecificUpdate_Parms Parms; \
	Parms.Inventory=Inventory; \
	OnPlayerInventorySpecificUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_10_DELEGATE \
static inline void FOnPlayerInventoryUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerInventoryUpdated) \
{ \
	OnPlayerInventoryUpdated.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveCurrentItemSelected); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execCheckHaveItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execDropItem);


#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveCurrentItemSelected); \
	DECLARE_FUNCTION(execUseItem); \
	DECLARE_FUNCTION(execCheckHaveItem); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execDropItem);


#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInventory(); \
	friend struct Z_Construct_UClass_UInventory_Statics; \
public: \
	DECLARE_CLASS(UInventory, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UInventory)


#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventory(UInventory&&); \
	NO_API UInventory(const UInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventory)


#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_12_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_Inventory_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UInventory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_Inventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
