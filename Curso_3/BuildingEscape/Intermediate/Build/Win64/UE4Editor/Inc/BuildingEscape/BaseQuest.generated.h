// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseQuest;
struct FDataPlayer;
#ifdef BUILDINGESCAPE_BaseQuest_generated_h
#error "BaseQuest.generated.h already included, missing '#pragma once' in BaseQuest.h"
#endif
#define BUILDINGESCAPE_BaseQuest_generated_h

#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestStructInfo_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FQuestStructInfo>();

#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActionQuest_Statics; \
	BUILDINGESCAPE_API static class UScriptStruct* StaticStruct();


template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<struct FActionQuest>();

#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_93_DELEGATE \
static inline void FOnUpdateQuest_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateQuest) \
{ \
	OnUpdateQuest.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_92_DELEGATE \
struct BaseQuest_eventOnFinishQuest_Parms \
{ \
	UBaseQuest* Quest; \
}; \
static inline void FOnFinishQuest_DelegateWrapper(const FMulticastScriptDelegate& OnFinishQuest, UBaseQuest* Quest) \
{ \
	BaseQuest_eventOnFinishQuest_Parms Parms; \
	Parms.Quest=Quest; \
	OnFinishQuest.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCheckStatus);


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCheckStatus);


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseQuest(); \
	friend struct Z_Construct_UClass_UBaseQuest_Statics; \
public: \
	DECLARE_CLASS(UBaseQuest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuest)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_INCLASS \
private: \
	static void StaticRegisterNativesUBaseQuest(); \
	friend struct Z_Construct_UClass_UBaseQuest_Statics; \
public: \
	DECLARE_CLASS(UBaseQuest, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UBaseQuest)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseQuest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseQuest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuest(UBaseQuest&&); \
	NO_API UBaseQuest(const UBaseQuest&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseQuest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseQuest(UBaseQuest&&); \
	NO_API UBaseQuest(const UBaseQuest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseQuest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseQuest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseQuest)


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_88_PROLOG
#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UBaseQuest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h


#define FOREACH_ENUM_EQUESTSTATE(op) \
	op(Available) \
	op(InProgress) \
	op(Cancelled) \
	op(Completed) \
	op(Failed) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
