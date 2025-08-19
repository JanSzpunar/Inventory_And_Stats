// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Stats/StatsConfigData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_StatsConfigData_generated_h
#error "StatsConfigData.generated.h already included, missing '#pragma once' in StatsConfigData.h"
#endif
#define INVENTORYANDSTATSCPP_StatsConfigData_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfigData_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStatsConfigData_Statics; \
	INVENTORYANDSTATSCPP_API static class UScriptStruct* StaticStruct();


template<> INVENTORYANDSTATSCPP_API UScriptStruct* StaticStruct<struct FStatsConfigData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfigData_h


#define FOREACH_ENUM_E_STATTYPE(op) \
	op(E_StatType::Basic) \
	op(E_StatType::Main) \
	op(E_StatType::Additional) 

enum class E_StatType : uint8;
template<> struct TIsUEnumClass<E_StatType> { enum { Value = true }; };
template<> INVENTORYANDSTATSCPP_API UEnum* StaticEnum<E_StatType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
