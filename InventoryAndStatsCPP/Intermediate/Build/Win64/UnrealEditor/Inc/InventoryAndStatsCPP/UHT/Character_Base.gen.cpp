// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Characters/Character_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacter_Base() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_ACharacter_Base();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_ACharacter_Base_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UStatsComponent_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UStatsInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class ACharacter_Base
void ACharacter_Base::StaticRegisterNativesACharacter_Base()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacter_Base);
UClass* Z_Construct_UClass_ACharacter_Base_NoRegister()
{
	return ACharacter_Base::StaticClass();
}
struct Z_Construct_UClass_ACharacter_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/Character_Base.h" },
		{ "ModuleRelativePath", "Characters/Character_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsComponent_MetaData[] = {
		{ "Category", "Stats" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Characters/Character_Base.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacter_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacter_Base_Statics::NewProp_StatsComponent = { "StatsComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacter_Base, StatsComponent), Z_Construct_UClass_UStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsComponent_MetaData), NewProp_StatsComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacter_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacter_Base_Statics::NewProp_StatsComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACharacter_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACharacter_Base_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UStatsInterface_NoRegister, (int32)VTABLE_OFFSET(ACharacter_Base, IStatsInterface), false },  // 1747115430
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacter_Base_Statics::ClassParams = {
	&ACharacter_Base::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACharacter_Base_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Base_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacter_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacter_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacter_Base()
{
	if (!Z_Registration_Info_UClass_ACharacter_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacter_Base.OuterSingleton, Z_Construct_UClass_ACharacter_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacter_Base.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<ACharacter_Base>()
{
	return ACharacter_Base::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacter_Base);
ACharacter_Base::~ACharacter_Base() {}
// End Class ACharacter_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Character_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacter_Base, ACharacter_Base::StaticClass, TEXT("ACharacter_Base"), &Z_Registration_Info_UClass_ACharacter_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacter_Base), 157695974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Character_Base_h_3535105795(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Character_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Characters_Character_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
