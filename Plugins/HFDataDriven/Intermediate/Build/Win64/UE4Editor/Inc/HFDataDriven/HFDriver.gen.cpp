// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFCore/HFDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFDriver() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_AHFDriver_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_AHFDriver();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFCenterModule_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AHFDriver::StaticRegisterNativesAHFDriver()
	{
	}
	UClass* Z_Construct_UClass_AHFDriver_NoRegister()
	{
		return AHFDriver::StaticClass();
	}
	struct Z_Construct_UClass_AHFDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModuleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ModuleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHFDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFDriver_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HFCore/HFDriver.h" },
		{ "ModuleRelativePath", "Public/HFCore/HFDriver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFDriver_Statics::NewProp_ModuleType_MetaData[] = {
		{ "Category", "HFDataDriven" },
		{ "Comment", "//\xc4\xa3????\xd3\xa6??\xc3\xb6????????\n" },
		{ "ModuleRelativePath", "Public/HFCore/HFDriver.h" },
		{ "ToolTip", "\xc4\xa3????\xd3\xa6??\xc3\xb6????????" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHFDriver_Statics::NewProp_ModuleType = { "ModuleType", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHFDriver, ModuleType), METADATA_PARAMS(Z_Construct_UClass_AHFDriver_Statics::NewProp_ModuleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHFDriver_Statics::NewProp_ModuleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFDriver_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "HFDataDriven" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HFCore/HFDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHFDriver_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x001000000208001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHFDriver, Center), Z_Construct_UClass_UHFCenterModule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHFDriver_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHFDriver_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFDriver_Statics::NewProp_RootScene_MetaData[] = {
		{ "Category", "HFDataDriven" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HFCore/HFDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHFDriver_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x001000000208001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHFDriver, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AHFDriver_Statics::NewProp_RootScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHFDriver_Statics::NewProp_RootScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHFDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHFDriver_Statics::NewProp_ModuleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHFDriver_Statics::NewProp_Center,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHFDriver_Statics::NewProp_RootScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHFDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHFDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHFDriver_Statics::ClassParams = {
		&AHFDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHFDriver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHFDriver_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHFDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHFDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHFDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHFDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHFDriver, 611926955);
	template<> HFDATADRIVEN_API UClass* StaticClass<AHFDriver>()
	{
		return AHFDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHFDriver(Z_Construct_UClass_AHFDriver, &AHFDriver::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("AHFDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHFDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
