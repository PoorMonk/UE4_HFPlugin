// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFObject/HFObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFObject() {}
// Cross Module References
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFObject_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
// End Cross Module References
	void UHFObject::StaticRegisterNativesUHFObject()
	{
	}
	UClass* Z_Construct_UClass_UHFObject_NoRegister()
	{
		return UHFObject::StaticClass();
	}
	struct Z_Construct_UClass_UHFObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHFObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHFObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HFObject/HFObject.h" },
		{ "ModuleRelativePath", "Public/HFObject/HFObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHFObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHFObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHFObject_Statics::ClassParams = {
		&UHFObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHFObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHFObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHFObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHFObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHFObject, 3366219629);
	template<> HFDATADRIVEN_API UClass* StaticClass<UHFObject>()
	{
		return UHFObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHFObject(Z_Construct_UClass_UHFObject, &UHFObject::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("UHFObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHFObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
