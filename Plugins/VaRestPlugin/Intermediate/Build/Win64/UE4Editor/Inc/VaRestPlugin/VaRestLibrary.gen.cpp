// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/VaRestLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestLibrary() {}
// Cross Module References
	VARESTPLUGIN_API UFunction* Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_VaRestPlugin();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestRequestJSON_NoRegister();
	VARESTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVaRestCallResponse();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestLibrary_NoRegister();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64Decode();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64Encode();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_CallURL();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
	VARESTPLUGIN_API UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestContentType();
	VARESTPLUGIN_API UEnum* Z_Construct_UEnum_VaRestPlugin_ERequestVerb();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestLibrary_PercentEncode();
// End Cross Module References
	UFunction* Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature()
	{
		struct _Script_VaRestPlugin_eventVaRestCallDelegate_Parms
		{
			UVaRestRequestJSON* Request;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request = { UE4CodeGen_Private::EPropertyClass::Object, "Request", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_VaRestPlugin_eventVaRestCallDelegate_Parms, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Request,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_VaRestPlugin, "VaRestCallDelegate__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00120000, sizeof(_Script_VaRestPlugin_eventVaRestCallDelegate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FVaRestCallResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VARESTPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVaRestCallResponse_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVaRestCallResponse, Z_Construct_UPackage__Script_VaRestPlugin(), TEXT("VaRestCallResponse"), sizeof(FVaRestCallResponse), Get_Z_Construct_UScriptStruct_FVaRestCallResponse_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVaRestCallResponse(FVaRestCallResponse::StaticStruct, TEXT("/Script/VaRestPlugin"), TEXT("VaRestCallResponse"), false, nullptr, nullptr);
static struct FScriptStruct_VaRestPlugin_StaticRegisterNativesFVaRestCallResponse
{
	FScriptStruct_VaRestPlugin_StaticRegisterNativesFVaRestCallResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VaRestCallResponse")),new UScriptStruct::TCppStructOps<FVaRestCallResponse>);
	}
} ScriptStruct_VaRestPlugin_StaticRegisterNativesFVaRestCallResponse;
	UScriptStruct* Z_Construct_UScriptStruct_FVaRestCallResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVaRestCallResponse_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VaRestPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VaRestCallResponse"), sizeof(FVaRestCallResponse), Get_Z_Construct_UScriptStruct_FVaRestCallResponse_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVaRestCallResponse>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
				{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback = { UE4CodeGen_Private::EPropertyClass::Delegate, "Callback", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080000, 1, nullptr, STRUCT_OFFSET(FVaRestCallResponse, Callback), Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature, METADATA_PARAMS(NewProp_Callback_MetaData, ARRAY_COUNT(NewProp_Callback_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
				{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVaRestCallResponse, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(NewProp_WorldContextObject_MetaData, ARRAY_COUNT(NewProp_WorldContextObject_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Request_MetaData[] = {
				{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Request = { UE4CodeGen_Private::EPropertyClass::Object, "Request", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FVaRestCallResponse, Request), Z_Construct_UClass_UVaRestRequestJSON_NoRegister, METADATA_PARAMS(NewProp_Request_MetaData, ARRAY_COUNT(NewProp_Request_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Callback,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Request,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_VaRestPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VaRestCallResponse",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000005),
				sizeof(FVaRestCallResponse),
				alignof(FVaRestCallResponse),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVaRestCallResponse_CRC() { return 2641476654U; }
	void UVaRestLibrary::StaticRegisterNativesUVaRestLibrary()
	{
		UClass* Class = UVaRestLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Base64Decode", (Native)&UVaRestLibrary::execBase64Decode },
			{ "Base64DecodeData", (Native)&UVaRestLibrary::execBase64DecodeData },
			{ "Base64Encode", (Native)&UVaRestLibrary::execBase64Encode },
			{ "Base64EncodeData", (Native)&UVaRestLibrary::execBase64EncodeData },
			{ "CallURL", (Native)&UVaRestLibrary::execCallURL },
			{ "PercentEncode", (Native)&UVaRestLibrary::execPercentEncode },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64Decode()
	{
		struct VaRestLibrary_eventBase64Decode_Parms
		{
			FString Source;
			FString Dest;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VaRestLibrary_eventBase64Decode_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestLibrary_eventBase64Decode_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dest = { UE4CodeGen_Private::EPropertyClass::Str, "Dest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64Decode_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Str, "Source", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64Decode_Parms, Source), METADATA_PARAMS(NewProp_Source_MetaData, ARRAY_COUNT(NewProp_Source_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Source,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Utility" },
				{ "DisplayName", "Base64 Decode" },
				{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
				{ "ToolTip", "Decodes a Base64 string into a FString\n\n@param Source        The stringified data to convert\n@param Dest          The out buffer that will be filled with the decoded data\n@return                      True if the buffer was decoded, false if it failed to decode" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "Base64Decode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VaRestLibrary_eventBase64Decode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData()
	{
		struct VaRestLibrary_eventBase64DecodeData_Parms
		{
			FString Source;
			TArray<uint8> Dest;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VaRestLibrary_eventBase64DecodeData_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestLibrary_eventBase64DecodeData_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dest = { UE4CodeGen_Private::EPropertyClass::Array, "Dest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64DecodeData_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Dest_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Dest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Str, "Source", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64DecodeData_Parms, Source), METADATA_PARAMS(NewProp_Source_MetaData, ARRAY_COUNT(NewProp_Source_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dest_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Source,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Utility" },
				{ "DisplayName", "Base64 Decode Data" },
				{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
				{ "ToolTip", "Decodes a Base64 string into a byte array\n\n@param Source        The stringified data to convert\n@param Dest          The out buffer that will be filled with the decoded data\n@return                      True if the buffer was decoded, false if it failed to decode" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "Base64DecodeData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VaRestLibrary_eventBase64DecodeData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64Encode()
	{
		struct VaRestLibrary_eventBase64Encode_Parms
		{
			FString Source;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64Encode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Str, "Source", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64Encode_Parms, Source), METADATA_PARAMS(NewProp_Source_MetaData, ARRAY_COUNT(NewProp_Source_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Source,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Utility" },
				{ "DisplayName", "Base64 Encode" },
				{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
				{ "ToolTip", "Encodes a FString into a Base64 string\n\n@param Source        The string data to convert\n@return                      A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "Base64Encode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VaRestLibrary_eventBase64Encode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData()
	{
		struct VaRestLibrary_eventBase64EncodeData_Parms
		{
			TArray<uint8> Data;
			FString Dest;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VaRestLibrary_eventBase64EncodeData_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestLibrary_eventBase64EncodeData_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Dest = { UE4CodeGen_Private::EPropertyClass::Str, "Dest", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64EncodeData_Parms, Dest), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data = { UE4CodeGen_Private::EPropertyClass::Array, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventBase64EncodeData_Parms, Data), METADATA_PARAMS(NewProp_Data_MetaData, ARRAY_COUNT(NewProp_Data_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "Data", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Dest,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Data_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Utility" },
				{ "DisplayName", "Base64 Encode Data" },
				{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
				{ "ToolTip", "Encodes a byte array into a Base64 string\n\n@param Dara          The data to convert\n@return                      A string that encodes the binary data in a way that can be safely transmitted via various Internet protocols" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "Base64EncodeData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VaRestLibrary_eventBase64EncodeData_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestLibrary_CallURL()
	{
		struct VaRestLibrary_eventCallURL_Parms
		{
			UObject* WorldContextObject;
			FString URL;
			ERequestVerb Verb;
			ERequestContentType ContentType;
			UVaRestJsonObject* VaRestJson;
			FScriptDelegate Callback;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Callback_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Callback = { UE4CodeGen_Private::EPropertyClass::Delegate, "Callback", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventCallURL_Parms, Callback), Z_Construct_UDelegateFunction_VaRestPlugin_VaRestCallDelegate__DelegateSignature, METADATA_PARAMS(NewProp_Callback_MetaData, ARRAY_COUNT(NewProp_Callback_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VaRestJson = { UE4CodeGen_Private::EPropertyClass::Object, "VaRestJson", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventCallURL_Parms, VaRestJson), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ContentType = { UE4CodeGen_Private::EPropertyClass::Enum, "ContentType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventCallURL_Parms, ContentType), Z_Construct_UEnum_VaRestPlugin_ERequestContentType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ContentType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Verb = { UE4CodeGen_Private::EPropertyClass::Enum, "Verb", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventCallURL_Parms, Verb), Z_Construct_UEnum_VaRestPlugin_ERequestVerb, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Verb_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL = { UE4CodeGen_Private::EPropertyClass::Str, "URL", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventCallURL_Parms, URL), METADATA_PARAMS(NewProp_URL_MetaData, ARRAY_COUNT(NewProp_URL_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventCallURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Callback,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_VaRestJson,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ContentType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Verb,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Verb_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_URL,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Utility" },
				{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
				{ "ToolTip", "Easy way to process http requests" },
				{ "WorldContext", "WorldContextObject" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "CallURL", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(VaRestLibrary_eventCallURL_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestLibrary_PercentEncode()
	{
		struct VaRestLibrary_eventPercentEncode_Parms
		{
			FString Source;
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventPercentEncode_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Str, "Source", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestLibrary_eventPercentEncode_Parms, Source), METADATA_PARAMS(NewProp_Source_MetaData, ARRAY_COUNT(NewProp_Source_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Source,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Utility" },
				{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
				{ "ToolTip", "Applies percent-encoding to text" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestLibrary, "PercentEncode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VaRestLibrary_eventPercentEncode_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaRestLibrary_NoRegister()
	{
		return UVaRestLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UVaRestLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_VaRestPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVaRestLibrary_Base64Decode, "Base64Decode" }, // 3202687038
				{ &Z_Construct_UFunction_UVaRestLibrary_Base64DecodeData, "Base64DecodeData" }, // 2491245412
				{ &Z_Construct_UFunction_UVaRestLibrary_Base64Encode, "Base64Encode" }, // 3733512857
				{ &Z_Construct_UFunction_UVaRestLibrary_Base64EncodeData, "Base64EncodeData" }, // 754126197
				{ &Z_Construct_UFunction_UVaRestLibrary_CallURL, "CallURL" }, // 4182756790
				{ &Z_Construct_UFunction_UVaRestLibrary_PercentEncode, "PercentEncode" }, // 3938577552
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "VaRestLibrary.h" },
				{ "ModuleRelativePath", "Classes/VaRestLibrary.h" },
				{ "ToolTip", "Usefull tools for REST communications" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVaRestLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVaRestLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00000080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVaRestLibrary, 600908537);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRestLibrary(Z_Construct_UClass_UVaRestLibrary, &UVaRestLibrary::StaticClass, TEXT("/Script/VaRestPlugin"), TEXT("UVaRestLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
