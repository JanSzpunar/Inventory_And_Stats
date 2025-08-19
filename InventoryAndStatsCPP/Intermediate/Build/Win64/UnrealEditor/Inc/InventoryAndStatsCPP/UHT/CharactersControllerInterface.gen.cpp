// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/CharactersController/CharactersControllerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharactersControllerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UCharactersControllerInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UCharactersControllerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Interface UCharactersControllerInterface Function GetCurrentlyControlledCharacter
struct Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics
{
	struct CharactersControllerInterface_eventGetCurrentlyControlledCharacter_Parms
	{
		ACharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MultipleCharacters" },
		{ "ModuleRelativePath", "CharactersController/CharactersControllerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharactersControllerInterface_eventGetCurrentlyControlledCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharactersControllerInterface, nullptr, "GetCurrentlyControlledCharacter", nullptr, nullptr, Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics::CharactersControllerInterface_eventGetCurrentlyControlledCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics::CharactersControllerInterface_eventGetCurrentlyControlledCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICharactersControllerInterface::execGetCurrentlyControlledCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACharacter**)Z_Param__Result=P_THIS->GetCurrentlyControlledCharacter();
	P_NATIVE_END;
}
// End Interface UCharactersControllerInterface Function GetCurrentlyControlledCharacter

// Begin Interface UCharactersControllerInterface Function SelectNextControlledCharacter
struct Z_Construct_UFunction_UCharactersControllerInterface_SelectNextControlledCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MultipleCharacters" },
		{ "ModuleRelativePath", "CharactersController/CharactersControllerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharactersControllerInterface_SelectNextControlledCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharactersControllerInterface, nullptr, "SelectNextControlledCharacter", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharactersControllerInterface_SelectNextControlledCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharactersControllerInterface_SelectNextControlledCharacter_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharactersControllerInterface_SelectNextControlledCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharactersControllerInterface_SelectNextControlledCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ICharactersControllerInterface::execSelectNextControlledCharacter)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectNextControlledCharacter();
	P_NATIVE_END;
}
// End Interface UCharactersControllerInterface Function SelectNextControlledCharacter

// Begin Interface UCharactersControllerInterface
void UCharactersControllerInterface::StaticRegisterNativesUCharactersControllerInterface()
{
	UClass* Class = UCharactersControllerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentlyControlledCharacter", &ICharactersControllerInterface::execGetCurrentlyControlledCharacter },
		{ "SelectNextControlledCharacter", &ICharactersControllerInterface::execSelectNextControlledCharacter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharactersControllerInterface);
UClass* Z_Construct_UClass_UCharactersControllerInterface_NoRegister()
{
	return UCharactersControllerInterface::StaticClass();
}
struct Z_Construct_UClass_UCharactersControllerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "CharactersController/CharactersControllerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharactersControllerInterface_GetCurrentlyControlledCharacter, "GetCurrentlyControlledCharacter" }, // 3399971785
		{ &Z_Construct_UFunction_UCharactersControllerInterface_SelectNextControlledCharacter, "SelectNextControlledCharacter" }, // 2922165854
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICharactersControllerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharactersControllerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharactersControllerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharactersControllerInterface_Statics::ClassParams = {
	&UCharactersControllerInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharactersControllerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharactersControllerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharactersControllerInterface()
{
	if (!Z_Registration_Info_UClass_UCharactersControllerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharactersControllerInterface.OuterSingleton, Z_Construct_UClass_UCharactersControllerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharactersControllerInterface.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UCharactersControllerInterface>()
{
	return UCharactersControllerInterface::StaticClass();
}
UCharactersControllerInterface::UCharactersControllerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharactersControllerInterface);
UCharactersControllerInterface::~UCharactersControllerInterface() {}
// End Interface UCharactersControllerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharactersControllerInterface, UCharactersControllerInterface::StaticClass, TEXT("UCharactersControllerInterface"), &Z_Registration_Info_UClass_UCharactersControllerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharactersControllerInterface), 1055488451U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_2911023632(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersControllerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
