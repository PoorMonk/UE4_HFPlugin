// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFObject/HFActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFActor() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_AHFActor_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_AHFActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
// End Cross Module References
	void AHFActor::StaticRegisterNativesAHFActor()
	{
	}
	UClass* Z_Construct_UClass_AHFActor_NoRegister()
	{
		return AHFActor::StaticClass();
	}
	struct Z_Construct_UClass_AHFActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHFActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHFActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HFObject/HFActor.h" },
		{ "ModuleRelativePath", "Public/HFObject/HFActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHFActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHFActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHFActor_Statics::ClassParams = {
		&AHFActor::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHFActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHFActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHFActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHFActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHFActor, 2963021677);
	template<> HFDATADRIVEN_API UClass* StaticClass<AHFActor>()
	{
		return AHFActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHFActor(Z_Construct_UClass_AHFActor, &AHFActor::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("AHFActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHFActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
