// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_DropItem_generated_h
#error "DropItem.generated.h already included, missing '#pragma once' in DropItem.h"
#endif
#define BUILDINGESCAPE_DropItem_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDropItem(); \
	friend struct Z_Construct_UClass_UDropItem_Statics; \
public: \
	DECLARE_CLASS(UDropItem, UItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UDropItem)


#define BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUDropItem(); \
	friend struct Z_Construct_UClass_UDropItem_Statics; \
public: \
	DECLARE_CLASS(UDropItem, UItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UDropItem)


#define BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDropItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDropItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDropItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDropItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDropItem(UDropItem&&); \
	NO_API UDropItem(const UDropItem&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDropItem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDropItem(UDropItem&&); \
	NO_API UDropItem(const UDropItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDropItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDropItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDropItem)


#define BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SpawnOffsetZ() { return STRUCT_OFFSET(UDropItem, SpawnOffsetZ); } \
	FORCEINLINE static uint32 __PPO__BluprintActorDrop() { return STRUCT_OFFSET(UDropItem, BluprintActorDrop); }


#define BuildingEscape_Source_BuildingEscape_Public_DropItem_h_12_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_DropItem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UDropItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_DropItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
