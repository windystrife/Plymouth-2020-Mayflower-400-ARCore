// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/VaRestRequestJSON.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestRequestJSON() {}
// Cross Module References
	VARESTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VaRestPlugin_OnRequestFail__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VaRestPlugin();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister();
	VARESTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VaRestPlugin_OnRequestComplete__DelegateSignature();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestRequestJSON();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_AddTag();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_Cancel();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ConstructRequest();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ConstructRequestExt();
	VARESTPLUGIN_API UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestContentType();
	VARESTPLUGIN_API UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestVerb();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetStatus();
	VARESTPLUGIN_API UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestStatus();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetURL();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_HasTag();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetData();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetContentType();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetHeader();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetURL();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetVerb();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_VaRestPlugin_OnRequestFail__DelegateSignature()
	{
		struct _Script_VaRestPlugin_eventOnRequestFail_Parms
		{
			UVaRestRequestJSON* Request;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request = { UE4CodeGen_Private::EPropertyClass::Object, "Request", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VaRestPlugin_eventOnRequestFail_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Request,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VaRestPlugin, "OnRequestFail__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_VaRestPlugin_eventOnRequestFail_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UDelegateFunction_VaRestPlugin_OnRequestComplete__DelegateSignature()
	{
		struct _Script_VaRestPlugin_eventOnRequestComplete_Parms
		{
			UVaRestRequestJSON* Request;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request = { UE4CodeGen_Private::EPropertyClass::Object, "Request", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VaRestPlugin_eventOnRequestComplete_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Request,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Generate a delegates for callback events" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VaRestPlugin, "OnRequestComplete__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_VaRestPlugin_eventOnRequestComplete_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	void UVaRestRequestJSON::StaticRegisterNativesUVaRestRequestJSON()
	{
		UClass* Class = UVaRestRequestJSON::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTag", (Native)&UVaRestRequestJSON::execAddTag },
			{ "ApplyURL", (Native)&UVaRestRequestJSON::execApplyURL },
			{ "Cancel", (Native)&UVaRestRequestJSON::execCancel },
			{ "ConstructRequest", (Native)&UVaRestRequestJSON::execConstructRequest },
			{ "ConstructRequestExt", (Native)&UVaRestRequestJSON::execConstructRequestExt },
			{ "ExecuteProcessRequest", (Native)&UVaRestRequestJSON::execExecuteProcessRequest },
			{ "GetAllResponseHeaders", (Native)&UVaRestRequestJSON::execGetAllResponseHeaders },
			{ "GetRequestObject", (Native)&UVaRestRequestJSON::execGetRequestObject },
			{ "GetResponseCode", (Native)&UVaRestRequestJSON::execGetResponseCode },
			{ "GetResponseHeader", (Native)&UVaRestRequestJSON::execGetResponseHeader },
			{ "GetResponseObject", (Native)&UVaRestRequestJSON::execGetResponseObject },
			{ "GetStatus", (Native)&UVaRestRequestJSON::execGetStatus },
			{ "GetURL", (Native)&UVaRestRequestJSON::execGetURL },
			{ "HasTag", (Native)&UVaRestRequestJSON::execHasTag },
			{ "ProcessURL", (Native)&UVaRestRequestJSON::execProcessURL },
			{ "RemoveTag", (Native)&UVaRestRequestJSON::execRemoveTag },
			{ "ResetData", (Native)&UVaRestRequestJSON::execResetData },
			{ "ResetRequestData", (Native)&UVaRestRequestJSON::execResetRequestData },
			{ "ResetResponseData", (Native)&UVaRestRequestJSON::execResetResponseData },
			{ "SetBinaryContentType", (Native)&UVaRestRequestJSON::execSetBinaryContentType },
			{ "SetBinaryRequestContent", (Native)&UVaRestRequestJSON::execSetBinaryRequestContent },
			{ "SetContentType", (Native)&UVaRestRequestJSON::execSetContentType },
			{ "SetCustomVerb", (Native)&UVaRestRequestJSON::execSetCustomVerb },
			{ "SetHeader", (Native)&UVaRestRequestJSON::execSetHeader },
			{ "SetRequestObject", (Native)&UVaRestRequestJSON::execSetRequestObject },
			{ "SetResponseObject", (Native)&UVaRestRequestJSON::execSetResponseObject },
			{ "SetStringRequestContent", (Native)&UVaRestRequestJSON::execSetStringRequestContent },
			{ "SetURL", (Native)&UVaRestRequestJSON::execSetURL },
			{ "SetVerb", (Native)&UVaRestRequestJSON::execSetVerb },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_AddTag()
	{
		struct VaRestRequestJSON_eventAddTag_Parms
		{
			FName Tag;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Name, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventAddTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Utility" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Add tag to this request" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "AddTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventAddTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL()
	{
		struct VaRestRequestJSON_eventApplyURL_Parms
		{
			FString Url;
			UVaRestJsonObject* Result;
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "LatentInfo", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result = { UE4CodeGen_Private::EPropertyClass::Object, "Result", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, Result), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url = { UE4CodeGen_Private::EPropertyClass::Str, "Url", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventApplyURL_Parms, Url), METADATA_PARAMS(NewProp_Url_MetaData, ARRAY_COUNT(NewProp_Url_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LatentInfo,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Result,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Url,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "HidePin", "WorldContextObject" },
				{ "Latent", "" },
				{ "LatentInfo", "LatentInfo" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Open URL in latent mode" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "ApplyURL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420400, sizeof(VaRestRequestJSON_eventApplyURL_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_Cancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Response" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Cancel latent response waiting" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "Cancel", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ConstructRequest()
	{
		struct VaRestRequestJSON_eventConstructRequest_Parms
		{
			UObject* WorldContextObject;
			UVaRestRequestJSON* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventConstructRequest_Parms, ReturnValue), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventConstructRequest_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "Construct Json Request (Empty)" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Creates new request (totally empty)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "ConstructRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VaRestRequestJSON_eventConstructRequest_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ConstructRequestExt()
	{
		struct VaRestRequestJSON_eventConstructRequestExt_Parms
		{
			UObject* WorldContextObject;
			ERequestVerb Verb;
			ERequestContentType ContentType;
			UVaRestRequestJSON* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventConstructRequestExt_Parms, ReturnValue), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ContentType = { UE4CodeGen_Private::EPropertyClass::Enum, "ContentType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventConstructRequestExt_Parms, ContentType), Z_Construct_UEnum_VaRestPlugin_ERequestContentType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Verb = { UE4CodeGen_Private::EPropertyClass::Enum, "Verb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventConstructRequestExt_Parms, Verb), Z_Construct_UEnum_VaRestPlugin_ERequestVerb, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventConstructRequestExt_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Verb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Verb_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "Construct Json Request" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Creates new request with defined verb and content type" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "ConstructRequestExt", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VaRestRequestJSON_eventConstructRequestExt_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Check URL and execute process request" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "ExecuteProcessRequest", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders()
	{
		struct VaRestRequestJSON_eventGetAllResponseHeaders_Parms
		{
			TArray<FString> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventGetAllResponseHeaders_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Response" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Get list of all response headers" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "GetAllResponseHeaders", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventGetAllResponseHeaders_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject()
	{
		struct VaRestRequestJSON_eventGetRequestObject_Parms
		{
			UVaRestJsonObject* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventGetRequestObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Get the Request Json object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "GetRequestObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventGetRequestObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode()
	{
		struct VaRestRequestJSON_eventGetResponseCode_Parms
		{
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseCode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Response" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Get the response code of the last query" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "GetResponseCode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventGetResponseCode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader()
	{
		struct VaRestRequestJSON_eventGetResponseHeader_Parms
		{
			FString HeaderName;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseHeader_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeaderName = { UE4CodeGen_Private::EPropertyClass::Str, "HeaderName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000082, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseHeader_Parms, HeaderName), METADATA_PARAMS(NewProp_HeaderName_MetaData, ARRAY_COUNT(NewProp_HeaderName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeaderName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Response" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Get value of desired response header" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "GetResponseHeader", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventGetResponseHeader_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject()
	{
		struct VaRestRequestJSON_eventGetResponseObject_Parms
		{
			UVaRestJsonObject* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventGetResponseObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Response" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Get the Response Json object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "GetResponseObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventGetResponseObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetStatus()
	{
		struct VaRestRequestJSON_eventGetStatus_Parms
		{
			ERequestStatus ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_VaRestPlugin_ERequestStatus, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Get status of http request" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "GetStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventGetStatus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_GetURL()
	{
		struct VaRestRequestJSON_eventGetURL_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventGetURL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Get url of http request" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "GetURL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventGetURL_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_HasTag()
	{
		struct VaRestRequestJSON_eventHasTag_Parms
		{
			FName Tag;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VaRestRequestJSON_eventHasTag_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestRequestJSON_eventHasTag_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Name, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventHasTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Utility" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "See if this request contains the supplied tag" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "HasTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestRequestJSON_eventHasTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL()
	{
		struct VaRestRequestJSON_eventProcessURL_Parms
		{
			FString Url;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url = { UE4CodeGen_Private::EPropertyClass::Str, "Url", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventProcessURL_Parms, Url), METADATA_PARAMS(NewProp_Url_MetaData, ARRAY_COUNT(NewProp_Url_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Url,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "CPP_Default_Url", "http://alyamkin.com" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Open URL with current setup" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "ProcessURL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, sizeof(VaRestRequestJSON_eventProcessURL_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag()
	{
		struct VaRestRequestJSON_eventRemoveTag_Parms
		{
			FName Tag;
			int32 ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventRemoveTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag = { UE4CodeGen_Private::EPropertyClass::Name, "Tag", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventRemoveTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tag,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Utility" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Remove tag from this request\n\n@return Number of removed elements" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "RemoveTag", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventRemoveTag_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Utility" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Reset all internal saved data" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "ResetData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Reset saved request data" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "ResetRequestData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Response" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Reset saved response data" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "ResetResponseData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType()
	{
		struct VaRestRequestJSON_eventSetBinaryContentType_Parms
		{
			FString ContentType;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentType = { UE4CodeGen_Private::EPropertyClass::Str, "ContentType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventSetBinaryContentType_Parms, ContentType), METADATA_PARAMS(NewProp_ContentType_MetaData, ARRAY_COUNT(NewProp_ContentType_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentType,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Set content type of the request for binary post data" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "SetBinaryContentType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventSetBinaryContentType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent()
	{
		struct VaRestRequestJSON_eventSetBinaryRequestContent_Parms
		{
			TArray<uint8> Content;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Content = { UE4CodeGen_Private::EPropertyClass::Array, "Content", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventSetBinaryRequestContent_Parms, Content), METADATA_PARAMS(NewProp_Content_MetaData, ARRAY_COUNT(NewProp_Content_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Content_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Content", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Content,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Content_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Set content of the request for binary post data" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "SetBinaryRequestContent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(VaRestRequestJSON_eventSetBinaryRequestContent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetContentType()
	{
		struct VaRestRequestJSON_eventSetContentType_Parms
		{
			ERequestContentType ContentType;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ContentType = { UE4CodeGen_Private::EPropertyClass::Enum, "ContentType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventSetContentType_Parms, ContentType), Z_Construct_UEnum_VaRestPlugin_ERequestContentType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentType_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Set content type to the request. If you're using the x-www-form-urlencoded,\nparams/constaints should be defined as key=ValueString pairs from Json data" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "SetContentType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventSetContentType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb()
	{
		struct VaRestRequestJSON_eventSetCustomVerb_Parms
		{
			FString Verb;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Verb = { UE4CodeGen_Private::EPropertyClass::Str, "Verb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventSetCustomVerb_Parms, Verb), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Verb,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Set custom verb to the request" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "SetCustomVerb", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventSetCustomVerb_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetHeader()
	{
		struct VaRestRequestJSON_eventSetHeader_Parms
		{
			FString HeaderName;
			FString HeaderValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeaderValue = { UE4CodeGen_Private::EPropertyClass::Str, "HeaderValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventSetHeader_Parms, HeaderValue), METADATA_PARAMS(NewProp_HeaderValue_MetaData, ARRAY_COUNT(NewProp_HeaderValue_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeaderName_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_HeaderName = { UE4CodeGen_Private::EPropertyClass::Str, "HeaderName", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventSetHeader_Parms, HeaderName), METADATA_PARAMS(NewProp_HeaderName_MetaData, ARRAY_COUNT(NewProp_HeaderName_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeaderValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HeaderName,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Sets optional header info" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "SetHeader", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventSetHeader_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject()
	{
		struct VaRestRequestJSON_eventSetRequestObject_Parms
		{
			UVaRestJsonObject* JsonObject;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject = { UE4CodeGen_Private::EPropertyClass::Object, "JsonObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventSetRequestObject_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JsonObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Set the Request Json object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "SetRequestObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventSetRequestObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject()
	{
		struct VaRestRequestJSON_eventSetResponseObject_Parms
		{
			UVaRestJsonObject* JsonObject;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject = { UE4CodeGen_Private::EPropertyClass::Object, "JsonObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventSetResponseObject_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JsonObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Response" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Set the Response Json object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "SetResponseObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventSetResponseObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent()
	{
		struct VaRestRequestJSON_eventSetStringRequestContent_Parms
		{
			FString Content;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Content = { UE4CodeGen_Private::EPropertyClass::Str, "Content", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventSetStringRequestContent_Parms, Content), METADATA_PARAMS(NewProp_Content_MetaData, ARRAY_COUNT(NewProp_Content_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Content,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Set content of the request as a plain string" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "SetStringRequestContent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventSetStringRequestContent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetURL()
	{
		struct VaRestRequestJSON_eventSetURL_Parms
		{
			FString Url;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Url_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Url = { UE4CodeGen_Private::EPropertyClass::Str, "Url", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventSetURL_Parms, Url), METADATA_PARAMS(NewProp_Url_MetaData, ARRAY_COUNT(NewProp_Url_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Url,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "CPP_Default_Url", "http://alyamkin.com" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Setting request URL" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "SetURL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventSetURL_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestRequestJSON_SetVerb()
	{
		struct VaRestRequestJSON_eventSetVerb_Parms
		{
			ERequestVerb Verb;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Verb = { UE4CodeGen_Private::EPropertyClass::Enum, "Verb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestRequestJSON_eventSetVerb_Parms, Verb), Z_Construct_UEnum_VaRestPlugin_ERequestVerb, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Verb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Verb_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Request" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Set verb to the request" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestRequestJSON, "SetVerb", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestRequestJSON_eventSetVerb_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister()
	{
		return UVaRestRequestJSON::StaticClass();
	}
	UClass* Z_Construct_UClass_UVaRestRequestJSON()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_VaRestPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVaRestRequestJSON_AddTag, "AddTag" }, // 1846921632
				{ &Z_Construct_UFunction_UVaRestRequestJSON_ApplyURL, "ApplyURL" }, // 4147153379
				{ &Z_Construct_UFunction_UVaRestRequestJSON_Cancel, "Cancel" }, // 3987494735
				{ &Z_Construct_UFunction_UVaRestRequestJSON_ConstructRequest, "ConstructRequest" }, // 2699554315
				{ &Z_Construct_UFunction_UVaRestRequestJSON_ConstructRequestExt, "ConstructRequestExt" }, // 2059651671
				{ &Z_Construct_UFunction_UVaRestRequestJSON_ExecuteProcessRequest, "ExecuteProcessRequest" }, // 979530490
				{ &Z_Construct_UFunction_UVaRestRequestJSON_GetAllResponseHeaders, "GetAllResponseHeaders" }, // 4191992091
				{ &Z_Construct_UFunction_UVaRestRequestJSON_GetRequestObject, "GetRequestObject" }, // 2330765415
				{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseCode, "GetResponseCode" }, // 2404771782
				{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseHeader, "GetResponseHeader" }, // 287923038
				{ &Z_Construct_UFunction_UVaRestRequestJSON_GetResponseObject, "GetResponseObject" }, // 3271031531
				{ &Z_Construct_UFunction_UVaRestRequestJSON_GetStatus, "GetStatus" }, // 3363740980
				{ &Z_Construct_UFunction_UVaRestRequestJSON_GetURL, "GetURL" }, // 2696105558
				{ &Z_Construct_UFunction_UVaRestRequestJSON_HasTag, "HasTag" }, // 3024774322
				{ &Z_Construct_UFunction_UVaRestRequestJSON_ProcessURL, "ProcessURL" }, // 1812256042
				{ &Z_Construct_UFunction_UVaRestRequestJSON_RemoveTag, "RemoveTag" }, // 4035729753
				{ &Z_Construct_UFunction_UVaRestRequestJSON_ResetData, "ResetData" }, // 1842478732
				{ &Z_Construct_UFunction_UVaRestRequestJSON_ResetRequestData, "ResetRequestData" }, // 1019525797
				{ &Z_Construct_UFunction_UVaRestRequestJSON_ResetResponseData, "ResetResponseData" }, // 1120541135
				{ &Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryContentType, "SetBinaryContentType" }, // 3226376670
				{ &Z_Construct_UFunction_UVaRestRequestJSON_SetBinaryRequestContent, "SetBinaryRequestContent" }, // 1047187380
				{ &Z_Construct_UFunction_UVaRestRequestJSON_SetContentType, "SetContentType" }, // 1841651379
				{ &Z_Construct_UFunction_UVaRestRequestJSON_SetCustomVerb, "SetCustomVerb" }, // 2193052312
				{ &Z_Construct_UFunction_UVaRestRequestJSON_SetHeader, "SetHeader" }, // 487281125
				{ &Z_Construct_UFunction_UVaRestRequestJSON_SetRequestObject, "SetRequestObject" }, // 2313940932
				{ &Z_Construct_UFunction_UVaRestRequestJSON_SetResponseObject, "SetResponseObject" }, // 1193255964
				{ &Z_Construct_UFunction_UVaRestRequestJSON_SetStringRequestContent, "SetStringRequestContent" }, // 3483902050
				{ &Z_Construct_UFunction_UVaRestRequestJSON_SetURL, "SetURL" }, // 2376435433
				{ &Z_Construct_UFunction_UVaRestRequestJSON_SetVerb, "SetVerb" }, // 2153270314
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "VaRestRequestJSON.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "General helper class http requests via blueprints" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseJsonObj_MetaData[] = {
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Response data stored as JSON" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResponseJsonObj = { UE4CodeGen_Private::EPropertyClass::Object, "ResponseJsonObj", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UVaRestRequestJSON, ResponseJsonObj), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(NewProp_ResponseJsonObj_MetaData, ARRAY_COUNT(NewProp_ResponseJsonObj_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestJsonObj_MetaData[] = {
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Internal request data stored as JSON" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestJsonObj = { UE4CodeGen_Private::EPropertyClass::Object, "RequestJsonObj", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UVaRestRequestJSON, RequestJsonObj), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(NewProp_RequestJsonObj_MetaData, ARRAY_COUNT(NewProp_RequestJsonObj_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsValidJsonResponse_MetaData[] = {
				{ "Category", "VaRest|Response" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Is the response valid JSON?" },
			};
#endif
			auto NewProp_bIsValidJsonResponse_SetBit = [](void* Obj){ ((UVaRestRequestJSON*)Obj)->bIsValidJsonResponse = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsValidJsonResponse = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsValidJsonResponse", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UVaRestRequestJSON), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsValidJsonResponse_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsValidJsonResponse_MetaData, ARRAY_COUNT(NewProp_bIsValidJsonResponse_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseContent_MetaData[] = {
				{ "Category", "VaRest|Response" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Request response stored as a string (Attn.! For invalid responses only, empty for valid one - use json response object instead" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ResponseContent = { UE4CodeGen_Private::EPropertyClass::Str, "ResponseContent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UVaRestRequestJSON, ResponseContent), METADATA_PARAMS(NewProp_ResponseContent_MetaData, ARRAY_COUNT(NewProp_ResponseContent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRequestFail_MetaData[] = {
				{ "Category", "VaRest|Event" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Event occured when the request wasn't successfull" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestFail = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnRequestFail", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVaRestRequestJSON, OnRequestFail), Z_Construct_UDelegateFunction_VaRestPlugin_OnRequestFail__DelegateSignature, METADATA_PARAMS(NewProp_OnRequestFail_MetaData, ARRAY_COUNT(NewProp_OnRequestFail_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRequestComplete_MetaData[] = {
				{ "Category", "VaRest|Event" },
				{ "ModuleRelativePath", "Classes/VaRestRequestJSON.h" },
				{ "ToolTip", "Event occured when the request has been completed" },
			};
#endif
			static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRequestComplete = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnRequestComplete", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UVaRestRequestJSON, OnRequestComplete), Z_Construct_UDelegateFunction_VaRestPlugin_OnRequestComplete__DelegateSignature, METADATA_PARAMS(NewProp_OnRequestComplete_MetaData, ARRAY_COUNT(NewProp_OnRequestComplete_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResponseJsonObj,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RequestJsonObj,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsValidJsonResponse,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ResponseContent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnRequestFail,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OnRequestComplete,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVaRestRequestJSON>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVaRestRequestJSON::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaRestRequestJSON, 2966051003);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRestRequestJSON(Z_Construct_UClass_UVaRestRequestJSON, &UVaRestRequestJSON::StaticClass, TEXT("/Script/VaRestPlugin"), TEXT("UVaRestRequestJSON"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestRequestJSON);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
