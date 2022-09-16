// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BuildingEscape/Public/QuestSystem/BaseQuest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseQuest() {}
// Cross Module References
	BUILDINGESCAPE_API UEnum* Z_Construct_UEnum_BuildingEscape_EQuestState();
	UPackage* Z_Construct_UPackage__Script_BuildingEscape();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStructInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UObjetive_NoRegister();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseQuest();
	BUILDINGESCAPE_API UClass* Z_Construct_UClass_UBaseQuest_NoRegister();
	BUILDINGESCAPE_API UFunction* Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	BUILDINGESCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FDataPlayer();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestState;
	static UEnum* EQuestState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuestState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuestState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BuildingEscape_EQuestState, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("EQuestState"));
		}
		return Z_Registration_Info_UEnum_EQuestState.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UEnum* StaticEnum<EQuestState>()
	{
		return EQuestState_StaticEnum();
	}
	struct Z_Construct_UEnum_BuildingEscape_EQuestState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BuildingEscape_EQuestState_Statics::Enumerators[] = {
		{ "Available", (int64)Available },
		{ "InProgress", (int64)InProgress },
		{ "Cancelled", (int64)Cancelled },
		{ "Completed", (int64)Completed },
		{ "Failed", (int64)Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BuildingEscape_EQuestState_Statics::Enum_MetaDataParams[] = {
		{ "Available.Name", "Available" },
		{ "BlueprintType", "true" },
		{ "Cancelled.Name", "Cancelled" },
		{ "Completed.Name", "Completed" },
		{ "Failed.Name", "Failed" },
		{ "InProgress.Name", "InProgress" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BuildingEscape_EQuestState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BuildingEscape,
		nullptr,
		"EQuestState",
		"EQuestState",
		Z_Construct_UEnum_BuildingEscape_EQuestState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BuildingEscape_EQuestState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_BuildingEscape_EQuestState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BuildingEscape_EQuestState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BuildingEscape_EQuestState()
	{
		if (!Z_Registration_Info_UEnum_EQuestState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestState.InnerSingleton, Z_Construct_UEnum_BuildingEscape_EQuestState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuestState.InnerSingleton;
	}

static_assert(std::is_polymorphic<FQuestStructInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestStructInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestStructInfo;
class UScriptStruct* FQuestStructInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestStructInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestStructInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestStructInfo, Z_Construct_UPackage__Script_BuildingEscape(), TEXT("QuestStructInfo"));
	}
	return Z_Registration_Info_UScriptStruct_QuestStructInfo.OuterSingleton;
}
template<> BUILDINGESCAPE_API UScriptStruct* StaticStruct<FQuestStructInfo>()
{
	return FQuestStructInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQuestStructInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestState_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_QuestState;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Objetives_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objetives_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objetives;
		static const UECodeGen_Private::FIntPropertyParams NewProp_QuetsActivatedToCompleteIDs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuetsActivatedToCompleteIDs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QuetsActivatedToCompleteIDs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStructInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*USTRUCT(BlueprintType)\nstruct FActionQuest\n{\n\x09GENERATED_BODY()\n\x09\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite)\n\x09""FString Description;\n\n\x09UPROPERTY(VisibleAnywhere, BlueprintReadWrite)\n\x09""bool bDoneAccion = false;\n\n\x09UPROPERTY(EditAnywhere)\n\x09""bool bUseIdentificationObject = true;\n\x09\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite)\n\x09""FDataPlayer RequiredDataPlayer;\n\x09\n\x09void CheckObjetiveComplete(FDataPlayer CompareData)\n\x09{\n\x09\x09""bool bInventoryCondition = true;\n\x09\x09\n\x09\x09//FString Toto = FString::SanitizeFloat(0.5f) + FString(\"321\");\n\x09\x09\n\x09\x09//FString A = FString(\"\");\n\x09\x09//FString B = FString(\"\");\n\x09\x09//A.Append(B);\n\x09\x09//A = A + B;\n\x09\x09 \n\x09\x09\n\x09\x09UE_LOG(LogTemp, Warning, TEXT(\"ACTUALICE ALIMENTO\"));\n\x09\x09\n\x09\x09""FString StringCompareData = FString(\"(\") + FString::SanitizeFloat(CompareData.Fatness);\n\x09\x09""FString StringRequiredDataPlayer =  FString::SanitizeFloat(RequiredDataPlayer.Fatness) + FString(\")\");\n\x09\x09\n\x09\x09RequiredDataPlayer.TextProgressFatness =  StringCompareData + FString(\"/\") + StringRequiredDataPlayer;\n\x09\x09\n\x09\x09StringCompareData = FString(\"(\") + FString::SanitizeFloat(CompareData.Lifes);\n\x09\x09StringRequiredDataPlayer =  FString::SanitizeFloat(RequiredDataPlayer.Lifes) + FString(\")\");\n\n\x09\x09RequiredDataPlayer.TextProgressLifes = StringCompareData + FString(\"/\") + StringRequiredDataPlayer;\n\x09\x09\n\x09\x09if(RequiredDataPlayer.NeedItems.Num() > 0 && CompareData.InventoryComponent)\n\x09\x09{\n\x09\x09\x09""for(int i = 0; i < RequiredDataPlayer.NeedItems.Num(); i++)\n\x09\x09\x09{\n\x09\x09\x09\x09""bInventoryCondition = CompareData.InventoryComponent->CheckHaveItem(RequiredDataPlayer.NeedItems[i]);\n\x09\x09\x09}\n\x09\x09}\n\n\x09\x09""bool bIdentificationObject = (CompareData.LastInteractActorInfo.ID == RequiredDataPlayer.LastInteractActorInfo.ID \n\x09\x09\x09&& CompareData.LastInteractActorInfo.ActorBlueprint == RequiredDataPlayer.LastInteractActorInfo.ActorBlueprint) || !bUseIdentificationObject;\n\x09\x09\n\x09\x09if(CompareData.Fatness >= RequiredDataPlayer.Fatness\n\x09\x09\x09&& CompareData.Lifes >= RequiredDataPlayer.Lifes\n\x09\x09\x09&& bIdentificationObject\n\x09\x09\x09&& bInventoryCondition)\n\x09\x09{\n\x09\x09\x09""bDoneAccion = true;\n\x09\x09}\n\x09}\n\x09\n};*/" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FActionQuest\n{\n       GENERATED_BODY()\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       FString Description;\n\n       UPROPERTY(VisibleAnywhere, BlueprintReadWrite)\n       bool bDoneAccion = false;\n\n       UPROPERTY(EditAnywhere)\n       bool bUseIdentificationObject = true;\n\n       UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       FDataPlayer RequiredDataPlayer;\n\n       void CheckObjetiveComplete(FDataPlayer CompareData)\n       {\n               bool bInventoryCondition = true;\n\n               //FString Toto = FString::SanitizeFloat(0.5f) + FString(\"321\");\n\n               //FString A = FString(\"\");\n               //FString B = FString(\"\");\n               //A.Append(B);\n               //A = A + B;\n\n\n               UE_LOG(LogTemp, Warning, TEXT(\"ACTUALICE ALIMENTO\"));\n\n               FString StringCompareData = FString(\"(\") + FString::SanitizeFloat(CompareData.Fatness);\n               FString StringRequiredDataPlayer =  FString::SanitizeFloat(RequiredDataPlayer.Fatness) + FString(\")\");\n\n               RequiredDataPlayer.TextProgressFatness =  StringCompareData + FString(\"/\") + StringRequiredDataPlayer;\n\n               StringCompareData = FString(\"(\") + FString::SanitizeFloat(CompareData.Lifes);\n               StringRequiredDataPlayer =  FString::SanitizeFloat(RequiredDataPlayer.Lifes) + FString(\")\");\n\n               RequiredDataPlayer.TextProgressLifes = StringCompareData + FString(\"/\") + StringRequiredDataPlayer;\n\n               if(RequiredDataPlayer.NeedItems.Num() > 0 && CompareData.InventoryComponent)\n               {\n                       for(int i = 0; i < RequiredDataPlayer.NeedItems.Num(); i++)\n                       {\n                               bInventoryCondition = CompareData.InventoryComponent->CheckHaveItem(RequiredDataPlayer.NeedItems[i]);\n                       }\n               }\n\n               bool bIdentificationObject = (CompareData.LastInteractActorInfo.ID == RequiredDataPlayer.LastInteractActorInfo.ID\n                       && CompareData.LastInteractActorInfo.ActorBlueprint == RequiredDataPlayer.LastInteractActorInfo.ActorBlueprint) || !bUseIdentificationObject;\n\n               if(CompareData.Fatness >= RequiredDataPlayer.Fatness\n                       && CompareData.Lifes >= RequiredDataPlayer.Lifes\n                       && bIdentificationObject\n                       && bInventoryCondition)\n               {\n                       bDoneAccion = true;\n               }\n       }\n\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestStructInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "QuestStructInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStructInfo, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "QuestStructInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStructInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuestState_MetaData[] = {
		{ "Category", "QuestStructInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStructInfo, QuestState), Z_Construct_UEnum_BuildingEscape_EQuestState, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuestState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuestState_MetaData)) }; // 4604206
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives_Inner = { "Objetives", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObjetive_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives_MetaData[] = {
		{ "Category", "QuestStructInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives = { "Objetives", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStructInfo, Objetives), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs_Inner = { "QuetsActivatedToCompleteIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs_MetaData[] = {
		{ "Category", "QuestStructInfo" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs = { "QuetsActivatedToCompleteIDs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStructInfo, QuetsActivatedToCompleteIDs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestStructInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_ID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuestState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_Objetives,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewProp_QuetsActivatedToCompleteIDs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestStructInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QuestStructInfo",
		sizeof(FQuestStructInfo),
		alignof(FQuestStructInfo),
		Z_Construct_UScriptStruct_FQuestStructInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStructInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestStructInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_QuestStructInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestStructInfo.InnerSingleton, Z_Construct_UScriptStruct_FQuestStructInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QuestStructInfo.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics
	{
		struct BaseQuest_eventOnFinishQuest_Parms
		{
			UBaseQuest* Quest;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Quest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::NewProp_Quest_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseQuest_eventOnFinishQuest_Parms, Quest), Z_Construct_UClass_UBaseQuest_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::NewProp_Quest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::NewProp_Quest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuest, nullptr, "OnFinishQuest__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::BaseQuest_eventOnFinishQuest_Parms), Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuest, nullptr, "OnUpdateQuest__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UBaseQuest::execCheckStatus)
	{
		P_GET_STRUCT(FDataPlayer,Z_Param_DataPlayer);
		P_GET_UBOOL(Z_Param_bForceSendData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckStatus(Z_Param_DataPlayer,Z_Param_bForceSendData);
		P_NATIVE_END;
	}
	void UBaseQuest::StaticRegisterNativesUBaseQuest()
	{
		UClass* Class = UBaseQuest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckStatus", &UBaseQuest::execCheckStatus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics
	{
		struct BaseQuest_eventCheckStatus_Parms
		{
			FDataPlayer DataPlayer;
			bool bForceSendData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataPlayer;
		static void NewProp_bForceSendData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSendData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::NewProp_DataPlayer = { "DataPlayer", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BaseQuest_eventCheckStatus_Parms, DataPlayer), Z_Construct_UScriptStruct_FDataPlayer, METADATA_PARAMS(nullptr, 0) }; // 3108135505
	void Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::NewProp_bForceSendData_SetBit(void* Obj)
	{
		((BaseQuest_eventCheckStatus_Parms*)Obj)->bForceSendData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::NewProp_bForceSendData = { "bForceSendData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BaseQuest_eventCheckStatus_Parms), &Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::NewProp_bForceSendData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::NewProp_DataPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::NewProp_bForceSendData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseQuest, nullptr, "CheckStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::BaseQuest_eventCheckStatus_Parms), Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseQuest_CheckStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseQuest_CheckStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseQuest);
	UClass* Z_Construct_UClass_UBaseQuest_NoRegister()
	{
		return UBaseQuest::StaticClass();
	}
	struct Z_Construct_UClass_UBaseQuest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishQuest_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishQuest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUpdateQuest_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUpdateQuest;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuestStructInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QuestStructInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseQuest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BuildingEscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseQuest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseQuest_CheckStatus, "CheckStatus" }, // 1091851073
		{ &Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature, "OnFinishQuest__DelegateSignature" }, // 770753025
		{ &Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature, "OnUpdateQuest__DelegateSignature" }, // 3330082671
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestSystem/BaseQuest.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnFinishQuest_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnFinishQuest = { "OnFinishQuest", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseQuest, OnFinishQuest), Z_Construct_UDelegateFunction_UBaseQuest_OnFinishQuest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnFinishQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnFinishQuest_MetaData)) }; // 770753025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnUpdateQuest_MetaData[] = {
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnUpdateQuest = { "OnUpdateQuest", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseQuest, OnUpdateQuest), Z_Construct_UDelegateFunction_UBaseQuest_OnUpdateQuest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnUpdateQuest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnUpdateQuest_MetaData)) }; // 3330082671
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseQuest_Statics::NewProp_QuestStructInfo_MetaData[] = {
		{ "Category", "BaseQuest" },
		{ "ModuleRelativePath", "Public/QuestSystem/BaseQuest.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseQuest_Statics::NewProp_QuestStructInfo = { "QuestStructInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseQuest, QuestStructInfo), Z_Construct_UScriptStruct_FQuestStructInfo, METADATA_PARAMS(Z_Construct_UClass_UBaseQuest_Statics::NewProp_QuestStructInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::NewProp_QuestStructInfo_MetaData)) }; // 2095191138
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseQuest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnFinishQuest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuest_Statics::NewProp_OnUpdateQuest,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseQuest_Statics::NewProp_QuestStructInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseQuest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseQuest>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseQuest_Statics::ClassParams = {
		&UBaseQuest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseQuest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseQuest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseQuest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseQuest()
	{
		if (!Z_Registration_Info_UClass_UBaseQuest.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseQuest.OuterSingleton, Z_Construct_UClass_UBaseQuest_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseQuest.OuterSingleton;
	}
	template<> BUILDINGESCAPE_API UClass* StaticClass<UBaseQuest>()
	{
		return UBaseQuest::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseQuest);
	struct Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_Statics::EnumInfo[] = {
		{ EQuestState_StaticEnum, TEXT("EQuestState"), &Z_Registration_Info_UEnum_EQuestState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4604206U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_Statics::ScriptStructInfo[] = {
		{ FQuestStructInfo::StaticStruct, Z_Construct_UScriptStruct_FQuestStructInfo_Statics::NewStructOps, TEXT("QuestStructInfo"), &Z_Registration_Info_UScriptStruct_QuestStructInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestStructInfo), 2095191138U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseQuest, UBaseQuest::StaticClass, TEXT("UBaseQuest"), &Z_Registration_Info_UClass_UBaseQuest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseQuest), 2011588997U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_3841833352(TEXT("/Script/BuildingEscape"),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BuildingEscape_Source_BuildingEscape_Public_QuestSystem_BaseQuest_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
