// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuestEvaluatorComponent;
struct FDataPlayer;
#ifdef BUILDINGESCAPE_QuestEvaluatorComponent_generated_h
#error "QuestEvaluatorComponent.generated.h already included, missing '#pragma once' in QuestEvaluatorComponent.h"
#endif
#define BUILDINGESCAPE_QuestEvaluatorComponent_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_18_DELEGATE \
struct QuestEvaluatorComponent_eventOnSettingDataPlayer_Parms \
{ \
	UQuestEvaluatorComponent* QuestEvaluatorComponent; \
	bool bForceSend; \
}; \
static inline void FOnSettingDataPlayer_DelegateWrapper(const FMulticastScriptDelegate& OnSettingDataPlayer, UQuestEvaluatorComponent* QuestEvaluatorComponent, bool bForceSend) \
{ \
	QuestEvaluatorComponent_eventOnSettingDataPlayer_Parms Parms; \
	Parms.QuestEvaluatorComponent=QuestEvaluatorComponent; \
	Parms.bForceSend=bForceSend ? true : false; \
	OnSettingDataPlayer.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSettingDataPlayer);


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSettingDataPlayer);


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestEvaluatorComponent(); \
	friend struct Z_Construct_UClass_UQuestEvaluatorComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestEvaluatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UQuestEvaluatorComponent)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUQuestEvaluatorComponent(); \
	friend struct Z_Construct_UClass_UQuestEvaluatorComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestEvaluatorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UQuestEvaluatorComponent)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestEvaluatorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestEvaluatorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestEvaluatorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestEvaluatorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestEvaluatorComponent(UQuestEvaluatorComponent&&); \
	NO_API UQuestEvaluatorComponent(const UQuestEvaluatorComponent&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestEvaluatorComponent(UQuestEvaluatorComponent&&); \
	NO_API UQuestEvaluatorComponent(const UQuestEvaluatorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestEvaluatorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestEvaluatorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestEvaluatorComponent)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_13_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UQuestEvaluatorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_QuestSystem_QuestEvaluatorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
