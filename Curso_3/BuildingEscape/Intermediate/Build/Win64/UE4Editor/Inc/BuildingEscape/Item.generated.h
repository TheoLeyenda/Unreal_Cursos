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

#define BuildingEscape_Source_BuildingEscape_Public_Item_h_16_SPARSE_DATA
#define BuildingEscape_Source_BuildingEscape_Public_Item_h_16_RPC_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_Public_Item_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define BuildingEscape_Source_BuildingEscape_Public_Item_h_16_EVENT_PARMS \
	struct Item_eventOnUse_Parms \
	{ \
		ABuildingScapeCharacter* Character; \
	};


#define BuildingEscape_Source_BuildingEscape_Public_Item_h_16_CALLBACK_WRAPPERS
#define BuildingEscape_Source_BuildingEscape_Public_Item_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define BuildingEscape_Source_BuildingEscape_Public_Item_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUItem(); \
	friend struct Z_Construct_UClass_UItem_Statics; \
public: \
	DECLARE_CLASS(UItem, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BuildingEscape"), NO_API) \
	DECLARE_SERIALIZER(UItem)


#define BuildingEscape_Source_BuildingEscape_Public_Item_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public:


#define BuildingEscape_Source_BuildingEscape_Public_Item_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UItem(UItem&&); \
	NO_API UItem(const UItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItem)


#define BuildingEscape_Source_BuildingEscape_Public_Item_h_16_PRIVATE_PROPERTY_OFFSET
#define BuildingEscape_Source_BuildingEscape_Public_Item_h_13_PROLOG \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_EVENT_PARMS


#define BuildingEscape_Source_BuildingEscape_Public_Item_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_RPC_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_CALLBACK_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_INCLASS \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BuildingEscape_Source_BuildingEscape_Public_Item_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_PRIVATE_PROPERTY_OFFSET \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_SPARSE_DATA \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_CALLBACK_WRAPPERS \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_INCLASS_NO_PURE_DECLS \
	BuildingEscape_Source_BuildingEscape_Public_Item_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BUILDINGESCAPE_API UClass* StaticClass<class UItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BuildingEscape_Source_BuildingEscape_Public_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
