// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/VaRestTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestTypes() {}
// Cross Module References
	VARESTPLUGIN_API UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestStatus();
	UPackage* Z_Construct_UPackage__Script_VaRestPlugin();
	VARESTPLUGIN_API UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestContentType();
	VARESTPLUGIN_API UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestVerb();
// End Cross Module References
	static UEnum* ERequestStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VaRestPlugin_ERequestStatus, Z_Construct_UPackage__Script_VaRestPlugin(), TEXT("ERequestStatus"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERequestStatus(ERequestStatus_StaticEnum, TEXT("/Script/VaRestPlugin"), TEXT("ERequestStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VaRestPlugin_ERequestStatus_CRC() { return 1653226740U; }
	UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VaRestPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERequestStatus"), 0, Get_Z_Construct_UEnum_VaRestPlugin_ERequestStatus_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERequestStatus::NotStarted", (int64)ERequestStatus::NotStarted },
				{ "ERequestStatus::Processing", (int64)ERequestStatus::Processing },
				{ "ERequestStatus::Failed", (int64)ERequestStatus::Failed },
				{ "ERequestStatus::Failed_ConnectionError", (int64)ERequestStatus::Failed_ConnectionError },
				{ "ERequestStatus::Succeeded", (int64)ERequestStatus::Succeeded },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Failed.ToolTip", "Finished but failed" },
				{ "Failed_ConnectionError.ToolTip", "Failed because it was unable to connect (safe to retry)" },
				{ "ModuleRelativePath", "Classes/VaRestTypes.h" },
				{ "NotStarted.ToolTip", "Has not been started via ProcessRequest()" },
				{ "Processing.ToolTip", "Currently being ticked and processed" },
				{ "Succeeded.ToolTip", "Finished and was successful" },
				{ "ToolTip", "Enumerates the current state of an Http request" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VaRestPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERequestStatus",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERequestStatus",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERequestContentType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VaRestPlugin_ERequestContentType, Z_Construct_UPackage__Script_VaRestPlugin(), TEXT("ERequestContentType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERequestContentType(ERequestContentType_StaticEnum, TEXT("/Script/VaRestPlugin"), TEXT("ERequestContentType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VaRestPlugin_ERequestContentType_CRC() { return 2407146701U; }
	UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestContentType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VaRestPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERequestContentType"), 0, Get_Z_Construct_UEnum_VaRestPlugin_ERequestContentType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERequestContentType::x_www_form_urlencoded_url", (int64)ERequestContentType::x_www_form_urlencoded_url },
				{ "ERequestContentType::x_www_form_urlencoded_body", (int64)ERequestContentType::x_www_form_urlencoded_body },
				{ "ERequestContentType::json", (int64)ERequestContentType::json },
				{ "ERequestContentType::binary", (int64)ERequestContentType::binary },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/VaRestTypes.h" },
				{ "ToolTip", "Content type (json, urlencoded, etc.) used by the request" },
				{ "x_www_form_urlencoded_body.DisplayName", "x-www-form-urlencoded (Request Body)" },
				{ "x_www_form_urlencoded_url.DisplayName", "x-www-form-urlencoded (URL)" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VaRestPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERequestContentType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERequestContentType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERequestVerb_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VaRestPlugin_ERequestVerb, Z_Construct_UPackage__Script_VaRestPlugin(), TEXT("ERequestVerb"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERequestVerb(ERequestVerb_StaticEnum, TEXT("/Script/VaRestPlugin"), TEXT("ERequestVerb"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VaRestPlugin_ERequestVerb_CRC() { return 1972104092U; }
	UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestVerb()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VaRestPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERequestVerb"), 0, Get_Z_Construct_UEnum_VaRestPlugin_ERequestVerb_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERequestVerb::GET", (int64)ERequestVerb::GET },
				{ "ERequestVerb::POST", (int64)ERequestVerb::POST },
				{ "ERequestVerb::PUT", (int64)ERequestVerb::PUT },
				{ "ERequestVerb::DEL", (int64)ERequestVerb::DEL },
				{ "ERequestVerb::CUSTOM", (int64)ERequestVerb::CUSTOM },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CUSTOM.ToolTip", "Set CUSTOM verb by SetCustomVerb() function" },
				{ "DEL.DisplayName", "DELETE" },
				{ "ModuleRelativePath", "Classes/VaRestTypes.h" },
				{ "ToolTip", "Verb (GET, PUT, POST) used by the request" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VaRestPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERequestVerb",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERequestVerb",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
