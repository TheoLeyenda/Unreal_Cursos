// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BUILDINGESCAPE_CraftingTable_generated_h
#error "CraftingTable.generated.h already included, missing '#pragma once' in CraftingTable.h"
#endif
#define BUILDINGESCAPE_CraftingTable_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCraftingInfo_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct();


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FCraftingInfo>();

#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct();


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FActorsPlaceInfo>();

#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACraftingTable(); \
	friend struct Z_Construct_UClass_ACraftingTable_Statics; \
public: \
	DECLARE_CLASS(ACraftingTable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ACraftingTable)


#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_INCLASS \
private: \
	static void StaticRegisterNativesACraftingTable(); \
	friend struct Z_Construct_UClass_ACraftingTable_Statics; \
public: \
	DECLARE_CLASS(ACraftingTable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ACraftingTable)


#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACraftingTable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACraftingTable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACraftingTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACraftingTable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACraftingTable(ACraftingTable&&); \
	NO_API ACraftingTable(const ACraftingTable&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACraftingTable(ACraftingTable&&); \
	NO_API ACraftingTable(const ACraftingTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACraftingTable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACraftingTable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACraftingTable)


#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CountSlotsCraftingTable() { return STRUCT_OFFSET(ACraftingTable, CountSlotsCraftingTable); } \
	FORCEINLINE static uint32 __PPO__ActorsPlaceInfo() { return STRUCT_OFFSET(ACraftingTable, ActorsPlaceInfo); } \
	FORCEINLINE static uint32 __PPO__CraftingInfo() { return STRUCT_OFFSET(ACraftingTable, CraftingInfo); } \
	FORCEINLINE static uint32 __PPO__ObjectSpawner() { return STRUCT_OFFSET(ACraftingTable, ObjectSpawner); }


#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_32_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ACraftingTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
