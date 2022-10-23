// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABuildingScapeCharacter;
#ifdef BUILDINGESCAPE_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define BUILDINGESCAPE_Item_generated_h

#define FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_SPARSE_DATA
#define FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_RPC_WRAPPERS
#define FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_EVENT_PARMS \
	struct Item_eventOnUse_Parms \
	{ \
		ABuildingScapeCharacter* Character; \
	};


#define FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_CALLBACK_WRAPPERS
#define FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public:


#define FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UItem)


#define FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_13_PROLOG \
	FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_EVENT_PARMS


#define FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_RPC_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_CALLBACK_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_INCLASS \
	FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_SPARSE_DATA \
	FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_CALLBACK_WRAPPERS \
	FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_INCLASS_NO_PURE_DECLS \
	FID_BuildingEscape_Source_BuildingEscape_Public_Item_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BuildingEscape_Source_BuildingEscape_Public_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
