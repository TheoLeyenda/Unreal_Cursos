// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BUILDINGESCAPE_SaveDataManager_generated_h
#error "SaveDataManager.generated.h already included, missing '#pragma once' in SaveDataManager.h"
#endif
#define BUILDINGESCAPE_SaveDataManager_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorSpawnInfo_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct();


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FActorSpawnInfo>();

#define BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execSave);


#define BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execSave);


#define BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveDataManager(); \
	friend struct Z_Construct_UClass_USaveDataManager_Statics; \
public: \
	DECLARE_CLASS(USaveDataManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(USaveDataManager)


#define BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUSaveDataManager(); \
	friend struct Z_Construct_UClass_USaveDataManager_Statics; \
public: \
	DECLARE_CLASS(USaveDataManager, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(USaveDataManager)


#define BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveDataManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataManager(USaveDataManager&&); \
	NO_API USaveDataManager(const USaveDataManager&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveDataManager() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveDataManager(USaveDataManager&&); \
	NO_API USaveDataManager(const USaveDataManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveDataManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveDataManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveDataManager)


#define BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_56_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h_59_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class USaveDataManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveDataManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
