// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Stats/BaseStats.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseStats() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FBaseStats();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin ScriptStruct FBaseStats
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseStats;
class UScriptStruct* FBaseStats::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseStats.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseStats.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseStats, (UObject*)Z_Construct_UPackage__Script_InventoryAndStatsCPP(), TEXT("BaseStats"));
	}
	return Z_Registration_Info_UScriptStruct_BaseStats.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UScriptStruct* StaticStruct<FBaseStats>()
{
	return FBaseStats::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBaseStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Stats/BaseStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "BaseStats" },
		{ "ModuleRelativePath", "Stats/BaseStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatLevels_MetaData[] = {
		{ "Category", "BaseStats" },
		{ "ModuleRelativePath", "Stats/BaseStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FreeLevelPoints_MetaData[] = {
		{ "ModuleRelativePath", "Stats/BaseStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Experience_MetaData[] = {
		{ "ModuleRelativePath", "Stats/BaseStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "Category", "BaseStats" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Stats/BaseStats.h" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatLevels_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StatLevels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_StatLevels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FreeLevelPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Experience;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Level;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseStats>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseStats, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_StatLevels_ValueProp = { "StatLevels", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_StatLevels_Key_KeyProp = { "StatLevels_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_StatLevels = { "StatLevels", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseStats, StatLevels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatLevels_MetaData), NewProp_StatLevels_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_FreeLevelPoints = { "FreeLevelPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseStats, FreeLevelPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FreeLevelPoints_MetaData), NewProp_FreeLevelPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_Experience = { "Experience", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseStats, Experience), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Experience_MetaData), NewProp_Experience_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseStats, Level), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_StatLevels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_StatLevels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_StatLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_FreeLevelPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_Experience,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseStats_Statics::NewProp_Level,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseStats_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
	nullptr,
	&NewStructOps,
	"BaseStats",
	Z_Construct_UScriptStruct_FBaseStats_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseStats_Statics::PropPointers),
	sizeof(FBaseStats),
	alignof(FBaseStats),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseStats_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseStats_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBaseStats()
{
	if (!Z_Registration_Info_UScriptStruct_BaseStats.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseStats.InnerSingleton, Z_Construct_UScriptStruct_FBaseStats_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BaseStats.InnerSingleton;
}
// End ScriptStruct FBaseStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_BaseStats_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBaseStats::StaticStruct, Z_Construct_UScriptStruct_FBaseStats_Statics::NewStructOps, TEXT("BaseStats"), &Z_Registration_Info_UScriptStruct_BaseStats, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseStats), 3185252591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_BaseStats_h_1199448788(TEXT("/Script/InventoryAndStatsCPP"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_BaseStats_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Stats_BaseStats_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
