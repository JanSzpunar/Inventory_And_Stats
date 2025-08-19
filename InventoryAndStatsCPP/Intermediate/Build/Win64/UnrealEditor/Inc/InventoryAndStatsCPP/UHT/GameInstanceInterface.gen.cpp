// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Saving/GameInstanceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstanceInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UGameInstanceInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UGameInstanceInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Interface UGameInstanceInterface
void UGameInstanceInterface::StaticRegisterNativesUGameInstanceInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInstanceInterface);
UClass* Z_Construct_UClass_UGameInstanceInterface_NoRegister()
{
	return UGameInstanceInterface::StaticClass();
}
struct Z_Construct_UClass_UGameInstanceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Saving/GameInstanceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IGameInstanceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameInstanceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInstanceInterface_Statics::ClassParams = {
	&UGameInstanceInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstanceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameInstanceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameInstanceInterface()
{
	if (!Z_Registration_Info_UClass_UGameInstanceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInstanceInterface.OuterSingleton, Z_Construct_UClass_UGameInstanceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameInstanceInterface.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UGameInstanceInterface>()
{
	return UGameInstanceInterface::StaticClass();
}
UGameInstanceInterface::UGameInstanceInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstanceInterface);
UGameInstanceInterface::~UGameInstanceInterface() {}
// End Interface UGameInstanceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameInstanceInterface, UGameInstanceInterface::StaticClass, TEXT("UGameInstanceInterface"), &Z_Registration_Info_UClass_UGameInstanceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInstanceInterface), 2391617462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_4154806795(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_GameInstanceInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
