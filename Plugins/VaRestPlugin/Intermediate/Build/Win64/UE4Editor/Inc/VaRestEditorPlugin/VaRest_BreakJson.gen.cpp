// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Classes/VaRest_BreakJson.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVaRest_BreakJson() {}
// Cross Module References
	VARESTEDITORPLUGIN_API UEnum* Z_Construct_UEnum_VaRestEditorPlugin_EVaRest_JsonType();
	UPackage* Z_Construct_UPackage__Script_VaRestEditorPlugin();
	VARESTEDITORPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVaRest_NamedType();
	VARESTEDITORPLUGIN_API UClass* Z_Construct_UClass_UVaRest_BreakJson_NoRegister();
	VARESTEDITORPLUGIN_API UClass* Z_Construct_UClass_UVaRest_BreakJson();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
// End Cross Module References
	static UEnum* EVaRest_JsonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VaRestEditorPlugin_EVaRest_JsonType, Z_Construct_UPackage__Script_VaRestEditorPlugin(), TEXT("EVaRest_JsonType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVaRest_JsonType(EVaRest_JsonType_StaticEnum, TEXT("/Script/VaRestEditorPlugin"), TEXT("EVaRest_JsonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VaRestEditorPlugin_EVaRest_JsonType_CRC() { return 690220369U; }
	UEnum* Z_Construct_UEnum_VaRestEditorPlugin_EVaRest_JsonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VaRestEditorPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVaRest_JsonType"), 0, Get_Z_Construct_UEnum_VaRestEditorPlugin_EVaRest_JsonType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVaRest_JsonType::JSON_Bool", (int64)EVaRest_JsonType::JSON_Bool },
				{ "EVaRest_JsonType::JSON_Number", (int64)EVaRest_JsonType::JSON_Number },
				{ "EVaRest_JsonType::JSON_String", (int64)EVaRest_JsonType::JSON_String },
				{ "EVaRest_JsonType::JSON_Object", (int64)EVaRest_JsonType::JSON_Object },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "JSON_Bool.DisplayName", "Boolean" },
				{ "JSON_Bool.ToolTip", "JSON_Null UMETA(DisplayName = \"Null\")," },
				{ "JSON_Number.DisplayName", "Number" },
				{ "JSON_Object.DisplayName", "Object" },
				{ "JSON_String.DisplayName", "String" },
				{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VaRestEditorPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EVaRest_JsonType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EVaRest_JsonType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVaRest_NamedType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VARESTEDITORPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FVaRest_NamedType_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVaRest_NamedType, Z_Construct_UPackage__Script_VaRestEditorPlugin(), TEXT("VaRest_NamedType"), sizeof(FVaRest_NamedType), Get_Z_Construct_UScriptStruct_FVaRest_NamedType_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVaRest_NamedType(FVaRest_NamedType::StaticStruct, TEXT("/Script/VaRestEditorPlugin"), TEXT("VaRest_NamedType"), false, nullptr, nullptr);
static struct FScriptStruct_VaRestEditorPlugin_StaticRegisterNativesFVaRest_NamedType
{
	FScriptStruct_VaRestEditorPlugin_StaticRegisterNativesFVaRest_NamedType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VaRest_NamedType")),new UScriptStruct::TCppStructOps<FVaRest_NamedType>);
	}
} ScriptStruct_VaRestEditorPlugin_StaticRegisterNativesFVaRest_NamedType;
	UScriptStruct* Z_Construct_UScriptStruct_FVaRest_NamedType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVaRest_NamedType_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_VaRestEditorPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VaRest_NamedType"), sizeof(FVaRest_NamedType), Get_Z_Construct_UScriptStruct_FVaRest_NamedType_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVaRest_NamedType>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsArray_MetaData[] = {
				{ "Category", "NamedType" },
				{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
			};
#endif
			auto NewProp_bIsArray_SetBit = [](void* Obj){ ((FVaRest_NamedType*)Obj)->bIsArray = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsArray = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsArray", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FVaRest_NamedType), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bIsArray_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bIsArray_MetaData, ARRAY_COUNT(NewProp_bIsArray_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
				{ "Category", "NamedType" },
				{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVaRest_NamedType, Type), Z_Construct_UEnum_VaRestEditorPlugin_EVaRest_JsonType, METADATA_PARAMS(NewProp_Type_MetaData, ARRAY_COUNT(NewProp_Type_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
				{ "Category", "NamedType" },
				{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
			};
#endif
			static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Str, "Name", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FVaRest_NamedType, Name), METADATA_PARAMS(NewProp_Name_MetaData, ARRAY_COUNT(NewProp_Name_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bIsArray,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Type_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Name,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_VaRestEditorPlugin,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"VaRest_NamedType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FVaRest_NamedType),
				alignof(FVaRest_NamedType),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVaRest_NamedType_CRC() { return 2013298319U; }
	void UVaRest_BreakJson::StaticRegisterNativesUVaRest_BreakJson()
	{
	}
	UClass* Z_Construct_UClass_UVaRest_BreakJson_NoRegister()
	{
		return UVaRest_BreakJson::StaticClass();
	}
	UClass* Z_Construct_UClass_UVaRest_BreakJson()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UK2Node,
				(UObject* (*)())Z_Construct_UPackage__Script_VaRestEditorPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IncludePath", "VaRest_BreakJson.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[] = {
				{ "Category", "PinOptions" },
				{ "ModuleRelativePath", "Classes/VaRest_BreakJson.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Outputs = { UE4CodeGen_Private::EPropertyClass::Array, "Outputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UVaRest_BreakJson, Outputs), METADATA_PARAMS(NewProp_Outputs_MetaData, ARRAY_COUNT(NewProp_Outputs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Outputs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Outputs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVaRest_NamedType, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Outputs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Outputs_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UVaRest_BreakJson>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UVaRest_BreakJson::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(UVaRest_BreakJson, 2475925933);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVaRest_BreakJson(Z_Construct_UClass_UVaRest_BreakJson, &UVaRest_BreakJson::StaticClass, TEXT("/Script/VaRestEditorPlugin"), TEXT("UVaRest_BreakJson"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVaRest_BreakJson);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
