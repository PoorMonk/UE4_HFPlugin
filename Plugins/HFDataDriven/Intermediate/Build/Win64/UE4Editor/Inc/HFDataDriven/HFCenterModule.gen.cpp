// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFCore/HFCenterModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFCenterModule() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFCenterModule_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFCenterModule();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFModule();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
// End Cross Module References
	void UHFCenterModule::StaticRegisterNativesUHFCenterModule()
	{
	}
	UClass* Z_Construct_UClass_UHFCenterModule_NoRegister()
	{
		return UHFCenterModule::StaticClass();
	}
	struct Z_Construct_UClass_UHFCenterModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHFCenterModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHFModule,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHFCenterModule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "HFCore/HFCenterModule.h" },
		{ "ModuleRelativePath", "Public/HFCore/HFCenterModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHFCenterModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHFCenterModule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHFCenterModule_Statics::ClassParams = {
		&UHFCenterModule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHFCenterModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHFCenterModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHFCenterModule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHFCenterModule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHFCenterModule, 235075993);
	template<> HFDATADRIVEN_API UClass* StaticClass<UHFCenterModule>()
	{
		return UHFCenterModule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHFCenterModule(Z_Construct_UClass_UHFCenterModule, &UHFCenterModule::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("UHFCenterModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHFCenterModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
