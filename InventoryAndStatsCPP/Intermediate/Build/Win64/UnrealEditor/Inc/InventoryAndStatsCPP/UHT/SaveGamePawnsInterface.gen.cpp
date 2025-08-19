// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Saving/SaveGamePawnsInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGamePawnsInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USaveGamePawnsInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USaveGamePawnsInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Interface USaveGamePawnsInterface
void USaveGamePawnsInterface::StaticRegisterNativesUSaveGamePawnsInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGamePawnsInterface);
UClass* Z_Construct_UClass_USaveGamePawnsInterface_NoRegister()
{
	return USaveGamePawnsInterface::StaticClass();
}
struct Z_Construct_UClass_USaveGamePawnsInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Saving/SaveGamePawnsInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISaveGamePawnsInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveGamePawnsInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGamePawnsInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGamePawnsInterface_Statics::ClassParams = {
	&USaveGamePawnsInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGamePawnsInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGamePawnsInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGamePawnsInterface()
{
	if (!Z_Registration_Info_UClass_USaveGamePawnsInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGamePawnsInterface.OuterSingleton, Z_Construct_UClass_USaveGamePawnsInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGamePawnsInterface.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<USaveGamePawnsInterface>()
{
	return USaveGamePawnsInterface::StaticClass();
}
USaveGamePawnsInterface::USaveGamePawnsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGamePawnsInterface);
USaveGamePawnsInterface::~USaveGamePawnsInterface() {}
// End Interface USaveGamePawnsInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGamePawnsInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGamePawnsInterface, USaveGamePawnsInterface::StaticClass, TEXT("USaveGamePawnsInterface"), &Z_Registration_Info_UClass_USaveGamePawnsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGamePawnsInterface), 1674867795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGamePawnsInterface_h_3232995708(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGamePawnsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Saving_SaveGamePawnsInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
