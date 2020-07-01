// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFCore/HFMMInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFMMInterface() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFMMInterface_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFMMInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
// End Cross Module References
	void UHFMMInterface::StaticRegisterNativesUHFMMInterface()
	{
	}
	UClass* Z_Construct_UClass_UHFMMInterface_NoRegister()
	{
		return UHFMMInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHFMMInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHFMMInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHFMMInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HFCore/HFMMInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHFMMInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHFMMInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHFMMInterface_Statics::ClassParams = {
		&UHFMMInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHFMMInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHFMMInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHFMMInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHFMMInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHFMMInterface, 2231246531);
	template<> HFDATADRIVEN_API UClass* StaticClass<UHFMMInterface>()
	{
		return UHFMMInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHFMMInterface(Z_Construct_UClass_UHFMMInterface, &UHFMMInterface::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("UHFMMInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHFMMInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
