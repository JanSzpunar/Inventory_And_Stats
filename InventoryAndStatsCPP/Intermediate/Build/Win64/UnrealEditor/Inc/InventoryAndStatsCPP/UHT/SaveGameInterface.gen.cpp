// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Saving/SaveGameInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USaveGameInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USaveGameInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Interface USaveGameInterface Function LoadGame
struct Z_Construct_UFunction_USaveGameInterface_LoadGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "ModuleRelativePath", "Saving/SaveGameInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameInterface_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameInterface, nullptr, "LoadGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_LoadGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameInterface_LoadGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USaveGameInterface_LoadGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameInterface_LoadGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveGameInterface::execLoadGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadGame();
	P_NATIVE_END;
}
// End Interface USaveGameInterface Function LoadGame

// Begin Interface USaveGameInterface Function SaveGame
struct Z_Construct_UFunction_USaveGameInterface_SaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Saving" },
		{ "ModuleRelativePath", "Saving/SaveGameInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameInterface_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameInterface, nullptr, "SaveGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameInterface_SaveGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveGameInterface_SaveGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USaveGameInterface_SaveGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveGameInterface_SaveGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISaveGameInterface::execSaveGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveGame();
	P_NATIVE_END;
}
// End Interface USaveGameInterface Function SaveGame

// Begin Interface USaveGameInterface
void USaveGameInterface::StaticRegisterNativesUSaveGameInterface()
{
	UClass* Class = USaveGameInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadGame", &ISaveGameInterface::execLoadGame },
		{ "SaveGame", &ISaveGameInterface::execSaveGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameInterface);
UClass* Z_Construct_UClass_USaveGameInterface_NoRegister()
{
	return USaveGameInterface::StaticClass();
}
struct Z_Construct_UClass_USaveGameInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Saving/SaveGameInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveGameInterface_LoadGame, "LoadGame" }, // 1596836580
		{ &Z_Construct_UFunction_USaveGameInterface_SaveGame, "SaveGame" }, // 10178795
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISaveGameInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveGameInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameInterface_Statics::ClassParams = {
	&USaveGameInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGameInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGameInterface()
{
	if (!Z_Registration_Info_UClass_USaveGameInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameInterface.OuterSingleton, Z_Construct_UClass_USaveGameInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGameInterface.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<USaveGameInterface>()
{
	return USaveGameInterface::StaticClass();
}
USaveGameInterface::USaveGameInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameInterface);
USaveGameInterface::~USaveGameInterface() {}
// End Interface USaveGameInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameInterface, USaveGameInterface::StaticClass, TEXT("USaveGameInterface"), &Z_Registration_Info_UClass_USaveGameInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameInterface), 960589617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_3264928364(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
