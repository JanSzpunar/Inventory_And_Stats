// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Interactables/Interactable_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable_Base() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_AInteractable_Base();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_AInteractable_Base_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USelectionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class AInteractable_Base
void AInteractable_Base::StaticRegisterNativesAInteractable_Base()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractable_Base);
UClass* Z_Construct_UClass_AInteractable_Base_NoRegister()
{
	return AInteractable_Base::StaticClass();
}
struct Z_Construct_UClass_AInteractable_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/Interactable_Base.h" },
		{ "ModuleRelativePath", "Interactables/Interactable_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractText_MetaData[] = {
		{ "Category", "Interactables" },
		{ "ModuleRelativePath", "Interactables/Interactable_Base.h" },
		{ "MultiLine", "TRUE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InteractText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractable_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AInteractable_Base_Statics::NewProp_InteractText = { "InteractText", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractable_Base, InteractText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractText_MetaData), NewProp_InteractText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractable_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Base_Statics::NewProp_InteractText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractable_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractable_Base_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInteractableInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractable_Base, IInteractableInterface), false },  // 845130032
	{ Z_Construct_UClass_USelectionInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractable_Base, ISelectionInterface), false },  // 2997258904
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractable_Base_Statics::ClassParams = {
	&AInteractable_Base::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInteractable_Base_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Base_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractable_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractable_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractable_Base()
{
	if (!Z_Registration_Info_UClass_AInteractable_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractable_Base.OuterSingleton, Z_Construct_UClass_AInteractable_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractable_Base.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<AInteractable_Base>()
{
	return AInteractable_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractable_Base);
AInteractable_Base::~AInteractable_Base() {}
// End Class AInteractable_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_Interactable_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractable_Base, AInteractable_Base::StaticClass, TEXT("AInteractable_Base"), &Z_Registration_Info_UClass_AInteractable_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractable_Base), 691333546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_Interactable_Base_h_3101746411(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_Interactable_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_Interactable_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
