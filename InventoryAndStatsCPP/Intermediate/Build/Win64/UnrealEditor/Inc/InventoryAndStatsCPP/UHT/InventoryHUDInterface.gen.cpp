// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/HUD/InventoryHUDInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryHUDInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoryHUDInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoryHUDInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Interface UInventoryHUDInterface Function CloseInventory
struct InventoryHUDInterface_eventCloseInventory_Parms
{
	FName Inventory;
};
void IInventoryHUDInterface::CloseInventory(FName Inventory)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CloseInventory instead.");
}
static FName NAME_UInventoryHUDInterface_CloseInventory = FName(TEXT("CloseInventory"));
void IInventoryHUDInterface::Execute_CloseInventory(UObject* O, FName Inventory)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryHUDInterface::StaticClass()));
	InventoryHUDInterface_eventCloseInventory_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryHUDInterface_CloseInventory);
	if (Func)
	{
		Parms.Inventory=Inventory;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD|Inventory" },
		{ "ModuleRelativePath", "HUD/InventoryHUDInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryHUDInterface_eventCloseInventory_Parms, Inventory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory_Statics::NewProp_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryHUDInterface, nullptr, "CloseInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory_Statics::PropPointers), sizeof(InventoryHUDInterface_eventCloseInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryHUDInterface_eventCloseInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UInventoryHUDInterface Function CloseInventory

// Begin Interface UInventoryHUDInterface Function OpenInventory
struct InventoryHUDInterface_eventOpenInventory_Parms
{
	FName Inventory;
};
void IInventoryHUDInterface::OpenInventory(FName Inventory)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OpenInventory instead.");
}
static FName NAME_UInventoryHUDInterface_OpenInventory = FName(TEXT("OpenInventory"));
void IInventoryHUDInterface::Execute_OpenInventory(UObject* O, FName Inventory)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryHUDInterface::StaticClass()));
	InventoryHUDInterface_eventOpenInventory_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryHUDInterface_OpenInventory);
	if (Func)
	{
		Parms.Inventory=Inventory;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD|Inventory" },
		{ "ModuleRelativePath", "HUD/InventoryHUDInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryHUDInterface_eventOpenInventory_Parms, Inventory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory_Statics::NewProp_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryHUDInterface, nullptr, "OpenInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory_Statics::PropPointers), sizeof(InventoryHUDInterface_eventOpenInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryHUDInterface_eventOpenInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UInventoryHUDInterface Function OpenInventory

// Begin Interface UInventoryHUDInterface Function SwitchInventory
struct InventoryHUDInterface_eventSwitchInventory_Parms
{
	FName Inventory;
};
void IInventoryHUDInterface::SwitchInventory(FName Inventory)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SwitchInventory instead.");
}
static FName NAME_UInventoryHUDInterface_SwitchInventory = FName(TEXT("SwitchInventory"));
void IInventoryHUDInterface::Execute_SwitchInventory(UObject* O, FName Inventory)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UInventoryHUDInterface::StaticClass()));
	InventoryHUDInterface_eventSwitchInventory_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UInventoryHUDInterface_SwitchInventory);
	if (Func)
	{
		Parms.Inventory=Inventory;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD|Inventory" },
		{ "ModuleRelativePath", "HUD/InventoryHUDInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Inventory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryHUDInterface_eventSwitchInventory_Parms, Inventory), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory_Statics::NewProp_Inventory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryHUDInterface, nullptr, "SwitchInventory", nullptr, nullptr, Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory_Statics::PropPointers), sizeof(InventoryHUDInterface_eventSwitchInventory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryHUDInterface_eventSwitchInventory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UInventoryHUDInterface Function SwitchInventory

// Begin Interface UInventoryHUDInterface
void UInventoryHUDInterface::StaticRegisterNativesUInventoryHUDInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryHUDInterface);
UClass* Z_Construct_UClass_UInventoryHUDInterface_NoRegister()
{
	return UInventoryHUDInterface::StaticClass();
}
struct Z_Construct_UClass_UInventoryHUDInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "HUD/InventoryHUDInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryHUDInterface_CloseInventory, "CloseInventory" }, // 3728145482
		{ &Z_Construct_UFunction_UInventoryHUDInterface_OpenInventory, "OpenInventory" }, // 2200187029
		{ &Z_Construct_UFunction_UInventoryHUDInterface_SwitchInventory, "SwitchInventory" }, // 1942171804
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInventoryHUDInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UInventoryHUDInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryHUDInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryHUDInterface_Statics::ClassParams = {
	&UInventoryHUDInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryHUDInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryHUDInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryHUDInterface()
{
	if (!Z_Registration_Info_UClass_UInventoryHUDInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryHUDInterface.OuterSingleton, Z_Construct_UClass_UInventoryHUDInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryHUDInterface.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UInventoryHUDInterface>()
{
	return UInventoryHUDInterface::StaticClass();
}
UInventoryHUDInterface::UInventoryHUDInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryHUDInterface);
UInventoryHUDInterface::~UInventoryHUDInterface() {}
// End Interface UInventoryHUDInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryHUDInterface, UInventoryHUDInterface::StaticClass, TEXT("UInventoryHUDInterface"), &Z_Registration_Info_UClass_UInventoryHUDInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryHUDInterface), 572481595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_2243066673(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_InventoryHUDInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
