// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Inventory/EquipmentInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEquipment;
class UEquipmentNotifier;
struct FGameplayTag;
#ifdef INVENTORYANDSTATSCPP_EquipmentInterface_generated_h
#error "EquipmentInterface.generated.h already included, missing '#pragma once' in EquipmentInterface.h"
#endif
#define INVENTORYANDSTATSCPP_EquipmentInterface_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestEquipmentObject); \
	DECLARE_FUNCTION(execRequestEquipmentNotifier);


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTORYANDSTATSCPP_API UEquipmentInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UEquipmentInterface(UEquipmentInterface&&); \
	UEquipmentInterface(const UEquipmentInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTORYANDSTATSCPP_API, UEquipmentInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEquipmentInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEquipmentInterface) \
	INVENTORYANDSTATSCPP_API virtual ~UEquipmentInterface();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUEquipmentInterface(); \
	friend struct Z_Construct_UClass_UEquipmentInterface_Statics; \
public: \
	DECLARE_CLASS(UEquipmentInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), INVENTORYANDSTATSCPP_API) \
	DECLARE_SERIALIZER(UEquipmentInterface)


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_16_GENERATED_UINTERFACE_BODY() \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IEquipmentInterface() {} \
public: \
	typedef UEquipmentInterface UClassType; \
	typedef IEquipmentInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_13_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UEquipmentInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Inventory_EquipmentInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
