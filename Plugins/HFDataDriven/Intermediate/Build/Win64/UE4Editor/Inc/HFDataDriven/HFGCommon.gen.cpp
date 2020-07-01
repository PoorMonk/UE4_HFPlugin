// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFGame/HFGCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFGCommon() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFGCommon_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFGCommon();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
// End Cross Module References
	void UHFGCommon::StaticRegisterNativesUHFGCommon()
	{
	}
	UClass* Z_Construct_UClass_UHFGCommon_NoRegister()
	{
		return UHFGCommon::StaticClass();
	}
	struct Z_Construct_UClass_UHFGCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHFGCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHFGCommon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HFGame/HFGCommon.h" },
		{ "ModuleRelativePath", "Public/HFGame/HFGCommon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHFGCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHFGCommon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHFGCommon_Statics::ClassParams = {
		&UHFGCommon::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHFGCommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHFGCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHFGCommon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHFGCommon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHFGCommon, 3143146277);
	template<> HFDATADRIVEN_API UClass* StaticClass<UHFGCommon>()
	{
		return UHFGCommon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHFGCommon(Z_Construct_UClass_UHFGCommon, &UHFGCommon::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("UHFGCommon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHFGCommon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
