// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/Player_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_Player_Base_generated_h
#error "Player_Base.generated.h already included, missing '#pragma once' in Player_Base.h"
#endif
#define INVENTORYANDSTATSCPP_Player_Base_generated_h

#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Player_Base_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_Base(); \
	friend struct Z_Construct_UClass_APlayer_Base_Statics; \
public: \
	DECLARE_CLASS(APlayer_Base, ACharacter_Base, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Base)


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Player_Base_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayer_Base(APlayer_Base&&); \
	APlayer_Base(const APlayer_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Base); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(APlayer_Base) \
	NO_API virtual ~APlayer_Base();


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Player_Base_h_15_PROLOG
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Player_Base_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Player_Base_h_18_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Player_Base_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class APlayer_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Player_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
