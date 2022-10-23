// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACombinePanel;
#ifdef BUILDINGESCAPE_CombinePanel_generated_h
#error "CombinePanel.generated.h already included, missing '#pragma once' in CombinePanel.h"
#endif
#define BUILDINGESCAPE_CombinePanel_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_22_DELEGATE \
struct CombinePanel_eventOnCompleteCombinePanel_Parms \
{ \
	ACombinePanel* CombinePanel; \
}; \
static inline void FOnCompleteCombinePanel_DelegateWrapper(const FMulticastScriptDelegate& OnCompleteCombinePanel, ACombinePanel* CombinePanel) \
{ \
	CombinePanel_eventOnCompleteCombinePanel_Parms Parms; \
	Parms.CombinePanel=CombinePanel; \
	OnCompleteCombinePanel.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_RPC_WRAPPERS
#define FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACombinePanel(); \
	friend struct Z_Construct_UClass_ACombinePanel_Statics; \
public: \
	DECLARE_CLASS(ACombinePanel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ACombinePanel)


#define FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACombinePanel(); \
	friend struct Z_Construct_UClass_ACombinePanel_Statics; \
public: \
	DECLARE_CLASS(ACombinePanel, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(ACombinePanel)


#define FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACombinePanel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACombinePanel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombinePanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombinePanel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombinePanel(ACombinePanel&&); \
	NO_API ACombinePanel(const ACombinePanel&); \
public:


#define FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACombinePanel(ACombinePanel&&); \
	NO_API ACombinePanel(const ACombinePanel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACombinePanel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACombinePanel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACombinePanel)


#define FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_11_PROLOG
#define FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_INCLASS \
	FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_INCLASS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class ACombinePanel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_CombinePanel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
