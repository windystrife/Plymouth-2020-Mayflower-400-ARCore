// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVaRestJsonObject;
class UVaRestJsonValue;
class UObject;
#ifdef VARESTPLUGIN_VaRestJsonValue_generated_h
#error "VaRestJsonValue.generated.h already included, missing '#pragma once' in VaRestJsonValue.h"
#endif
#define VARESTPLUGIN_VaRestJsonValue_generated_h

#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAsObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonObject**)Z_Param__Result=this->AsObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UVaRestJsonValue*>*)Z_Param__Result=this->AsArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsBool) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->AsBool(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->AsString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->AsNumber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNull) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsNull(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTypeString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetTypeString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EVaJson::Type>*)Z_Param__Result=this->GetType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructJsonValueObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonValue**)Z_Param__Result=UVaRestJsonValue::ConstructJsonValueObject(Z_Param_WorldContextObject,Z_Param_JsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructJsonValueArray) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(UVaRestJsonValue*,Z_Param_Out_InArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonValue**)Z_Param__Result=UVaRestJsonValue::ConstructJsonValueArray(Z_Param_WorldContextObject,Z_Param_Out_InArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructJsonValueBool) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonValue**)Z_Param__Result=UVaRestJsonValue::ConstructJsonValueBool(Z_Param_WorldContextObject,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructJsonValueString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonValue**)Z_Param__Result=UVaRestJsonValue::ConstructJsonValueString(Z_Param_WorldContextObject,Z_Param_StringValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructJsonValueNumber) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Number); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonValue**)Z_Param__Result=UVaRestJsonValue::ConstructJsonValueNumber(Z_Param_WorldContextObject,Z_Param_Number); \
		P_NATIVE_END; \
	}


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAsObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonObject**)Z_Param__Result=this->AsObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsArray) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UVaRestJsonValue*>*)Z_Param__Result=this->AsArray(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsBool) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->AsBool(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->AsString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAsNumber) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->AsNumber(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsNull) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsNull(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTypeString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetTypeString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TEnumAsByte<EVaJson::Type>*)Z_Param__Result=this->GetType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructJsonValueObject) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonValue**)Z_Param__Result=UVaRestJsonValue::ConstructJsonValueObject(Z_Param_WorldContextObject,Z_Param_JsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructJsonValueArray) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_TARRAY_REF(UVaRestJsonValue*,Z_Param_Out_InArray); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonValue**)Z_Param__Result=UVaRestJsonValue::ConstructJsonValueArray(Z_Param_WorldContextObject,Z_Param_Out_InArray); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructJsonValueBool) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_InValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonValue**)Z_Param__Result=UVaRestJsonValue::ConstructJsonValueBool(Z_Param_WorldContextObject,Z_Param_InValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructJsonValueString) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonValue**)Z_Param__Result=UVaRestJsonValue::ConstructJsonValueString(Z_Param_WorldContextObject,Z_Param_StringValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructJsonValueNumber) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Number); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonValue**)Z_Param__Result=UVaRestJsonValue::ConstructJsonValueNumber(Z_Param_WorldContextObject,Z_Param_Number); \
		P_NATIVE_END; \
	}


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaRestJsonValue(); \
	friend VARESTPLUGIN_API class UClass* Z_Construct_UClass_UVaRestJsonValue(); \
public: \
	DECLARE_CLASS(UVaRestJsonValue, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VaRestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVaRestJsonValue) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUVaRestJsonValue(); \
	friend VARESTPLUGIN_API class UClass* Z_Construct_UClass_UVaRestJsonValue(); \
public: \
	DECLARE_CLASS(UVaRestJsonValue, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VaRestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVaRestJsonValue) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestJsonValue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestJsonValue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestJsonValue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestJsonValue(UVaRestJsonValue&&); \
	NO_API UVaRestJsonValue(const UVaRestJsonValue&); \
public:


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestJsonValue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestJsonValue(UVaRestJsonValue&&); \
	NO_API UVaRestJsonValue(const UVaRestJsonValue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestJsonValue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestJsonValue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestJsonValue)


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_PRIVATE_PROPERTY_OFFSET
#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_32_PROLOG
#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_PRIVATE_PROPERTY_OFFSET \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_RPC_WRAPPERS \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_INCLASS \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_PRIVATE_PROPERTY_OFFSET \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_INCLASS_NO_PURE_DECLS \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h_35_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VaRestJsonValue."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestJsonValue_h


#define FOREACH_ENUM_EVAJSON(op) \
	op(EVaJson::None) \
	op(EVaJson::Null) \
	op(EVaJson::String) \
	op(EVaJson::Number) \
	op(EVaJson::Boolean) \
	op(EVaJson::Array) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
