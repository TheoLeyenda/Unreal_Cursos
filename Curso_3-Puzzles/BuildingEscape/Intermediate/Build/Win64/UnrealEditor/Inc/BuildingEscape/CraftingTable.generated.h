// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ACraftingTable;
#ifdef BUILDINGESCAPE_CraftingTable_generated_h
#error "CraftingTable.generated.h already included, missing '#pragma once' in CraftingTable.h"
#endif
#define BUILDINGESCAPE_CraftingTable_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorsRequired_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct();


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FActorsRequired>();

#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorsPlaceInfo_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct();


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FActorsPlaceInfo>();

#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMatrixActorsPlace_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct();


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FMatrixActorsPlace>();

#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_71_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCraftingInfo_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct();


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FCraftingInfo>();

#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_88_DELEGATE \
struct CraftingTable_eventOnCraftingActor_Parms \
{ \
	TSubclassOf<AActor>  ActorCraftedClass; \
	ACraftingTable* CraftingTable; \
}; \
static inline void FOnCraftingActor_DelegateWrapper(const FMulticastScriptDelegate& OnCraftingActor, TSubclassOf<AActor>  ActorCraftedClass, ACraftingTable* CraftingTable) \
{ \
	CraftingTable_eventOnCraftingActor_Parms Parms; \
	Parms.ActorCraftedClass=ActorCraftedClass; \
	Parms.CraftingTable=CraftingTable; \
	OnCraftingActor.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_RPC_WRAPPERS
#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACraftingTable(); \
	friend struct Z_Construct_UClass_ACraftingTable_Statics; \
public: \
	DECLARE_CLASS(ACraftingTable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ACraftingTable)


#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_INCLASS \
private: \
	static void StaticRegisterNativesACraftingTable(); \
	friend struct Z_Construct_UClass_ACraftingTable_Statics; \
public: \
	DECLARE_CLASS(ACraftingTable, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ACraftingTable)


#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_STANDARD_CONSTRUCTORS \
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


#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACraftingTable(ACraftingTable&&); \
	NO_API ACraftingTable(const ACraftingTable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACraftingTable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACraftingTable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACraftingTable)


#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_84_PROLOG
#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_INCLASS \
	FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_INCLASS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ACraftingTable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_CraftingTable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
