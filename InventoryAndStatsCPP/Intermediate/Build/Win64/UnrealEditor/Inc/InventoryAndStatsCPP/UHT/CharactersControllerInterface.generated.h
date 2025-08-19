// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharactersController/CharactersControllerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
#ifdef INVENTORYANDSTATSCPP_CharactersControllerInterface_generated_h
#error "CharactersControllerInterface.generated.h already included, missing '#pragma once' in CharactersControllerInterface.h"
#endif
#define INVENTORYANDSTATSCPP_CharactersControllerInterface_generated_h

#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectNextControlledCharacter); \
	DECLARE_FUNCTION(execGetCurrentlyControlledCharacter);


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	INVENTORYANDSTATSCPP_API UCharactersControllerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCharactersControllerInterface(UCharactersControllerInterface&&); \
	UCharactersControllerInterface(const UCharactersControllerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(INVENTORYANDSTATSCPP_API, UCharactersControllerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharactersControllerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharactersControllerInterface) \
	INVENTORYANDSTATSCPP_API virtual ~UCharactersControllerInterface();


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUCharactersControllerInterface(); \
	friend struct Z_Construct_UClass_UCharactersControllerInterface_Statics; \
public: \
	DECLARE_CLASS(UCharactersControllerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InventoryAndStatsCPP"), INVENTORYANDSTATSCPP_API) \
	DECLARE_SERIALIZER(UCharactersControllerInterface)


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ICharactersControllerInterface() {} \
public: \
	typedef UCharactersControllerInterface UClassType; \
	typedef ICharactersControllerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_11_PROLOG
#define FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<class UCharactersControllerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
