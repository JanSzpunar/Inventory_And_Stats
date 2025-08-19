// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interactables/InteractableController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef INVENTORYANDSTATSCPP_InteractableController_generated_h
#error "InteractableController.generated.h already included, missing '#pragma once' in InteractableController.h"
#endif
#define INVENTORYANDSTATSCPP_InteractableController_generated_h

#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCurrentInteractable);


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractableController(); \
	friend struct Z_Construct_UClass_UInteractableController_Statics; \
public: \
	DECLARE_CLASS(UInteractableController, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(UInteractableController)


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInteractableController(UInteractableController&&); \
	UInteractableController(const UInteractableController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractableController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractableController) \
	NO_API virtual ~UInteractableController();


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h_10_PROLOG
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h_13_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UInteractableController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
