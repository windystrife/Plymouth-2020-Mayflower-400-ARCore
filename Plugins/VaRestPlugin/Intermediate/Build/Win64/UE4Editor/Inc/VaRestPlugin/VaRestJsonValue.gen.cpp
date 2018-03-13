// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/VaRestJsonValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRestJsonValue() {}
// Cross Module References
	VARESTPLUGIN_API UEnum* Z_Construct_UEnum_VaRestPlugin_EVaJson();
	UPackage* Z_Construct_UPackage__Script_VaRestPlugin();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestJsonValue();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsArray();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsBool();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsNumber();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsObject();
	VARESTPLUGIN_API UClass* Z_Construct_UClass_UVaRestJsonObject_NoRegister();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsString();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetType();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetTypeString();
	VARESTPLUGIN_API UFunction* Z_Construct_UFunction_UVaRestJsonValue_IsNull();
// End Cross Module References
	static UEnum* EVaJson_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VaRestPlugin_EVaJson, Z_Construct_UPackage__Script_VaRestPlugin(), TEXT("EVaJson"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVaJson(EVaJson_StaticEnum, TEXT("/Script/VaRestPlugin"), TEXT("EVaJson"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VaRestPlugin_EVaJson_CRC() { return 381353074U; }
	UEnum* Z_Construct_UEnum_VaRestPlugin_EVaJson()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VaRestPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVaJson"), 0, Get_Z_Construct_UEnum_VaRestPlugin_EVaJson_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVaJson::None", (int64)EVaJson::None },
				{ "EVaJson::Null", (int64)EVaJson::Null },
				{ "EVaJson::String", (int64)EVaJson::String },
				{ "EVaJson::Number", (int64)EVaJson::Number },
				{ "EVaJson::Boolean", (int64)EVaJson::Boolean },
				{ "EVaJson::Array", (int64)EVaJson::Array },
				{ "EVaJson::Object", (int64)EVaJson::Object },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Represents all the types a Json Value can be." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VaRestPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVaJson",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::Namespaced,
				"EVaJson::Type",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UVaRestJsonValue::StaticRegisterNativesUVaRestJsonValue()
	{
		UClass* Class = UVaRestJsonValue::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsArray", (Native)&UVaRestJsonValue::execAsArray },
			{ "AsBool", (Native)&UVaRestJsonValue::execAsBool },
			{ "AsNumber", (Native)&UVaRestJsonValue::execAsNumber },
			{ "AsObject", (Native)&UVaRestJsonValue::execAsObject },
			{ "AsString", (Native)&UVaRestJsonValue::execAsString },
			{ "ConstructJsonValueArray", (Native)&UVaRestJsonValue::execConstructJsonValueArray },
			{ "ConstructJsonValueBool", (Native)&UVaRestJsonValue::execConstructJsonValueBool },
			{ "ConstructJsonValueNumber", (Native)&UVaRestJsonValue::execConstructJsonValueNumber },
			{ "ConstructJsonValueObject", (Native)&UVaRestJsonValue::execConstructJsonValueObject },
			{ "ConstructJsonValueString", (Native)&UVaRestJsonValue::execConstructJsonValueString },
			{ "GetType", (Native)&UVaRestJsonValue::execGetType },
			{ "GetTypeString", (Native)&UVaRestJsonValue::execGetTypeString },
			{ "IsNull", (Native)&UVaRestJsonValue::execIsNull },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsArray()
	{
		struct VaRestJsonValue_eventAsArray_Parms
		{
			TArray<UVaRestJsonValue*> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventAsArray_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Returns this value as an array, throwing an error if this is not an Json Array" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "AsArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventAsArray_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsBool()
	{
		struct VaRestJsonValue_eventAsBool_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VaRestJsonValue_eventAsBool_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestJsonValue_eventAsBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Returns this value as a boolean, throwing an error if this is not an Json Bool" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "AsBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventAsBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsNumber()
	{
		struct VaRestJsonValue_eventAsNumber_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventAsNumber_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Returns this value as a double, throwing an error if this is not an Json Number\nAttn.!! float used instead of double to make the function blueprintable!" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "AsNumber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventAsNumber_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsObject()
	{
		struct VaRestJsonValue_eventAsObject_Parms
		{
			UVaRestJsonObject* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventAsObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Returns this value as an object, throwing an error if this is not an Json Object" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "AsObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(VaRestJsonValue_eventAsObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_AsString()
	{
		struct VaRestJsonValue_eventAsString_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventAsString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Returns this value as a number, throwing an error if this is not an Json String" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "AsString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventAsString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray()
	{
		struct VaRestJsonValue_eventConstructJsonValueArray_Parms
		{
			UObject* WorldContextObject;
			TArray<UVaRestJsonValue*> InArray;
			UVaRestJsonValue* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueArray_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InArray_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InArray = { UE4CodeGen_Private::EPropertyClass::Array, "InArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueArray_Parms, InArray), METADATA_PARAMS(NewProp_InArray_MetaData, ARRAY_COUNT(NewProp_InArray_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueArray_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InArray_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "Construct Json Array Value" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Create new Json Array value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "ConstructJsonValueArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14422401, sizeof(VaRestJsonValue_eventConstructJsonValueArray_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool()
	{
		struct VaRestJsonValue_eventConstructJsonValueBool_Parms
		{
			UObject* WorldContextObject;
			bool InValue;
			UVaRestJsonValue* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueBool_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
			auto NewProp_InValue_SetBit = [](void* Obj){ ((VaRestJsonValue_eventConstructJsonValueBool_Parms*)Obj)->InValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InValue = { UE4CodeGen_Private::EPropertyClass::Bool, "InValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestJsonValue_eventConstructJsonValueBool_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_InValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueBool_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "Construct Json Bool Value" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Create new Json Bool value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "ConstructJsonValueBool", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VaRestJsonValue_eventConstructJsonValueBool_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber()
	{
		struct VaRestJsonValue_eventConstructJsonValueNumber_Parms
		{
			UObject* WorldContextObject;
			float Number;
			UVaRestJsonValue* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueNumber_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Number = { UE4CodeGen_Private::EPropertyClass::Float, "Number", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueNumber_Parms, Number), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueNumber_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Number,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "Construct Json Number Value" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Create new Json Number value\nAttn.!! float used instead of double to make the function blueprintable!" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "ConstructJsonValueNumber", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VaRestJsonValue_eventConstructJsonValueNumber_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject()
	{
		struct VaRestJsonValue_eventConstructJsonValueObject_Parms
		{
			UObject* WorldContextObject;
			UVaRestJsonObject* JsonObject;
			UVaRestJsonValue* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueObject_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JsonObject = { UE4CodeGen_Private::EPropertyClass::Object, "JsonObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueObject_Parms, JsonObject), Z_Construct_UClass_UVaRestJsonObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueObject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_JsonObject,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "Construct Json Object Value" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Create new Json Object value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "ConstructJsonValueObject", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VaRestJsonValue_eventConstructJsonValueObject_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString()
	{
		struct VaRestJsonValue_eventConstructJsonValueString_Parms
		{
			UObject* WorldContextObject;
			FString StringValue;
			UVaRestJsonValue* ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueString_Parms, ReturnValue), Z_Construct_UClass_UVaRestJsonValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_StringValue = { UE4CodeGen_Private::EPropertyClass::Str, "StringValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueString_Parms, StringValue), METADATA_PARAMS(NewProp_StringValue_MetaData, ARRAY_COUNT(NewProp_StringValue_MetaData)) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject = { UE4CodeGen_Private::EPropertyClass::Object, "WorldContextObject", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventConstructJsonValueString_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StringValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorldContextObject,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "DefaultToSelf", "WorldContextObject" },
				{ "DisplayName", "Construct Json String Value" },
				{ "HidePin", "WorldContextObject" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Create new Json String value" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "ConstructJsonValueString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VaRestJsonValue_eventConstructJsonValueString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetType()
	{
		struct VaRestJsonValue_eventGetType_Parms
		{
			TEnumAsByte<EVaJson::Type> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Byte, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventGetType_Parms, ReturnValue), Z_Construct_UEnum_VaRestPlugin_EVaJson, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Get type of Json value (Enum)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "GetType", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventGetType_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_GetTypeString()
	{
		struct VaRestJsonValue_eventGetTypeString_Parms
		{
			FString ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VaRestJsonValue_eventGetTypeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Get type of Json value (String)" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "GetTypeString", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventGetTypeString_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVaRestJsonValue_IsNull()
	{
		struct VaRestJsonValue_eventIsNull_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((VaRestJsonValue_eventIsNull_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VaRestJsonValue_eventIsNull_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "VaRest|Json" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Returns true if this value is a 'null'" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UVaRestJsonValue, "IsNull", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(VaRestJsonValue_eventIsNull_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVaRestJsonValue_NoRegister()
	{
		return UVaRestJsonValue::StaticClass();
	}
	UClass* Z_Construct_UClass_UVaRestJsonValue()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UObject,
				(UObject* (*)())Z_Construct_UPackage__Script_VaRestPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UVaRestJsonValue_AsArray, "AsArray" }, // 2019463169
				{ &Z_Construct_UFunction_UVaRestJsonValue_AsBool, "AsBool" }, // 2212750192
				{ &Z_Construct_UFunction_UVaRestJsonValue_AsNumber, "AsNumber" }, // 2593187197
				{ &Z_Construct_UFunction_UVaRestJsonValue_AsObject, "AsObject" }, // 2672295040
				{ &Z_Construct_UFunction_UVaRestJsonValue_AsString, "AsString" }, // 2039591515
				{ &Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueArray, "ConstructJsonValueArray" }, // 3403194657
				{ &Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueBool, "ConstructJsonValueBool" }, // 519252861
				{ &Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueNumber, "ConstructJsonValueNumber" }, // 1622705802
				{ &Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueObject, "ConstructJsonValueObject" }, // 1286788970
				{ &Z_Construct_UFunction_UVaRestJsonValue_ConstructJsonValueString, "ConstructJsonValueString" }, // 1381400814
				{ &Z_Construct_UFunction_UVaRestJsonValue_GetType, "GetType" }, // 1524123884
				{ &Z_Construct_UFunction_UVaRestJsonValue_GetTypeString, "GetTypeString" }, // 3183565292
				{ &Z_Construct_UFunction_UVaRestJsonValue_IsNull, "IsNull" }, // 3452972844
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "VaRestJsonValue.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/VaRestJsonValue.h" },
				{ "ToolTip", "Blueprintable FJsonValue wrapper" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVaRestJsonValue>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVaRestJsonValue::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
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
	IMPLEMENT_CLASS(UVaRestJsonValue, 268325787);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRestJsonValue(Z_Construct_UClass_UVaRestJsonValue, &UVaRestJsonValue::StaticClass, TEXT("/Script/VaRestPlugin"), TEXT("UVaRestJsonValue"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRestJsonValue);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
