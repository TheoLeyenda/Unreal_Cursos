// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDataPlayer;
#ifdef BUILDINGESCAPE_Task_generated_h
#error "Task.generated.h already included, missing '#pragma once' in Task.h"
#endif
#define BUILDINGESCAPE_Task_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_11_DELEGATE \
struct _Script_BuildingEscape_eventOnUpdateTask_Parms \
{ \
	FDataPlayer DataPlayer; \
}; \
static inline void FOnUpdateTask_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateTask, FDataPlayer DataPlayer) \
{ \
	_Script_BuildingEscape_eventOnUpdateTask_Parms Parms; \
	Parms.DataPlayer=DataPlayer; \
	OnUpdateTask.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindInformation); \
	DECLARE_FUNCTION(execSendEventUpdateTask);


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindInformation); \
	DECLARE_FUNCTION(execSendEventUpdateTask);


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATask(); \
	friend struct Z_Construct_UClass_ATask_Statics; \
public: \
	DECLARE_CLASS(ATask, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ATask)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATask(); \
	friend struct Z_Construct_UClass_ATask_Statics; \
public: \
	DECLARE_CLASS(ATask, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ATask)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATask(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATask) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATask); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATask(ATask&&); \
	NO_API ATask(const ATask&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATask(ATask&&); \
	NO_API ATask(const ATask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATask); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATask)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_13_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ATask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Task_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
