// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Stats/StatsConfig.h"
#include "InventoryAndStatsCPP/Stats/StatsConfigData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatsConfig() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UStatsConfig();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UStatsConfig_NoRegister();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FStatsConfigData();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class UStatsConfig
void UStatsConfig::StaticRegisterNativesUStatsConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatsConfig);
UClass* Z_Construct_UClass_UStatsConfig_NoRegister()
{
	return UStatsConfig::StaticClass();
}
struct Z_Construct_UClass_UStatsConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Stats/StatsConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Stats/StatsConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[] = {
		{ "Category", "StatsConfig" },
		{ "ModuleRelativePath", "Stats/StatsConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Stats;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsConfig_Statics::NewProp_Stats_ValueProp = { "Stats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FStatsConfigData, METADATA_PARAMS(0, nullptr) }; // 792928407
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatsConfig_Statics::NewProp_Stats_Key_KeyProp = { "Stats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStatsConfig_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsConfig, Stats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stats_MetaData), NewProp_Stats_MetaData) }; // 1298103297 792928407
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsConfig_Statics::NewProp_Stats_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsConfig_Statics::NewProp_Stats_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsConfig_Statics::NewProp_Stats,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatsConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsConfig_Statics::ClassParams = {
	&UStatsConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStatsConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatsConfig_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsConfig()
{
	if (!Z_Registration_Info_UClass_UStatsConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsConfig.OuterSingleton, Z_Construct_UClass_UStatsConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsConfig.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UStatsConfig>()
{
	return UStatsConfig::StaticClass();
}
UStatsConfig::UStatsConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsConfig);
UStatsConfig::~UStatsConfig() {}
// End Class UStatsConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsConfig, UStatsConfig::StaticClass, TEXT("UStatsConfig"), &Z_Registration_Info_UClass_UStatsConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsConfig), 3716249869U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfig_h_450452754(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_StatsConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
