// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFGame/HFGTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFGTypes() {}
// Cross Module References
	HFDATADRIVEN_API UEnum* Z_Construct_UEnum_HFDataDriven_ERCGameModule();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFGTypes_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFGTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ERCGameModule_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HFDataDriven_ERCGameModule, Z_Construct_UPackage__Script_HFDataDriven(), TEXT("ERCGameModule"));
		}
		return Singleton;
	}
	template<> HFDATADRIVEN_API UEnum* StaticEnum<ERCGameModule>()
	{
		return ERCGameModule_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERCGameModule(ERCGameModule_StaticEnum, TEXT("/Script/HFDataDriven"), TEXT("ERCGameModule"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HFDataDriven_ERCGameModule_Hash() { return 3021174976U; }
	UEnum* Z_Construct_UEnum_HFDataDriven_ERCGameModule()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HFDataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERCGameModule"), 0, Get_Z_Construct_UEnum_HFDataDriven_ERCGameModule_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERCGameModule::Center", (int64)ERCGameModule::Center },
				{ "ERCGameModule::HUD", (int64)ERCGameModule::HUD },
				{ "ERCGameModule::Player", (int64)ERCGameModule::Player },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Center.Name", "ERCGameModule::Center" },
				{ "HUD.Comment", "//????\xc4\xa3??\n" },
				{ "HUD.Name", "ERCGameModule::HUD" },
				{ "HUD.ToolTip", "????\xc4\xa3??" },
				{ "ModuleRelativePath", "Public/HFGame/HFGTypes.h" },
				{ "Player.Comment", "//UI\xc4\xa3?\xe9\xa3\xac\xd4\xbc?????\xda\xb5\xda\xb6?\xce\xbb\n" },
				{ "Player.Name", "ERCGameModule::Player" },
				{ "Player.ToolTip", "UI\xc4\xa3?\xe9\xa3\xac\xd4\xbc?????\xda\xb5\xda\xb6?\xce\xbb" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HFDataDriven,
				nullptr,
				"ERCGameModule",
				"ERCGameModule",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UHFGTypes::StaticRegisterNativesUHFGTypes()
	{
	}
	UClass* Z_Construct_UClass_UHFGTypes_NoRegister()
	{
		return UHFGTypes::StaticClass();
	}
	struct Z_Construct_UClass_UHFGTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHFGTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHFGTypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HFGame/HFGTypes.h" },
		{ "ModuleRelativePath", "Public/HFGame/HFGTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHFGTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHFGTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHFGTypes_Statics::ClassParams = {
		&UHFGTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHFGTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHFGTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHFGTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHFGTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHFGTypes, 223430710);
	template<> HFDATADRIVEN_API UClass* StaticClass<UHFGTypes>()
	{
		return UHFGTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHFGTypes(Z_Construct_UClass_UHFGTypes, &UHFGTypes::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("UHFGTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHFGTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
