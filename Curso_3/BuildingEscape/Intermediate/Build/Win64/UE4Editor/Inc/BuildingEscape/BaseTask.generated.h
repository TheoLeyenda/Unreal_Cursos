// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDataPlayer;
#ifdef BUILDINGESCAPE_BaseTask_generated_h
#error "BaseTask.generated.h already included, missing '#pragma once' in BaseTask.h"
#endif
#define BUILDINGESCAPE_BaseTask_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_14_DELEGATE \
struct _Script_BuildingEscape_eventOnUpdateTask_Parms \
{ \
	FDataPlayer DataPlayer; \
	bool bForceSend; \
}; \
static inline void FOnUpdateTask_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateTask, FDataPlayer DataPlayer, bool bForceSend) \
{ \
	_Script_BuildingEscape_eventOnUpdateTask_Parms Parms; \
	Parms.DataPlayer=DataPlayer; \
	Parms.bForceSend=bForceSend ? true : false; \
	OnUpdateTask.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSettingDataBaseTask); \
	DECLARE_FUNCTION(execFindInformation); \
	DECLARE_FUNCTION(execSendEventUpdateTask);


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSettingDataBaseTask); \
	DECLARE_FUNCTION(execFindInformation); \
	DECLARE_FUNCTION(execSendEventUpdateTask);


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseTask(); \
	friend struct Z_Construct_UClass_UBaseTask_Statics; \
public: \
	DECLARE_CLASS(UBaseTask, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UBaseTask)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUBaseTask(); \
	friend struct Z_Construct_UClass_UBaseTask_Statics; \
public: \
	DECLARE_CLASS(UBaseTask, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UBaseTask)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseTask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseTask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseTask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseTask(UBaseTask&&); \
	NO_API UBaseTask(const UBaseTask&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseTask(UBaseTask&&); \
	NO_API UBaseTask(const UBaseTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseTask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseTask)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_16_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UBaseTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
