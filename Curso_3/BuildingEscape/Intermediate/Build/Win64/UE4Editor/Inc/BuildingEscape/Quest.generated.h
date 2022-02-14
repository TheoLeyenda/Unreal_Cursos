// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AQuest;
struct FDataPlayer;
#ifdef BUILDINGESCAPE_Quest_generated_h
#error "Quest.generated.h already included, missing '#pragma once' in Quest.h"
#endif
#define BUILDINGESCAPE_Quest_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActionQuest_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct();


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FActionQuest>();

#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_59_DELEGATE \
struct Quest_eventOnFinishQuest_Parms \
{ \
	AQuest* Quest; \
}; \
static inline void FOnFinishQuest_DelegateWrapper(const FMulticastScriptDelegate& OnFinishQuest, AQuest* Quest) \
{ \
	Quest_eventOnFinishQuest_Parms Parms; \
	Parms.Quest=Quest; \
	OnFinishQuest.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_20_DELEGATE \
static inline void FOnUpdateQuest_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateQuest) \
{ \
	OnUpdateQuest.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckStatus); \
	DECLARE_FUNCTION(execCheckCompleteQuest);


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckStatus); \
	DECLARE_FUNCTION(execCheckCompleteQuest);


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuest(); \
	friend struct Z_Construct_UClass_AQuest_Statics; \
public: \
	DECLARE_CLASS(AQuest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AQuest)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_INCLASS \
private: \
	static void StaticRegisterNativesAQuest(); \
	friend struct Z_Construct_UClass_AQuest_Statics; \
public: \
	DECLARE_CLASS(AQuest, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(AQuest)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuest(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuest(AQuest&&); \
	NO_API AQuest(const AQuest&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuest(AQuest&&); \
	NO_API AQuest(const AQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuest); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AQuest)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_55_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class AQuest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_QuestSystem_Quest_h


#define FOREACH_ENUM_EQUESTSTATE(op) \
	op(Available) \
	op(InProgress) \
	op(Cancelled) \
	op(Completed) \
	op(Failed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
