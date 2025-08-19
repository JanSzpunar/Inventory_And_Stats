// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/Interactables/InteractableController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableController() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInteractableController();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_UInteractableController_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Class UInteractableController Function GetCurrentInteractable
struct Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics
{
	struct InteractableController_eventGetCurrentInteractable_Parms
	{
		const AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interactables" },
		{ "ModuleRelativePath", "Interactables/InteractableController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractableController_eventGetCurrentInteractable_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableController, nullptr, "GetCurrentInteractable", nullptr, nullptr, Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics::InteractableController_eventGetCurrentInteractable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics::InteractableController_eventGetCurrentInteractable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractableController_GetCurrentInteractable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractableController_GetCurrentInteractable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractableController::execGetCurrentInteractable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const AActor**)Z_Param__Result=P_THIS->GetCurrentInteractable();
	P_NATIVE_END;
}
// End Class UInteractableController Function GetCurrentInteractable

// Begin Class UInteractableController
void UInteractableController::StaticRegisterNativesUInteractableController()
{
	UClass* Class = UInteractableController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentInteractable", &UInteractableController::execGetCurrentInteractable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractableController);
UClass* Z_Construct_UClass_UInteractableController_NoRegister()
{
	return UInteractableController::StaticClass();
}
struct Z_Construct_UClass_UInteractableController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Interactables/InteractableController.h" },
		{ "ModuleRelativePath", "Interactables/InteractableController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartRaycastOffset_MetaData[] = {
		{ "Category", "Interactables" },
		{ "ModuleRelativePath", "Interactables/InteractableController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RaycastLength_MetaData[] = {
		{ "Category", "Interactables" },
		{ "ModuleRelativePath", "Interactables/InteractableController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartRaycastOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RaycastLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractableController_GetCurrentInteractable, "GetCurrentInteractable" }, // 3296047354
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractableController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractableController_Statics::NewProp_StartRaycastOffset = { "StartRaycastOffset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractableController, StartRaycastOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartRaycastOffset_MetaData), NewProp_StartRaycastOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractableController_Statics::NewProp_RaycastLength = { "RaycastLength", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractableController, RaycastLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RaycastLength_MetaData), NewProp_RaycastLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractableController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableController_Statics::NewProp_StartRaycastOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractableController_Statics::NewProp_RaycastLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractableController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractableController_Statics::ClassParams = {
	&UInteractableController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractableController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableController_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableController_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractableController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractableController()
{
	if (!Z_Registration_Info_UClass_UInteractableController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractableController.OuterSingleton, Z_Construct_UClass_UInteractableController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractableController.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<UInteractableController>()
{
	return UInteractableController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableController);
UInteractableController::~UInteractableController() {}
// End Class UInteractableController

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractableController, UInteractableController::StaticClass, TEXT("UInteractableController"), &Z_Registration_Info_UClass_UInteractableController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractableController), 2843265464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h_2902325656(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_Inventory_And_Stats_CPP_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_Interactables_InteractableController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
