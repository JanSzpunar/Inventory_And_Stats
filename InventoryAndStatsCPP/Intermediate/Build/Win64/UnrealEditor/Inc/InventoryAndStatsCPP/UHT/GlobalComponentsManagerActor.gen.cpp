// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Framework/GlobalComponentsManagerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGlobalComponentsManagerActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_AGlobalComponentsManagerActor();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_AGlobalComponentsManagerActor_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UEquipmentInterface_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoriesController_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInventoryInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class AGlobalComponentsManagerActor
void AGlobalComponentsManagerActor::StaticRegisterNativesAGlobalComponentsManagerActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGlobalComponentsManagerActor);
UClass* Z_Construct_UClass_AGlobalComponentsManagerActor_NoRegister()
{
	return AGlobalComponentsManagerActor::StaticClass();
}
struct Z_Construct_UClass_AGlobalComponentsManagerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Framework/GlobalComponentsManagerActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Framework/GlobalComponentsManagerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InventoriesController_MetaData[] = {
		{ "Category", "Inventory" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Framework/GlobalComponentsManagerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InventoriesController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGlobalComponentsManagerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::NewProp_InventoriesController = { "InventoriesController", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGlobalComponentsManagerActor, InventoriesController), Z_Construct_UClass_UInventoriesController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InventoriesController_MetaData), NewProp_InventoriesController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::NewProp_InventoriesController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInventoryInterface_NoRegister, (int32)VTABLE_OFFSET(AGlobalComponentsManagerActor, IInventoryInterface), false },  // 1598029802
	{ Z_Construct_UClass_UEquipmentInterface_NoRegister, (int32)VTABLE_OFFSET(AGlobalComponentsManagerActor, IEquipmentInterface), false },  // 1922836400
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::ClassParams = {
	&AGlobalComponentsManagerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGlobalComponentsManagerActor()
{
	if (!Z_Registration_Info_UClass_AGlobalComponentsManagerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGlobalComponentsManagerActor.OuterSingleton, Z_Construct_UClass_AGlobalComponentsManagerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGlobalComponentsManagerActor.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<AGlobalComponentsManagerActor>()
{
	return AGlobalComponentsManagerActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGlobalComponentsManagerActor);
AGlobalComponentsManagerActor::~AGlobalComponentsManagerActor() {}
// End Class AGlobalComponentsManagerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GlobalComponentsManagerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGlobalComponentsManagerActor, AGlobalComponentsManagerActor::StaticClass, TEXT("AGlobalComponentsManagerActor"), &Z_Registration_Info_UClass_AGlobalComponentsManagerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGlobalComponentsManagerActor), 2346254638U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GlobalComponentsManagerActor_h_2868205320(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GlobalComponentsManagerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GlobalComponentsManagerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
