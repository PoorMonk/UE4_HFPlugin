// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFCommon/HFCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFCommon() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFCommon_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFCommon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
// End Cross Module References
	void UHFCommon::StaticRegisterNativesUHFCommon()
	{
	}
	UClass* Z_Construct_UClass_UHFCommon_NoRegister()
	{
		return UHFCommon::StaticClass();
	}
	struct Z_Construct_UClass_UHFCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHFCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHFCommon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HFCommon/HFCommon.h" },
		{ "ModuleRelativePath", "Public/HFCommon/HFCommon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHFCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHFCommon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHFCommon_Statics::ClassParams = {
		&UHFCommon::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHFCommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHFCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHFCommon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHFCommon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHFCommon, 2241775330);
	template<> HFDATADRIVEN_API UClass* StaticClass<UHFCommon>()
	{
		return UHFCommon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHFCommon(Z_Construct_UClass_UHFCommon, &UHFCommon::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("UHFCommon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHFCommon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
