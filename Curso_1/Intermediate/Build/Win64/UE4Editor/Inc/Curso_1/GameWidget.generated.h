// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURSO_1_GameWidget_generated_h
#error "GameWidget.generated.h already included, missing '#pragma once' in GameWidget.h"
#endif
#define CURSO_1_GameWidget_generated_h

#define Curso_1_Source_Curso_1_GameWidget_h_21_SPARSE_DATA
#define Curso_1_Source_Curso_1_GameWidget_h_21_RPC_WRAPPERS \
	virtual void OnGameOver_Implementation(int32 Score); \
	virtual void SetScore_Implementation(int32 Score); \
 \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execSetScore);


#define Curso_1_Source_Curso_1_GameWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnGameOver); \
	DECLARE_FUNCTION(execSetScore);


#define Curso_1_Source_Curso_1_GameWidget_h_21_EVENT_PARMS \
	struct GameWidget_eventOnGameOver_Parms \
	{ \
		int32 Score; \
	}; \
	struct GameWidget_eventSetScore_Parms \
	{ \
		int32 Score; \
	};


#define Curso_1_Source_Curso_1_GameWidget_h_21_CALLBACK_WRAPPERS
#define Curso_1_Source_Curso_1_GameWidget_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameWidget(); \
	friend struct Z_Construct_UClass_UGameWidget_Statics; \
public: \
	DECLARE_CLASS(UGameWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Curso_1"), NO_API) \
	DECLARE_SERIALIZER(UGameWidget)


#define Curso_1_Source_Curso_1_GameWidget_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUGameWidget(); \
	friend struct Z_Construct_UClass_UGameWidget_Statics; \
public: \
	DECLARE_CLASS(UGameWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Curso_1"), NO_API) \
	DECLARE_SERIALIZER(UGameWidget)


#define Curso_1_Source_Curso_1_GameWidget_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameWidget(UGameWidget&&); \
	NO_API UGameWidget(const UGameWidget&); \
public:


#define Curso_1_Source_Curso_1_GameWidget_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameWidget(UGameWidget&&); \
	NO_API UGameWidget(const UGameWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameWidget)


#define Curso_1_Source_Curso_1_GameWidget_h_21_PRIVATE_PROPERTY_OFFSET
#define Curso_1_Source_Curso_1_GameWidget_h_18_PROLOG \
	Curso_1_Source_Curso_1_GameWidget_h_21_EVENT_PARMS


#define Curso_1_Source_Curso_1_GameWidget_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_1_Source_Curso_1_GameWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	Curso_1_Source_Curso_1_GameWidget_h_21_SPARSE_DATA \
	Curso_1_Source_Curso_1_GameWidget_h_21_RPC_WRAPPERS \
	Curso_1_Source_Curso_1_GameWidget_h_21_CALLBACK_WRAPPERS \
	Curso_1_Source_Curso_1_GameWidget_h_21_INCLASS \
	Curso_1_Source_Curso_1_GameWidget_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Curso_1_Source_Curso_1_GameWidget_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_1_Source_Curso_1_GameWidget_h_21_PRIVATE_PROPERTY_OFFSET \
	Curso_1_Source_Curso_1_GameWidget_h_21_SPARSE_DATA \
	Curso_1_Source_Curso_1_GameWidget_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Curso_1_Source_Curso_1_GameWidget_h_21_CALLBACK_WRAPPERS \
	Curso_1_Source_Curso_1_GameWidget_h_21_INCLASS_NO_PURE_DECLS \
	Curso_1_Source_Curso_1_GameWidget_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSO_1_API UClass* StaticClass<class UGameWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Curso_1_Source_Curso_1_GameWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
