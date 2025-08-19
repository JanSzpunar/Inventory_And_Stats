// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/HUD/HUDInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUDInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UHUDInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UHUDInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Interface UHUDInterface Function Refresh
void IHUDInterface::Refresh()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Refresh instead.");
}
static FName NAME_UHUDInterface_Refresh = FName(TEXT("Refresh"));
void IHUDInterface::Execute_Refresh(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHUDInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UHUDInterface_Refresh);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UHUDInterface_Refresh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "HUD/HUDInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHUDInterface_Refresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHUDInterface, nullptr, "Refresh", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHUDInterface_Refresh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHUDInterface_Refresh_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UHUDInterface_Refresh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHUDInterface_Refresh_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UHUDInterface Function Refresh

// Begin Interface UHUDInterface
void UHUDInterface::StaticRegisterNativesUHUDInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHUDInterface);
UClass* Z_Construct_UClass_UHUDInterface_NoRegister()
{
	return UHUDInterface::StaticClass();
}
struct Z_Construct_UClass_UHUDInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "HUD/HUDInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHUDInterface_Refresh, "Refresh" }, // 1131672668
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHUDInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHUDInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHUDInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHUDInterface_Statics::ClassParams = {
	&UHUDInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHUDInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UHUDInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHUDInterface()
{
	if (!Z_Registration_Info_UClass_UHUDInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHUDInterface.OuterSingleton, Z_Construct_UClass_UHUDInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHUDInterface.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UHUDInterface>()
{
	return UHUDInterface::StaticClass();
}
UHUDInterface::UHUDInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHUDInterface);
UHUDInterface::~UHUDInterface() {}
// End Interface UHUDInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_HUDInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHUDInterface, UHUDInterface::StaticClass, TEXT("UHUDInterface"), &Z_Registration_Info_UClass_UHUDInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHUDInterface), 2082052923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_HUDInterface_h_4250176127(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_HUDInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_HUD_HUDInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
