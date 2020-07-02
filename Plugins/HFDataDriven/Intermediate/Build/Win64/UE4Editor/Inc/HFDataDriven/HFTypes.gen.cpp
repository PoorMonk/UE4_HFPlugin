// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HFDataDriven/Public/HFCommon/HFTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHFTypes() {}
// Cross Module References
	HFDATADRIVEN_API UEnum* Z_Construct_UEnum_HFDataDriven_EAgreementType();
	UPackage* Z_Construct_UPackage__Script_HFDataDriven();
	HFDATADRIVEN_API UEnum* Z_Construct_UEnum_HFDataDriven_EBaseObjectState();
	HFDATADRIVEN_API UEnum* Z_Construct_UEnum_HFDataDriven_EBaseObjectLife();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFTypes_NoRegister();
	HFDATADRIVEN_API UClass* Z_Construct_UClass_UHFTypes();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EAgreementType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HFDataDriven_EAgreementType, Z_Construct_UPackage__Script_HFDataDriven(), TEXT("EAgreementType"));
		}
		return Singleton;
	}
	template<> HFDATADRIVEN_API UEnum* StaticEnum<EAgreementType>()
	{
		return EAgreementType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAgreementType(EAgreementType_StaticEnum, TEXT("/Script/HFDataDriven"), TEXT("EAgreementType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HFDataDriven_EAgreementType_Hash() { return 520078248U; }
	UEnum* Z_Construct_UEnum_HFDataDriven_EAgreementType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HFDataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAgreementType"), 0, Get_Z_Construct_UEnum_HFDataDriven_EAgreementType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAgreementType::SelfObject", (int64)EAgreementType::SelfObject },
				{ "EAgreementType::OtherObject", (int64)EAgreementType::OtherObject },
				{ "EAgreementType::ClassOtherObject", (int64)EAgreementType::ClassOtherObject },
				{ "EAgreementType::SelfClass", (int64)EAgreementType::SelfClass },
				{ "EAgreementType::OtherClass", (int64)EAgreementType::OtherClass },
				{ "EAgreementType::All", (int64)EAgreementType::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Comment", "//????????\xcd\xa8??\n" },
				{ "All.Name", "EAgreementType::All" },
				{ "All.ToolTip", "????????\xcd\xa8??" },
				{ "ClassOtherObject.Comment", "//???????\xc4\xb6???\xd6\xae???\xc4\xb6???\xcd\xa8??\n" },
				{ "ClassOtherObject.Name", "EAgreementType::ClassOtherObject" },
				{ "ClassOtherObject.ToolTip", "???????\xc4\xb6???\xd6\xae???\xc4\xb6???\xcd\xa8??" },
				{ "Comment", "//????????\xd0\xad??\n" },
				{ "ModuleRelativePath", "Public/HFCommon/HFTypes.h" },
				{ "OtherClass.Comment", "//?????????\xc4\xb6???\xcd\xa8??\n" },
				{ "OtherClass.Name", "EAgreementType::OtherClass" },
				{ "OtherClass.ToolTip", "?????????\xc4\xb6???\xcd\xa8??" },
				{ "OtherObject.Comment", "//???????\xc4\xb6???\xcd\xa8??\n" },
				{ "OtherObject.Name", "EAgreementType::OtherObject" },
				{ "OtherObject.ToolTip", "???????\xc4\xb6???\xcd\xa8??" },
				{ "SelfClass.Comment", "//???????\xc4\xb6???????\xcd\xac????????????\xcd\xa8??\n" },
				{ "SelfClass.Name", "EAgreementType::SelfClass" },
				{ "SelfClass.ToolTip", "???????\xc4\xb6???????\xcd\xac????????????\xcd\xa8??" },
				{ "SelfObject.Name", "EAgreementType::SelfObject" },
				{ "ToolTip", "????????\xd0\xad??" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HFDataDriven,
				nullptr,
				"EAgreementType",
				"EAgreementType",
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
	static UEnum* EBaseObjectState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HFDataDriven_EBaseObjectState, Z_Construct_UPackage__Script_HFDataDriven(), TEXT("EBaseObjectState"));
		}
		return Singleton;
	}
	template<> HFDATADRIVEN_API UEnum* StaticEnum<EBaseObjectState>()
	{
		return EBaseObjectState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBaseObjectState(EBaseObjectState_StaticEnum, TEXT("/Script/HFDataDriven"), TEXT("EBaseObjectState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HFDataDriven_EBaseObjectState_Hash() { return 1622428239U; }
	UEnum* Z_Construct_UEnum_HFDataDriven_EBaseObjectState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HFDataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBaseObjectState"), 0, Get_Z_Construct_UEnum_HFDataDriven_EBaseObjectState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBaseObjectState::Active", (int64)EBaseObjectState::Active },
				{ "EBaseObjectState::Stable", (int64)EBaseObjectState::Stable },
				{ "EBaseObjectState::Destroy", (int64)EBaseObjectState::Destroy },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Active.Name", "EBaseObjectState::Active" },
				{ "Comment", "//????\xd7\xb4\xcc\xac\n" },
				{ "Destroy.Comment", "//?\xc8\xb6?\xd7\xb4\xcc\xac\n" },
				{ "Destroy.Name", "EBaseObjectState::Destroy" },
				{ "Destroy.ToolTip", "?\xc8\xb6?\xd7\xb4\xcc\xac" },
				{ "ModuleRelativePath", "Public/HFCommon/HFTypes.h" },
				{ "Stable.Comment", "//????\xd7\xb4\xcc\xac\n" },
				{ "Stable.Name", "EBaseObjectState::Stable" },
				{ "Stable.ToolTip", "????\xd7\xb4\xcc\xac" },
				{ "ToolTip", "????\xd7\xb4\xcc\xac" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HFDataDriven,
				nullptr,
				"EBaseObjectState",
				"EBaseObjectState",
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
	static UEnum* EBaseObjectLife_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HFDataDriven_EBaseObjectLife, Z_Construct_UPackage__Script_HFDataDriven(), TEXT("EBaseObjectLife"));
		}
		return Singleton;
	}
	template<> HFDATADRIVEN_API UEnum* StaticEnum<EBaseObjectLife>()
	{
		return EBaseObjectLife_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBaseObjectLife(EBaseObjectLife_StaticEnum, TEXT("/Script/HFDataDriven"), TEXT("EBaseObjectLife"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HFDataDriven_EBaseObjectLife_Hash() { return 3049490061U; }
	UEnum* Z_Construct_UEnum_HFDataDriven_EBaseObjectLife()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HFDataDriven();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBaseObjectLife"), 0, Get_Z_Construct_UEnum_HFDataDriven_EBaseObjectLife_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBaseObjectLife::None", (int64)EBaseObjectLife::None },
				{ "EBaseObjectLife::Init", (int64)EBaseObjectLife::Init },
				{ "EBaseObjectLife::Loading", (int64)EBaseObjectLife::Loading },
				{ "EBaseObjectLife::Register", (int64)EBaseObjectLife::Register },
				{ "EBaseObjectLife::Enable", (int64)EBaseObjectLife::Enable },
				{ "EBaseObjectLife::Disable", (int64)EBaseObjectLife::Disable },
				{ "EBaseObjectLife::UnRegister", (int64)EBaseObjectLife::UnRegister },
				{ "EBaseObjectLife::UnLoading", (int64)EBaseObjectLife::UnLoading },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "//????????\n" },
				{ "Disable.Comment", "//????????\n" },
				{ "Disable.Name", "EBaseObjectLife::Disable" },
				{ "Enable.Comment", "//????????\n" },
				{ "Enable.Name", "EBaseObjectLife::Enable" },
				{ "Init.Comment", "//????????\n" },
				{ "Init.Name", "EBaseObjectLife::Init" },
				{ "Loading.Comment", "//????????\n" },
				{ "Loading.Name", "EBaseObjectLife::Loading" },
				{ "ModuleRelativePath", "Public/HFCommon/HFTypes.h" },
				{ "None.Comment", "//????????\n" },
				{ "None.Name", "EBaseObjectLife::None" },
				{ "Register.Comment", "//????????\n" },
				{ "Register.Name", "EBaseObjectLife::Register" },
				{ "UnLoading.Comment", "//????????\n" },
				{ "UnLoading.Name", "EBaseObjectLife::UnLoading" },
				{ "UnRegister.Comment", "//????????\n" },
				{ "UnRegister.Name", "EBaseObjectLife::UnRegister" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HFDataDriven,
				nullptr,
				"EBaseObjectLife",
				"EBaseObjectLife",
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
	void UHFTypes::StaticRegisterNativesUHFTypes()
	{
	}
	UClass* Z_Construct_UClass_UHFTypes_NoRegister()
	{
		return UHFTypes::StaticClass();
	}
	struct Z_Construct_UClass_UHFTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHFTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HFDataDriven,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHFTypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HFCommon/HFTypes.h" },
		{ "ModuleRelativePath", "Public/HFCommon/HFTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHFTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHFTypes>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHFTypes_Statics::ClassParams = {
		&UHFTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UHFTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHFTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHFTypes()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHFTypes_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHFTypes, 4005388603);
	template<> HFDATADRIVEN_API UClass* StaticClass<UHFTypes>()
	{
		return UHFTypes::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHFTypes(Z_Construct_UClass_UHFTypes, &UHFTypes::StaticClass, TEXT("/Script/HFDataDriven"), TEXT("UHFTypes"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHFTypes);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
