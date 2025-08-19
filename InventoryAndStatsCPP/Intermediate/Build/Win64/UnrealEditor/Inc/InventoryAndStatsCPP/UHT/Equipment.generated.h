// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/Equipment.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_Equipment_generated_h
#error "Equipment.generated.h already included, missing '#pragma once' in Equipment.h"
#endif
#define INVENTORYANDSTATSCPP_Equipment_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Equipment_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEquipment(); \
	friend struct Z_Construct_UClass_UEquipment_Statics; \
public: \
	DECLARE_CLASS(UEquipment, UInventory, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(UEquipment)


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Equipment_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEquipment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEquipment(UEquipment&&); \
	UEquipment(const UEquipment&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEquipment); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipment); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipment) \
	NO_API virtual ~UEquipment();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Equipment_h_14_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Equipment_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Equipment_h_17_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Equipment_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UEquipment>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_Equipment_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
