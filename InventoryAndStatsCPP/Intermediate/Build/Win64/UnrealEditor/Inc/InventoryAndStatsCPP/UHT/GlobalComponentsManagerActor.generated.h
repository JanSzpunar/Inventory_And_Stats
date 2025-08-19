// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/GlobalComponentsManagerActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_GlobalComponentsManagerActor_generated_h
#error "GlobalComponentsManagerActor.generated.h already included, missing '#pragma once' in GlobalComponentsManagerActor.h"
#endif
#define INVENTORYANDSTATSCPP_GlobalComponentsManagerActor_generated_h

#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GlobalComponentsManagerActor_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGlobalComponentsManagerActor(); \
	friend struct Z_Construct_UClass_AGlobalComponentsManagerActor_Statics; \
public: \
	DECLARE_CLASS(AGlobalComponentsManagerActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), NO_API) \
	DECLARE_SERIALIZER(AGlobalComponentsManagerActor) \
	virtual UObject* _getUObject() const override { return const_cast<AGlobalComponentsManagerActor*>(this); }


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GlobalComponentsManagerActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGlobalComponentsManagerActor(AGlobalComponentsManagerActor&&); \
	AGlobalComponentsManagerActor(const AGlobalComponentsManagerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGlobalComponentsManagerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGlobalComponentsManagerActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGlobalComponentsManagerActor) \
	NO_API virtual ~AGlobalComponentsManagerActor();


#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GlobalComponentsManagerActor_h_10_PROLOG
#define FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GlobalComponentsManagerActor_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GlobalComponentsManagerActor_h_13_INCLASS_NO_PURE_DECLS \
	FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GlobalComponentsManagerActor_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class AGlobalComponentsManagerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GlobalComponentsManagerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
