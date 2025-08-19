// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/PlayerStart_InventoryStats.h"
#include "InventoryAndStatsCPP/Saving/SavePlayersData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStart_InventoryStats() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_APlayer_Base_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_APlayerStart_InventoryStats();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_APlayerStart_InventoryStats_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USaveGameInterface_NoRegister();
INVENTORYANDSTATSCPP_API UScriptStruct* Z_Construct_UScriptStruct_FSavePlayersData();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class APlayerStart_InventoryStats
void APlayerStart_InventoryStats::StaticRegisterNativesAPlayerStart_InventoryStats()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerStart_InventoryStats);
UClass* Z_Construct_UClass_APlayerStart_InventoryStats_NoRegister()
{
	return APlayerStart_InventoryStats::StaticClass();
}
struct Z_Construct_UClass_APlayerStart_InventoryStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "PlayerStart_InventoryStats.h" },
		{ "ModuleRelativePath", "PlayerStart_InventoryStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayerClass_MetaData[] = {
		{ "Category", "Editable" },
		{ "ModuleRelativePath", "PlayerStart_InventoryStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPlayersData_MetaData[] = {
		{ "Category", "Editable" },
		{ "ModuleRelativePath", "PlayerStart_InventoryStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultPlayerClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultPlayersData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerStart_InventoryStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerStart_InventoryStats_Statics::NewProp_DefaultPlayerClass = { "DefaultPlayerClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerStart_InventoryStats, DefaultPlayerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayer_Base_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlayerClass_MetaData), NewProp_DefaultPlayerClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerStart_InventoryStats_Statics::NewProp_DefaultPlayersData = { "DefaultPlayersData", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerStart_InventoryStats, DefaultPlayersData), Z_Construct_UScriptStruct_FSavePlayersData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPlayersData_MetaData), NewProp_DefaultPlayersData_MetaData) }; // 135201384
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerStart_InventoryStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerStart_InventoryStats_Statics::NewProp_DefaultPlayerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerStart_InventoryStats_Statics::NewProp_DefaultPlayersData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStart_InventoryStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerStart_InventoryStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerStart,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStart_InventoryStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APlayerStart_InventoryStats_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USaveGameInterface_NoRegister, (int32)VTABLE_OFFSET(APlayerStart_InventoryStats, ISaveGameInterface), false },  // 960589617
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerStart_InventoryStats_Statics::ClassParams = {
	&APlayerStart_InventoryStats::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerStart_InventoryStats_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStart_InventoryStats_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStart_InventoryStats_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerStart_InventoryStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerStart_InventoryStats()
{
	if (!Z_Registration_Info_UClass_APlayerStart_InventoryStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerStart_InventoryStats.OuterSingleton, Z_Construct_UClass_APlayerStart_InventoryStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerStart_InventoryStats.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<APlayerStart_InventoryStats>()
{
	return APlayerStart_InventoryStats::StaticClass();
}
APlayerStart_InventoryStats::APlayerStart_InventoryStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerStart_InventoryStats);
APlayerStart_InventoryStats::~APlayerStart_InventoryStats() {}
// End Class APlayerStart_InventoryStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_PlayerStart_InventoryStats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerStart_InventoryStats, APlayerStart_InventoryStats::StaticClass, TEXT("APlayerStart_InventoryStats"), &Z_Registration_Info_UClass_APlayerStart_InventoryStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerStart_InventoryStats), 4254752659U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_PlayerStart_InventoryStats_h_152978387(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_PlayerStart_InventoryStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_PlayerStart_InventoryStats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
