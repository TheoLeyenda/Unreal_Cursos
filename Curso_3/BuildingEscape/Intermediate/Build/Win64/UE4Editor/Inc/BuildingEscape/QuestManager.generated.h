// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuestEvaluatorComponent;
enum class EQuestState : int32;
#ifdef BUILDINGESCAPE_QuestManager_generated_h
#error "QuestManager.generated.h already included, missing '#pragma once' in QuestManager.h"
#endif
#define BUILDINGESCAPE_QuestManager_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_10_DELEGATE \
static inline void FOnFinishAllQuest_DelegateWrapper(const FMulticastScriptDelegate& OnFinishAllQuest) \
{ \
	OnFinishAllQuest.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendEventFinishAllQuest); \
	DECLARE_FUNCTION(execCheckQuests); \
	DECLARE_FUNCTION(execChangeStateQuest); \
	DECLARE_FUNCTION(execFindQuestEvaluatorComponents);


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendEventFinishAllQuest); \
	DECLARE_FUNCTION(execCheckQuests); \
	DECLARE_FUNCTION(execChangeStateQuest); \
	DECLARE_FUNCTION(execFindQuestEvaluatorComponents);


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuestManager(); \
	friend struct Z_Construct_UClass_AQuestManager_Statics; \
public: \
	DECLARE_CLASS(AQuestManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AQuestManager)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAQuestManager(); \
	friend struct Z_Construct_UClass_AQuestManager_Statics; \
public: \
	DECLARE_CLASS(AQuestManager, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AQuestManager)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_STANDARD_CONSTRUCTORS \
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


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuestManager(AQuestManager&&); \
	NO_API AQuestManager(const AQuestManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuestManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuestManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuestManager)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_12_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class AQuestManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
