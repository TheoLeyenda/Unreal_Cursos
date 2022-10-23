// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuestEvaluatorComponent;
#ifdef BUILDINGESCAPE_QuestManager_generated_h
#error "QuestManager.generated.h already included, missing '#pragma once' in QuestManager.h"
#endif
#define BUILDINGESCAPE_QuestManager_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_10_DELEGATE \
static inline void FOnFinishAllQuest_DelegateWrapper(const FMulticastScriptDelegate& OnFinishAllQuest) \
{ \
	OnFinishAllQuest.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestInfo_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct();


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FQuestInfo>();

#define FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadQuestsInfoDataTable); \
	DECLARE_FUNCTION(execSendEventFinishAllQuest); \
	DECLARE_FUNCTION(execCheckQuests); \
	DECLARE_FUNCTION(execChangeStateQuest); \
	DECLARE_FUNCTION(execFindQuestEvaluatorComponents);


#define FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadQuestsInfoDataTable); \
	DECLARE_FUNCTION(execSendEventFinishAllQuest); \
	DECLARE_FUNCTION(execCheckQuests); \
	DECLARE_FUNCTION(execChangeStateQuest); \
	DECLARE_FUNCTION(execFindQuestEvaluatorComponents);


#define FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuestManager(); \
	friend struct Z_Construct_UClass_AQuestManager_Statics; \
public: \
	DECLARE_CLASS(AQuestManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AQuestManager)


#define FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAQuestManager(); \
	friend struct Z_Construct_UClass_AQuestManager_Statics; \
public: \
	DECLARE_CLASS(AQuestManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AQuestManager)


#define FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuestManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuestManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestManager(AQuestManager&&); \
	NO_API AQuestManager(const AQuestManager&); \
public:


#define FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestManager(AQuestManager&&); \
	NO_API AQuestManager(const AQuestManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuestManager)


#define FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_24_PROLOG
#define FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_INCLASS \
	FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_INCLASS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class AQuestManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
