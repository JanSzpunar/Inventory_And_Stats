// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/PlayerController_InventoryStats.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef INVENTORYANDSTATSCPP_PlayerController_InventoryStats_generated_h
#error "PlayerController_InventoryStats.generated.h already included, missing '#pragma once' in PlayerController_InventoryStats.h"
#endif
#define INVENTORYANDSTATSCPP_PlayerController_InventoryStats_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnUnPossessRequested); \
	DECLARE_FUNCTION(execOnPossessRequested);


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerController_InventoryStats(); \
	friend struct Z_Construct_UClass_APlayerController_InventoryStats_Statics; \
public: \
	DECLARE_CLASS(APlayerController_InventoryStats, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(APlayerController_InventoryStats) \
	virtual UObject* _getUObject() const override { return const_cast<APlayerController_InventoryStats*>(this); }


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerController_InventoryStats(APlayerController_InventoryStats&&); \
	APlayerController_InventoryStats(const APlayerController_InventoryStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController_InventoryStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController_InventoryStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerController_InventoryStats) \
	NO_API virtual ~APlayerController_InventoryStats();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h_14_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h_17_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class APlayerController_InventoryStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_PlayerController_InventoryStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
