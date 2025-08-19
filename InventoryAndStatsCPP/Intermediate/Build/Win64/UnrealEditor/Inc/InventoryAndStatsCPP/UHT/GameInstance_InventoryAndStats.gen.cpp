// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Framework/GameInstance_InventoryAndStats.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstance_InventoryAndStats() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UGameInstance_InventoryAndStats();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UGameInstance_InventoryAndStats_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UGameInstanceInterface_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USaveGameInterface_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USaveGameInventoryInterface_NoRegister();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USaveGamePawnsInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class UGameInstance_InventoryAndStats
void UGameInstance_InventoryAndStats::StaticRegisterNativesUGameInstance_InventoryAndStats()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInstance_InventoryAndStats);
UClass* Z_Construct_UClass_UGameInstance_InventoryAndStats_NoRegister()
{
	return UGameInstance_InventoryAndStats::StaticClass();
}
struct Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Framework/GameInstance_InventoryAndStats.h" },
		{ "ModuleRelativePath", "Framework/GameInstance_InventoryAndStats.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameComponents_MetaData[] = {
		{ "ModuleRelativePath", "Framework/GameInstance_InventoryAndStats.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGameComponents_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_SaveGameComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstance_InventoryAndStats>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::NewProp_SaveGameComponents_ElementProp = { "SaveGameComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::NewProp_SaveGameComponents = { "SaveGameComponents", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstance_InventoryAndStats, SaveGameComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameComponents_MetaData), NewProp_SaveGameComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::NewProp_SaveGameComponents_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::NewProp_SaveGameComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameInstanceInterface_NoRegister, (int32)VTABLE_OFFSET(UGameInstance_InventoryAndStats, IGameInstanceInterface), false },  // 2391617462
	{ Z_Construct_UClass_USaveGameInterface_NoRegister, (int32)VTABLE_OFFSET(UGameInstance_InventoryAndStats, ISaveGameInterface), false },  // 960589617
	{ Z_Construct_UClass_USaveGameInventoryInterface_NoRegister, (int32)VTABLE_OFFSET(UGameInstance_InventoryAndStats, ISaveGameInventoryInterface), false },  // 1501722597
	{ Z_Construct_UClass_USaveGamePawnsInterface_NoRegister, (int32)VTABLE_OFFSET(UGameInstance_InventoryAndStats, ISaveGamePawnsInterface), false },  // 1674867795
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::ClassParams = {
	&UGameInstance_InventoryAndStats::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameInstance_InventoryAndStats()
{
	if (!Z_Registration_Info_UClass_UGameInstance_InventoryAndStats.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInstance_InventoryAndStats.OuterSingleton, Z_Construct_UClass_UGameInstance_InventoryAndStats_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameInstance_InventoryAndStats.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UGameInstance_InventoryAndStats>()
{
	return UGameInstance_InventoryAndStats::StaticClass();
}
UGameInstance_InventoryAndStats::UGameInstance_InventoryAndStats(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstance_InventoryAndStats);
UGameInstance_InventoryAndStats::~UGameInstance_InventoryAndStats() {}
// End Class UGameInstance_InventoryAndStats

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameInstance_InventoryAndStats_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameInstance_InventoryAndStats, UGameInstance_InventoryAndStats::StaticClass, TEXT("UGameInstance_InventoryAndStats"), &Z_Registration_Info_UClass_UGameInstance_InventoryAndStats, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInstance_InventoryAndStats), 2518946931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameInstance_InventoryAndStats_h_568557781(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameInstance_InventoryAndStats_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Framework_GameInstance_InventoryAndStats_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
