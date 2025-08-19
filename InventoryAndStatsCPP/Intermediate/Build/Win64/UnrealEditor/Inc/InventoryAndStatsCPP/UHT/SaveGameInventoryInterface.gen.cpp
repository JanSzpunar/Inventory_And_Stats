// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Saving/SaveGameInventoryInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameInventoryInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USaveGameInventoryInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USaveGameInventoryInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Interface USaveGameInventoryInterface
void USaveGameInventoryInterface::StaticRegisterNativesUSaveGameInventoryInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGameInventoryInterface);
UClass* Z_Construct_UClass_USaveGameInventoryInterface_NoRegister()
{
	return USaveGameInventoryInterface::StaticClass();
}
struct Z_Construct_UClass_USaveGameInventoryInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Saving/SaveGameInventoryInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISaveGameInventoryInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveGameInventoryInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameInventoryInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGameInventoryInterface_Statics::ClassParams = {
	&USaveGameInventoryInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameInventoryInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGameInventoryInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGameInventoryInterface()
{
	if (!Z_Registration_Info_UClass_USaveGameInventoryInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGameInventoryInterface.OuterSingleton, Z_Construct_UClass_USaveGameInventoryInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGameInventoryInterface.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<USaveGameInventoryInterface>()
{
	return USaveGameInventoryInterface::StaticClass();
}
USaveGameInventoryInterface::USaveGameInventoryInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameInventoryInterface);
USaveGameInventoryInterface::~USaveGameInventoryInterface() {}
// End Interface USaveGameInventoryInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInventoryInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGameInventoryInterface, USaveGameInventoryInterface::StaticClass, TEXT("USaveGameInventoryInterface"), &Z_Registration_Info_UClass_USaveGameInventoryInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGameInventoryInterface), 1501722597U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInventoryInterface_h_1563599639(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInventoryInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGameInventoryInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
