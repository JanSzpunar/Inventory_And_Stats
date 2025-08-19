// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Saving/SaveGameInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYANDSTATSCPP_SaveGameInterface_generated_h
#error "SaveGameInterface.generated.h already included, missing '#pragma once' in SaveGameInterface.h"
#endif
#define INVENTORYANDSTATSCPP_SaveGameInterface_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadGame); \
	DECLARE_FUNCTION(execSaveGame);


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTORYANDSTATSCPP_API USaveGameInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USaveGameInterface(USaveGameInterface&&); \
	USaveGameInterface(const USaveGameInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTORYANDSTATSCPP_API, USaveGameInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveGameInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveGameInterface) \
	INVENTORYANDSTATSCPP_API virtual ~USaveGameInterface();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSaveGameInterface(); \
	friend struct Z_Construct_UClass_USaveGameInterface_Statics; \
public: \
	DECLARE_CLASS(USaveGameInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), INVENTORYANDSTATSCPP_API) \
	DECLARE_SERIALIZER(USaveGameInterface)


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISaveGameInterface() {} \
public: \
	typedef USaveGameInterface UClassType; \
	typedef ISaveGameInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_10_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class USaveGameInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
