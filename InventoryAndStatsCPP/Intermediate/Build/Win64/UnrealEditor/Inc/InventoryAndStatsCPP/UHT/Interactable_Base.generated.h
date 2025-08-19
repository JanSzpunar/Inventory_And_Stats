// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactables/Interactable_Base.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_Interactable_Base_generated_h
#error "Interactable_Base.generated.h already included, missing '#pragma once' in Interactable_Base.h"
#endif
#define INVENTORYANDSTATSCPP_Interactable_Base_generated_h

#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_Interactable_Base_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractable_Base(); \
	friend struct Z_Construct_UClass_AInteractable_Base_Statics; \
public: \
	DECLARE_CLASS(AInteractable_Base, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(AInteractable_Base) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractable_Base*>(this); }


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_Interactable_Base_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AInteractable_Base(AInteractable_Base&&); \
	AInteractable_Base(const AInteractable_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractable_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractable_Base); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AInteractable_Base) \
	NO_API virtual ~AInteractable_Base();


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_Interactable_Base_h_11_PROLOG
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_Interactable_Base_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_Interactable_Base_h_14_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_Interactable_Base_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class AInteractable_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_Interactable_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
