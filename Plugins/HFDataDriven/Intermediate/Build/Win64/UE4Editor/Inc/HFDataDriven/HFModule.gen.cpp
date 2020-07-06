// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFCore/HFModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFModule() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFModule_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFModule();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
	HFDATADRIVEN_API UFunction* Z_Construct_UFunction_UHFModule_DestroyObject();
	HFDATADRIVEN_API UEnum* Z_Construct_UEnum_HFDataDriven_EAgreementType();
	HFDATADRIVEN_API UFunction* Z_Construct_UFunction_UHFModule_DisableObject();
	HFDATADRIVEN_API UFunction* Z_Construct_UFunction_UHFModule_EnableObject();
// End Cross Module References
	void UHFModule::StaticRegisterNativesUHFModule()
	{
		UClass* Class = UHFModule::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyObject", &UHFModule::execDestroyObject },
			{ "DisableObject", &UHFModule::execDisableObject },
			{ "EnableObject", &UHFModule::execEnableObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHFModule_DestroyObject_Statics
	{
		struct HFModule_eventDestroyObject_Parms
		{
			EAgreementType Agreement;
			TArray<FName> TargetNameGroup;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetNameGroup;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetNameGroup_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Agreement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Agreement_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHFModule_DestroyObject_Statics::NewProp_TargetNameGroup = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HFModule_eventDestroyObject_Parms, TargetNameGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHFModule_DestroyObject_Statics::NewProp_TargetNameGroup_Inner = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHFModule_DestroyObject_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HFModule_eventDestroyObject_Parms, Agreement), Z_Construct_UEnum_HFDataDriven_EAgreementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHFModule_DestroyObject_Statics::NewProp_Agreement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHFModule_DestroyObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHFModule_DestroyObject_Statics::NewProp_TargetNameGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHFModule_DestroyObject_Statics::NewProp_TargetNameGroup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHFModule_DestroyObject_Statics::NewProp_Agreement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHFModule_DestroyObject_Statics::NewProp_Agreement_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHFModule_DestroyObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//?????\xc2\xbc????????\xd9\xb6???\n" },
		{ "ModuleRelativePath", "Public/HFCore/HFModule.h" },
		{ "ToolTip", "?????\xc2\xbc????????\xd9\xb6???" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHFModule_DestroyObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHFModule, nullptr, "DestroyObject", nullptr, nullptr, sizeof(HFModule_eventDestroyObject_Parms), Z_Construct_UFunction_UHFModule_DestroyObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHFModule_DestroyObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHFModule_DestroyObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHFModule_DestroyObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHFModule_DestroyObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHFModule_DestroyObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHFModule_DisableObject_Statics
	{
		struct HFModule_eventDisableObject_Parms
		{
			EAgreementType Agreement;
			TArray<FName> TargetNameGroup;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetNameGroup;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetNameGroup_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Agreement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Agreement_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHFModule_DisableObject_Statics::NewProp_TargetNameGroup = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HFModule_eventDisableObject_Parms, TargetNameGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHFModule_DisableObject_Statics::NewProp_TargetNameGroup_Inner = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHFModule_DisableObject_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HFModule_eventDisableObject_Parms, Agreement), Z_Construct_UEnum_HFDataDriven_EAgreementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHFModule_DisableObject_Statics::NewProp_Agreement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHFModule_DisableObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHFModule_DisableObject_Statics::NewProp_TargetNameGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHFModule_DisableObject_Statics::NewProp_TargetNameGroup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHFModule_DisableObject_Statics::NewProp_Agreement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHFModule_DisableObject_Statics::NewProp_Agreement_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHFModule_DisableObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//?????\xc2\xbc?????\xca\xa7??????\n" },
		{ "ModuleRelativePath", "Public/HFCore/HFModule.h" },
		{ "ToolTip", "?????\xc2\xbc?????\xca\xa7??????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHFModule_DisableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHFModule, nullptr, "DisableObject", nullptr, nullptr, sizeof(HFModule_eventDisableObject_Parms), Z_Construct_UFunction_UHFModule_DisableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHFModule_DisableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHFModule_DisableObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHFModule_DisableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHFModule_DisableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHFModule_DisableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHFModule_EnableObject_Statics
	{
		struct HFModule_eventEnableObject_Parms
		{
			EAgreementType Agreement;
			TArray<FName> TargetNameGroup;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetNameGroup;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TargetNameGroup_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Agreement;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Agreement_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UHFModule_EnableObject_Statics::NewProp_TargetNameGroup = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HFModule_eventEnableObject_Parms, TargetNameGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UHFModule_EnableObject_Statics::NewProp_TargetNameGroup_Inner = { "TargetNameGroup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHFModule_EnableObject_Statics::NewProp_Agreement = { "Agreement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HFModule_eventEnableObject_Parms, Agreement), Z_Construct_UEnum_HFDataDriven_EAgreementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHFModule_EnableObject_Statics::NewProp_Agreement_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHFModule_EnableObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHFModule_EnableObject_Statics::NewProp_TargetNameGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHFModule_EnableObject_Statics::NewProp_TargetNameGroup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHFModule_EnableObject_Statics::NewProp_Agreement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHFModule_EnableObject_Statics::NewProp_Agreement_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHFModule_EnableObject_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//?????\xc2\xbc?????????????\n" },
		{ "ModuleRelativePath", "Public/HFCore/HFModule.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHFModule_EnableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHFModule, nullptr, "EnableObject", nullptr, nullptr, sizeof(HFModule_eventEnableObject_Parms), Z_Construct_UFunction_UHFModule_EnableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHFModule_EnableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHFModule_EnableObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHFModule_EnableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHFModule_EnableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHFModule_EnableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHFModule_NoRegister()
	{
		return UHFModule::StaticClass();
	}
	struct Z_Construct_UClass_UHFModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ModuleIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHFModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHFModule_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHFModule_DestroyObject, "DestroyObject" }, // 2611291110
		{ &Z_Construct_UFunction_UHFModule_DisableObject, "DisableObject" }, // 3514549470
		{ &Z_Construct_UFunction_UHFModule_EnableObject, "EnableObject" }, // 1938196763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHFModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HFCore/HFModule.h" },
		{ "ModuleRelativePath", "Public/HFCore/HFModule.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHFModule_Statics::NewProp_ModuleIndex_MetaData[] = {
		{ "Category", "HFDataDriven" },
		{ "ModuleRelativePath", "Public/HFCore/HFModule.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHFModule_Statics::NewProp_ModuleIndex = { "ModuleIndex", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHFModule, ModuleIndex), METADATA_PARAMS(Z_Construct_UClass_UHFModule_Statics::NewProp_ModuleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHFModule_Statics::NewProp_ModuleIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHFModule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHFModule_Statics::NewProp_ModuleIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHFModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHFModule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHFModule_Statics::ClassParams = {
		&UHFModule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UHFModule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UHFModule_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHFModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHFModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHFModule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHFModule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHFModule, 4011317647);
	template<> HFDATADRIVEN_API UClass* StaticClass<UHFModule>()
	{
		return UHFModule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHFModule(Z_Construct_UClass_UHFModule, &UHFModule::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("UHFModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHFModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
