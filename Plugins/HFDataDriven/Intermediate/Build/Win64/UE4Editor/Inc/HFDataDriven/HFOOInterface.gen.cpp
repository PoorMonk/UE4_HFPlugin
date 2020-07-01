// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFObject/HFOOInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFOOInterface() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFOOInterface_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFOOInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
// End Cross Module References
	void UHFOOInterface::StaticRegisterNativesUHFOOInterface()
	{
	}
	UClass* Z_Construct_UClass_UHFOOInterface_NoRegister()
	{
		return UHFOOInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHFOOInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHFOOInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHFOOInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HFObject/HFOOInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHFOOInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHFOOInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHFOOInterface_Statics::ClassParams = {
		&UHFOOInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHFOOInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHFOOInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHFOOInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHFOOInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHFOOInterface, 3768106361);
	template<> HFDATADRIVEN_API UClass* StaticClass<UHFOOInterface>()
	{
		return UHFOOInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHFOOInterface(Z_Construct_UClass_UHFOOInterface, &UHFOOInterface::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("UHFOOInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHFOOInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
