// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Stats/StatsInterface.h"
#include "InventoryAndStatsCPP/Stats/BaseStats.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UStatsInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UStatsInterface_NoRegister();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FBaseStats();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Interface UStatsInterface Function AddExperience
struct Z_Construct_UFunction_UStatsInterface_AddExperience_Statics
{
	struct StatsInterface_eventAddExperience_Parms
	{
		float Experience;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Stats/StatsInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Experience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsInterface_AddExperience_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsInterface_eventAddExperience_Parms, Experience), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsInterface_AddExperience_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsInterface_AddExperience_Statics::NewProp_Experience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_AddExperience_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsInterface_AddExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsInterface, nullptr, "AddExperience", nullptr, nullptr, Z_Construct_UFunction_UStatsInterface_AddExperience_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_AddExperience_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsInterface_AddExperience_Statics::StatsInterface_eventAddExperience_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_AddExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsInterface_AddExperience_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsInterface_AddExperience_Statics::StatsInterface_eventAddExperience_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsInterface_AddExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsInterface_AddExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IStatsInterface::execAddExperience)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Experience);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddExperience(Z_Param_Experience);
	P_NATIVE_END;
}
// End Interface UStatsInterface Function AddExperience

// Begin Interface UStatsInterface Function GetBaseStats
struct Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics
{
	struct StatsInterface_eventGetBaseStats_Parms
	{
		FBaseStats ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Stats/StatsInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsInterface_eventGetBaseStats_Parms, ReturnValue), Z_Construct_UScriptStruct_FBaseStats, METADATA_PARAMS(0, nullptr) }; // 3185252591
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsInterface, nullptr, "GetBaseStats", nullptr, nullptr, Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics::StatsInterface_eventGetBaseStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics::StatsInterface_eventGetBaseStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsInterface_GetBaseStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsInterface_GetBaseStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IStatsInterface::execGetBaseStats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBaseStats*)Z_Param__Result=P_THIS->GetBaseStats();
	P_NATIVE_END;
}
// End Interface UStatsInterface Function GetBaseStats

// Begin Interface UStatsInterface Function GetStat
struct Z_Construct_UFunction_UStatsInterface_GetStat_Statics
{
	struct StatsInterface_eventGetStat_Parms
	{
		FGameplayTag Stat;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Stats/StatsInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsInterface_GetStat_Statics::NewProp_Stat = { "Stat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsInterface_eventGetStat_Parms, Stat), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatsInterface_GetStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsInterface_eventGetStat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsInterface_GetStat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsInterface_GetStat_Statics::NewProp_Stat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsInterface_GetStat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_GetStat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsInterface_GetStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsInterface, nullptr, "GetStat", nullptr, nullptr, Z_Construct_UFunction_UStatsInterface_GetStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_GetStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsInterface_GetStat_Statics::StatsInterface_eventGetStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_GetStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsInterface_GetStat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsInterface_GetStat_Statics::StatsInterface_eventGetStat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsInterface_GetStat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsInterface_GetStat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IStatsInterface::execGetStat)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Stat);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetStat(Z_Param_Stat);
	P_NATIVE_END;
}
// End Interface UStatsInterface Function GetStat

// Begin Interface UStatsInterface Function GetStatsComponent
struct Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics
{
	struct StatsInterface_eventGetStatsComponent_Parms
	{
		UStatsComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Stats/StatsInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsInterface_eventGetStatsComponent_Parms, ReturnValue), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsInterface, nullptr, "GetStatsComponent", nullptr, nullptr, Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics::StatsInterface_eventGetStatsComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics::StatsInterface_eventGetStatsComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsInterface_GetStatsComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsInterface_GetStatsComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IStatsInterface::execGetStatsComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStatsComponent**)Z_Param__Result=P_THIS->GetStatsComponent();
	P_NATIVE_END;
}
// End Interface UStatsInterface Function GetStatsComponent

// Begin Interface UStatsInterface Function SetBaseStats
struct Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics
{
	struct StatsInterface_eventSetBaseStats_Parms
	{
		FBaseStats NewBaseStats;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Stats/StatsInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewBaseStats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics::NewProp_NewBaseStats = { "NewBaseStats", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatsInterface_eventSetBaseStats_Parms, NewBaseStats), Z_Construct_UScriptStruct_FBaseStats, METADATA_PARAMS(0, nullptr) }; // 3185252591
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics::NewProp_NewBaseStats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatsInterface, nullptr, "SetBaseStats", nullptr, nullptr, Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics::StatsInterface_eventSetBaseStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics::StatsInterface_eventSetBaseStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatsInterface_SetBaseStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatsInterface_SetBaseStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IStatsInterface::execSetBaseStats)
{
	P_GET_STRUCT(FBaseStats,Z_Param_NewBaseStats);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBaseStats(Z_Param_NewBaseStats);
	P_NATIVE_END;
}
// End Interface UStatsInterface Function SetBaseStats

// Begin Interface UStatsInterface
void UStatsInterface::StaticRegisterNativesUStatsInterface()
{
	UClass* Class = UStatsInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddExperience", &IStatsInterface::execAddExperience },
		{ "GetBaseStats", &IStatsInterface::execGetBaseStats },
		{ "GetStat", &IStatsInterface::execGetStat },
		{ "GetStatsComponent", &IStatsInterface::execGetStatsComponent },
		{ "SetBaseStats", &IStatsInterface::execSetBaseStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsInterface);
UClass* Z_Construct_UClass_UStatsInterface_NoRegister()
{
	return UStatsInterface::StaticClass();
}
struct Z_Construct_UClass_UStatsInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Stats/StatsInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatsInterface_AddExperience, "AddExperience" }, // 3801448085
		{ &Z_Construct_UFunction_UStatsInterface_GetBaseStats, "GetBaseStats" }, // 3976341151
		{ &Z_Construct_UFunction_UStatsInterface_GetStat, "GetStat" }, // 2417664234
		{ &Z_Construct_UFunction_UStatsInterface_GetStatsComponent, "GetStatsComponent" }, // 2973936530
		{ &Z_Construct_UFunction_UStatsInterface_SetBaseStats, "SetBaseStats" }, // 2910401053
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStatsInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStatsInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsInterface_Statics::ClassParams = {
	&UStatsInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsInterface()
{
	if (!Z_Registration_Info_UClass_UStatsInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsInterface.OuterSingleton, Z_Construct_UClass_UStatsInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsInterface.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UStatsInterface>()
{
	return UStatsInterface::StaticClass();
}
UStatsInterface::UStatsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsInterface);
UStatsInterface::~UStatsInterface() {}
// End Interface UStatsInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsInterface, UStatsInterface::StaticClass, TEXT("UStatsInterface"), &Z_Registration_Info_UClass_UStatsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsInterface), 1747115430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_1966873812(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
