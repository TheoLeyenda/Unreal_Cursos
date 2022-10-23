// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef BUILDINGESCAPE_SaveLoadData_generated_h
#error "SaveLoadData.generated.h already included, missing '#pragma once' in SaveLoadData.h"
#endif
#define BUILDINGESCAPE_SaveLoadData_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execSave);


#define FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoad); \
	DECLARE_FUNCTION(execSave);


#define FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveLoadData(); \
	friend struct Z_Construct_UClass_USaveLoadData_Statics; \
public: \
	DECLARE_CLASS(USaveLoadData, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(USaveLoadData)


#define FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUSaveLoadData(); \
	friend struct Z_Construct_UClass_USaveLoadData_Statics; \
public: \
	DECLARE_CLASS(USaveLoadData, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(USaveLoadData)


#define FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveLoadData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveLoadData) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveLoadData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveLoadData); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveLoadData(USaveLoadData&&); \
	NO_API USaveLoadData(const USaveLoadData&); \
public:


#define FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveLoadData() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveLoadData(USaveLoadData&&); \
	NO_API USaveLoadData(const USaveLoadData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveLoadData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveLoadData); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USaveLoadData)


#define FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_12_PROLOG
#define FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_INCLASS \
	FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_INCLASS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class USaveLoadData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_SaveSystem_SaveLoadData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
