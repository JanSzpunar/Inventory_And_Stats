// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/GameState_InventoryAndStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_GameState_InventoryAndStats_generated_h
#error "GameState_InventoryAndStats.generated.h already included, missing '#pragma once' in GameState_InventoryAndStats.h"
#endif
#define INVENTORYANDSTATSCPP_GameState_InventoryAndStats_generated_h

#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameState_InventoryAndStats_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameState_InventoryAndStats(); \
	friend struct Z_Construct_UClass_AGameState_InventoryAndStats_Statics; \
public: \
	DECLARE_CLASS(AGameState_InventoryAndStats, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(AGameState_InventoryAndStats) \
	virtual UObject* _getUObject() const override { return const_cast<AGameState_InventoryAndStats*>(this); }


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameState_InventoryAndStats_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameState_InventoryAndStats(AGameState_InventoryAndStats&&); \
	AGameState_InventoryAndStats(const AGameState_InventoryAndStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameState_InventoryAndStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameState_InventoryAndStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameState_InventoryAndStats) \
	NO_API virtual ~AGameState_InventoryAndStats();


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameState_InventoryAndStats_h_13_PROLOG
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameState_InventoryAndStats_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameState_InventoryAndStats_h_16_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameState_InventoryAndStats_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class AGameState_InventoryAndStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameState_InventoryAndStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
