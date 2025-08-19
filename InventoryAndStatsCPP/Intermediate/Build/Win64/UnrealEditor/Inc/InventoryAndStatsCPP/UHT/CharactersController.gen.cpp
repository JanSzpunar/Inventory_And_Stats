// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/CharactersController/CharactersController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharactersController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UCharactersController();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UCharactersController_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UCharactersControllerInterface_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USaveGameInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class UCharactersController
void UCharactersController::StaticRegisterNativesUCharactersController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCharactersController);
UClass* Z_Construct_UClass_UCharactersController_NoRegister()
{
	return UCharactersController::StaticClass();
}
struct Z_Construct_UClass_UCharactersController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CharactersController/CharactersController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CharactersController/CharactersController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharactersController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCharactersController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCharactersController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCharactersController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UCharactersControllerInterface_NoRegister, (int32)VTABLE_OFFSET(UCharactersController, ICharactersControllerInterface), false },  // 1055488451
	{ Z_Construct_UClass_USaveGameInterface_NoRegister, (int32)VTABLE_OFFSET(UCharactersController, ISaveGameInterface), false },  // 960589617
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCharactersController_Statics::ClassParams = {
	&UCharactersController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCharactersController_Statics::Class_MetaDataParams), Z_Construct_UClass_UCharactersController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCharactersController()
{
	if (!Z_Registration_Info_UClass_UCharactersController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCharactersController.OuterSingleton, Z_Construct_UClass_UCharactersController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCharactersController.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UCharactersController>()
{
	return UCharactersController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCharactersController);
UCharactersController::~UCharactersController() {}
// End Class UCharactersController

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCharactersController, UCharactersController::StaticClass, TEXT("UCharactersController"), &Z_Registration_Info_UClass_UCharactersController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCharactersController), 2283511308U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersController_h_2874390821(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_CharactersController_CharactersController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
