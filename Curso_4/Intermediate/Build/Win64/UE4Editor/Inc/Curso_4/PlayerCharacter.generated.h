// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CURSO_4_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define CURSO_4_PlayerCharacter_generated_h

#define Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_SPARSE_DATA
#define Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInputAxisMoveRight); \
	DECLARE_FUNCTION(execOnInputAxisMoveForward); \
	DECLARE_FUNCTION(execOnInputLookUp); \
	DECLARE_FUNCTION(execOnInputAxisTurn);


#define Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInputAxisMoveRight); \
	DECLARE_FUNCTION(execOnInputAxisMoveForward); \
	DECLARE_FUNCTION(execOnInputLookUp); \
	DECLARE_FUNCTION(execOnInputAxisTurn);


#define Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_4"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_4"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AIPerceptionStimuliSource() { return STRUCT_OFFSET(APlayerCharacter, AIPerceptionStimuliSource); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(APlayerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(APlayerCharacter, FollowCamera); }


#define Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_12_PROLOG
#define Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_SPARSE_DATA \
	Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_RPC_WRAPPERS \
	Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_INCLASS \
	Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_SPARSE_DATA \
	Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSO_4_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Curso_4_Source_Curso_4_Public_Characters_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
