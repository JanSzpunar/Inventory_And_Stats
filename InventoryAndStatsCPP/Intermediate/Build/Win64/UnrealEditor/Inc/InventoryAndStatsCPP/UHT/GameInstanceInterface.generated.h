// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Saving/GameInstanceInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_GameInstanceInterface_generated_h
#error "GameInstanceInterface.generated.h already included, missing '#pragma once' in GameInstanceInterface.h"
#endif
#define INVENTORYANDSTATSCPP_GameInstanceInterface_generated_h

#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTORYANDSTATSCPP_API UGameInstanceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameInstanceInterface(UGameInstanceInterface&&); \
	UGameInstanceInterface(const UGameInstanceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTORYANDSTATSCPP_API, UGameInstanceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameInstanceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameInstanceInterface) \
	INVENTORYANDSTATSCPP_API virtual ~UGameInstanceInterface();


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameInstanceInterface(); \
	friend struct Z_Construct_UClass_UGameInstanceInterface_Statics; \
public: \
	DECLARE_CLASS(UGameInstanceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), INVENTORYANDSTATSCPP_API) \
	DECLARE_SERIALIZER(UGameInstanceInterface)


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameInstanceInterface() {} \
public: \
	typedef UGameInstanceInterface UClassType; \
	typedef IGameInstanceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_10_PROLOG
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UGameInstanceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
