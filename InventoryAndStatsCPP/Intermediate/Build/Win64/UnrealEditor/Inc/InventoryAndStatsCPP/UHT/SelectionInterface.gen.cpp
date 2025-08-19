// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventoryAndStatsCPP/SelectionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USelectionInterface();
INVENTORYANDSTATSCPP_API UClass* Z_Construct_UClass_USelectionInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventoryAndStatsCPP();
// End Cross Module References

// Begin Interface USelectionInterface Function Deselected
void ISelectionInterface::Deselected()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Deselected instead.");
}
static FName NAME_USelectionInterface_Deselected = FName(TEXT("Deselected"));
void ISelectionInterface::Execute_Deselected(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USelectionInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_USelectionInterface_Deselected);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ISelectionInterface*)(O->GetNativeInterfaceAddress(USelectionInterface::StaticClass())))
	{
		I->Deselected_Implementation();
	}
}
struct Z_Construct_UFunction_USelectionInterface_Deselected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "SelectionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectionInterface_Deselected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectionInterface, nullptr, "Deselected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectionInterface_Deselected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectionInterface_Deselected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USelectionInterface_Deselected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectionInterface_Deselected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISelectionInterface::execDeselected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Deselected_Implementation();
	P_NATIVE_END;
}
// End Interface USelectionInterface Function Deselected

// Begin Interface USelectionInterface Function Selected
void ISelectionInterface::Selected()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Selected instead.");
}
static FName NAME_USelectionInterface_Selected = FName(TEXT("Selected"));
void ISelectionInterface::Execute_Selected(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USelectionInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_USelectionInterface_Selected);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (ISelectionInterface*)(O->GetNativeInterfaceAddress(USelectionInterface::StaticClass())))
	{
		I->Selected_Implementation();
	}
}
struct Z_Construct_UFunction_USelectionInterface_Selected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Selection" },
		{ "ModuleRelativePath", "SelectionInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectionInterface_Selected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectionInterface, nullptr, "Selected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectionInterface_Selected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectionInterface_Selected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USelectionInterface_Selected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectionInterface_Selected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISelectionInterface::execSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Selected_Implementation();
	P_NATIVE_END;
}
// End Interface USelectionInterface Function Selected

// Begin Interface USelectionInterface
void USelectionInterface::StaticRegisterNativesUSelectionInterface()
{
	UClass* Class = USelectionInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Deselected", &ISelectionInterface::execDeselected },
		{ "Selected", &ISelectionInterface::execSelected },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectionInterface);
UClass* Z_Construct_UClass_USelectionInterface_NoRegister()
{
	return USelectionInterface::StaticClass();
}
struct Z_Construct_UClass_USelectionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "SelectionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectionInterface_Deselected, "Deselected" }, // 949659971
		{ &Z_Construct_UFunction_USelectionInterface_Selected, "Selected" }, // 1568304955
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISelectionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USelectionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_InventoryAndStatsCPP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectionInterface_Statics::ClassParams = {
	&USelectionInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USelectionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USelectionInterface()
{
	if (!Z_Registration_Info_UClass_USelectionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectionInterface.OuterSingleton, Z_Construct_UClass_USelectionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USelectionInterface.OuterSingleton;
}
template<> INVENTORYANDSTATSCPP_API UClass* StaticClass<USelectionInterface>()
{
	return USelectionInterface::StaticClass();
}
USelectionInterface::USelectionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USelectionInterface);
USelectionInterface::~USelectionInterface() {}
// End Interface USelectionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USelectionInterface, USelectionInterface::StaticClass, TEXT("USelectionInterface"), &Z_Registration_Info_UClass_USelectionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectionInterface), 2997258904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_3528103132(TEXT("/Script/InventoryAndStatsCPP"),
	Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyProjects_InventoryAndStatsCPP_Source_InventoryAndStatsCPP_SelectionInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
