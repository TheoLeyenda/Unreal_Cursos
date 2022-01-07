// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef CURSO_1_SpaceShooterGameMode_generated_h
#error "SpaceShooterGameMode.generated.h already included, missing '#pragma once' in SpaceShooterGameMode.h"
#endif
#define CURSO_1_SpaceShooterGameMode_generated_h

#define Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_SPARSE_DATA
#define Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget);


#define Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget);


#define Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpaceShooterGameMode(); \
	friend struct Z_Construct_UClass_ASpaceShooterGameMode_Statics; \
public: \
	DECLARE_CLASS(ASpaceShooterGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_1"), NO_API) \
	DECLARE_SERIALIZER(ASpaceShooterGameMode)


#define Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesASpaceShooterGameMode(); \
	friend struct Z_Construct_UClass_ASpaceShooterGameMode_Statics; \
public: \
	DECLARE_CLASS(ASpaceShooterGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Curso_1"), NO_API) \
	DECLARE_SERIALIZER(ASpaceShooterGameMode)


#define Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceShooterGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceShooterGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceShooterGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceShooterGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceShooterGameMode(ASpaceShooterGameMode&&); \
	NO_API ASpaceShooterGameMode(const ASpaceShooterGameMode&); \
public:


#define Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpaceShooterGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpaceShooterGameMode(ASpaceShooterGameMode&&); \
	NO_API ASpaceShooterGameMode(const ASpaceShooterGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpaceShooterGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpaceShooterGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpaceShooterGameMode)


#define Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MIN_TIME_SPAWN_ENEMY() { return STRUCT_OFFSET(ASpaceShooterGameMode, MIN_TIME_SPAWN_ENEMY); } \
	FORCEINLINE static uint32 __PPO__MAX_TIME_SPAWN_ENEMY() { return STRUCT_OFFSET(ASpaceShooterGameMode, MAX_TIME_SPAWN_ENEMY); } \
	FORCEINLINE static uint32 __PPO__TIME_TO_MAX_DIFICULTY() { return STRUCT_OFFSET(ASpaceShooterGameMode, TIME_TO_MAX_DIFICULTY); } \
	FORCEINLINE static uint32 __PPO__MIN_TIME_SPAWN_POWERUP() { return STRUCT_OFFSET(ASpaceShooterGameMode, MIN_TIME_SPAWN_POWERUP); } \
	FORCEINLINE static uint32 __PPO__MAX_TIME_SPAWN_POWERUP() { return STRUCT_OFFSET(ASpaceShooterGameMode, MAX_TIME_SPAWN_POWERUP); } \
	FORCEINLINE static uint32 __PPO__MIN_POS_X_SPAWN_POWERUP() { return STRUCT_OFFSET(ASpaceShooterGameMode, MIN_POS_X_SPAWN_POWERUP); } \
	FORCEINLINE static uint32 __PPO__MAX_POS_X_SPAWN_POWERUP() { return STRUCT_OFFSET(ASpaceShooterGameMode, MAX_POS_X_SPAWN_POWERUP); } \
	FORCEINLINE static uint32 __PPO__MIN_POS_Y_SPAWN_POWERUP() { return STRUCT_OFFSET(ASpaceShooterGameMode, MIN_POS_Y_SPAWN_POWERUP); } \
	FORCEINLINE static uint32 __PPO__MAX_POS_Y_SPAWN_POWERUP() { return STRUCT_OFFSET(ASpaceShooterGameMode, MAX_POS_Y_SPAWN_POWERUP); } \
	FORCEINLINE static uint32 __PPO__MIN_POS_Z_SPAWN_POWERUP() { return STRUCT_OFFSET(ASpaceShooterGameMode, MIN_POS_Z_SPAWN_POWERUP); } \
	FORCEINLINE static uint32 __PPO__MAX_POS_Z_SPAWN_POWERUP() { return STRUCT_OFFSET(ASpaceShooterGameMode, MAX_POS_Z_SPAWN_POWERUP); } \
	FORCEINLINE static uint32 __PPO__StartingWidgetClass() { return STRUCT_OFFSET(ASpaceShooterGameMode, StartingWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(ASpaceShooterGameMode, CurrentWidget); }


#define Curso_1_Source_Curso_1_SpaceShooterGameMode_h_12_PROLOG
#define Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_SPARSE_DATA \
	Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_RPC_WRAPPERS \
	Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_INCLASS \
	Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_SPARSE_DATA \
	Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_INCLASS_NO_PURE_DECLS \
	Curso_1_Source_Curso_1_SpaceShooterGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CURSO_1_API UClass* StaticClass<class ASpaceShooterGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Curso_1_Source_Curso_1_SpaceShooterGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
