// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/HUD/CharacterPanelHUDInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterPanelHUDInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UCharacterPanelHUDInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UCharacterPanelHUDInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Interface UCharacterPanelHUDInterface Function CloseCharacterPanel
void ICharacterPanelHUDInterface::CloseCharacterPanel()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CloseCharacterPanel instead.");
}
static FName NAME_UCharacterPanelHUDInterface_CloseCharacterPanel = FName(TEXT("CloseCharacterPanel"));
void ICharacterPanelHUDInterface::Execute_CloseCharacterPanel(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCharacterPanelHUDInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCharacterPanelHUDInterface_CloseCharacterPanel);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UCharacterPanelHUDInterface_CloseCharacterPanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD|Character panel" },
		{ "ModuleRelativePath", "HUD/CharacterPanelHUDInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterPanelHUDInterface_CloseCharacterPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterPanelHUDInterface, nullptr, "CloseCharacterPanel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPanelHUDInterface_CloseCharacterPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterPanelHUDInterface_CloseCharacterPanel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterPanelHUDInterface_CloseCharacterPanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterPanelHUDInterface_CloseCharacterPanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UCharacterPanelHUDInterface Function CloseCharacterPanel

// Begin Interface UCharacterPanelHUDInterface Function OpenCharacterPanel
void ICharacterPanelHUDInterface::OpenCharacterPanel()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OpenCharacterPanel instead.");
}
static FName NAME_UCharacterPanelHUDInterface_OpenCharacterPanel = FName(TEXT("OpenCharacterPanel"));
void ICharacterPanelHUDInterface::Execute_OpenCharacterPanel(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCharacterPanelHUDInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCharacterPanelHUDInterface_OpenCharacterPanel);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UCharacterPanelHUDInterface_OpenCharacterPanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD|Character panel" },
		{ "ModuleRelativePath", "HUD/CharacterPanelHUDInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterPanelHUDInterface_OpenCharacterPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterPanelHUDInterface, nullptr, "OpenCharacterPanel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPanelHUDInterface_OpenCharacterPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterPanelHUDInterface_OpenCharacterPanel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterPanelHUDInterface_OpenCharacterPanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterPanelHUDInterface_OpenCharacterPanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UCharacterPanelHUDInterface Function OpenCharacterPanel

// Begin Interface UCharacterPanelHUDInterface Function RefreshCharacterPanel
void ICharacterPanelHUDInterface::RefreshCharacterPanel()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RefreshCharacterPanel instead.");
}
static FName NAME_UCharacterPanelHUDInterface_RefreshCharacterPanel = FName(TEXT("RefreshCharacterPanel"));
void ICharacterPanelHUDInterface::Execute_RefreshCharacterPanel(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCharacterPanelHUDInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCharacterPanelHUDInterface_RefreshCharacterPanel);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UCharacterPanelHUDInterface_RefreshCharacterPanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD|Character panel" },
		{ "ModuleRelativePath", "HUD/CharacterPanelHUDInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterPanelHUDInterface_RefreshCharacterPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterPanelHUDInterface, nullptr, "RefreshCharacterPanel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPanelHUDInterface_RefreshCharacterPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterPanelHUDInterface_RefreshCharacterPanel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterPanelHUDInterface_RefreshCharacterPanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterPanelHUDInterface_RefreshCharacterPanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UCharacterPanelHUDInterface Function RefreshCharacterPanel

// Begin Interface UCharacterPanelHUDInterface Function SwitchCharacterPanel
void ICharacterPanelHUDInterface::SwitchCharacterPanel()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SwitchCharacterPanel instead.");
}
static FName NAME_UCharacterPanelHUDInterface_SwitchCharacterPanel = FName(TEXT("SwitchCharacterPanel"));
void ICharacterPanelHUDInterface::Execute_SwitchCharacterPanel(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UCharacterPanelHUDInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UCharacterPanelHUDInterface_SwitchCharacterPanel);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UCharacterPanelHUDInterface_SwitchCharacterPanel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD|Character panel" },
		{ "ModuleRelativePath", "HUD/CharacterPanelHUDInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterPanelHUDInterface_SwitchCharacterPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterPanelHUDInterface, nullptr, "SwitchCharacterPanel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterPanelHUDInterface_SwitchCharacterPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCharacterPanelHUDInterface_SwitchCharacterPanel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCharacterPanelHUDInterface_SwitchCharacterPanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCharacterPanelHUDInterface_SwitchCharacterPanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UCharacterPanelHUDInterface Function SwitchCharacterPanel

// Begin Interface UCharacterPanelHUDInterface
void UCharacterPanelHUDInterface::StaticRegisterNativesUCharacterPanelHUDInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharacterPanelHUDInterface);
UClass* Z_Construct_UClass_UCharacterPanelHUDInterface_NoRegister()
{
	return UCharacterPanelHUDInterface::StaticClass();
}
struct Z_Construct_UClass_UCharacterPanelHUDInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "HUD/CharacterPanelHUDInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterPanelHUDInterface_CloseCharacterPanel, "CloseCharacterPanel" }, // 790982750
		{ &Z_Construct_UFunction_UCharacterPanelHUDInterface_OpenCharacterPanel, "OpenCharacterPanel" }, // 1434518711
		{ &Z_Construct_UFunction_UCharacterPanelHUDInterface_RefreshCharacterPanel, "RefreshCharacterPanel" }, // 4287333154
		{ &Z_Construct_UFunction_UCharacterPanelHUDInterface_SwitchCharacterPanel, "SwitchCharacterPanel" }, // 1641664696
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICharacterPanelHUDInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharacterPanelHUDInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPanelHUDInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharacterPanelHUDInterface_Statics::ClassParams = {
	&UCharacterPanelHUDInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterPanelHUDInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharacterPanelHUDInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharacterPanelHUDInterface()
{
	if (!Z_Registration_Info_UClass_UCharacterPanelHUDInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharacterPanelHUDInterface.OuterSingleton, Z_Construct_UClass_UCharacterPanelHUDInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharacterPanelHUDInterface.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UCharacterPanelHUDInterface>()
{
	return UCharacterPanelHUDInterface::StaticClass();
}
UCharacterPanelHUDInterface::UCharacterPanelHUDInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterPanelHUDInterface);
UCharacterPanelHUDInterface::~UCharacterPanelHUDInterface() {}
// End Interface UCharacterPanelHUDInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharacterPanelHUDInterface, UCharacterPanelHUDInterface::StaticClass, TEXT("UCharacterPanelHUDInterface"), &Z_Registration_Info_UClass_UCharacterPanelHUDInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharacterPanelHUDInterface), 3838142999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_3445677449(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_CharacterPanelHUDInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
