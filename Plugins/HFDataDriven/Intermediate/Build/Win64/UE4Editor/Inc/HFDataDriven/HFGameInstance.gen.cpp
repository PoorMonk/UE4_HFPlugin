// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFObject/HFGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFGameInstance() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFGameInstance_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFOOInterface_NoRegister();
// End Cross Module References
	void UHFGameInstance::StaticRegisterNativesUHFGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UHFGameInstance_NoRegister()
	{
		return UHFGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UHFGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHFGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHFGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HFObject/HFGameInstance.h" },
		{ "ModuleRelativePath", "Public/HFObject/HFGameInstance.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UHFGameInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHFOOInterface_NoRegister, (int32)VTABLE_OFFSET(UHFGameInstance, IHFOOInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHFGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHFGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHFGameInstance_Statics::ClassParams = {
		&UHFGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UHFGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHFGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHFGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHFGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHFGameInstance, 631889180);
	template<> HFDATADRIVEN_API UClass* StaticClass<UHFGameInstance>()
	{
		return UHFGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHFGameInstance(Z_Construct_UClass_UHFGameInstance, &UHFGameInstance::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("UHFGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHFGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
