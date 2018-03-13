// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVaRestRequestJSON;
class UVaRestJsonObject;
class UObject;
struct FLatentActionInfo;
enum class ERequestStatus : uint8;
enum class ERequestContentType : uint8;
enum class ERequestVerb : uint8;
#ifdef VARESTPLUGIN_VaRestRequestJSON_generated_h
#error "VaRestRequestJSON.generated.h already included, missing '#pragma once' in VaRestRequestJSON.h"
#endif
#define VARESTPLUGIN_VaRestRequestJSON_generated_h

#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_70_DELEGATE \
struct _Script_VaRestPlugin_eventOnRequestFail_Parms \
{ \
	UVaRestRequestJSON* Request; \
}; \
static inline void FOnRequestFail_DelegateWrapper(const FMulticastScriptDelegate& OnRequestFail, UVaRestRequestJSON* Request) \
{ \
	_Script_VaRestPlugin_eventOnRequestFail_Parms Parms; \
	Parms.Request=Request; \
	OnRequestFail.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_69_DELEGATE \
struct _Script_VaRestPlugin_eventOnRequestComplete_Parms \
{ \
	UVaRestRequestJSON* Request; \
}; \
static inline void FOnRequestComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRequestComplete, UVaRestRequestJSON* Request) \
{ \
	_Script_VaRestPlugin_eventOnRequestComplete_Parms Parms; \
	Parms.Request=Request; \
	OnRequestComplete.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasTag) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasTag(Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTag) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->RemoveTag(Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTag) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddTag(Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteProcessRequest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExecuteProcessRequest(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_GET_OBJECT_REF(UVaRestJsonObject,Z_Param_Out_Result); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplyURL(Z_Param_Url,Z_Param_Out_Result,Z_Param_WorldContextObject,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcessURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ProcessURL(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetURL(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllResponseHeaders) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=this->GetAllResponseHeaders(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResponseHeader) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_HeaderName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetResponseHeader(Z_Param_HeaderName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResponseCode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetResponseCode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERequestStatus*)Z_Param__Result=this->GetStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetURL) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetURL(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResponseObject) \
	{ \
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetResponseObject(Z_Param_JsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResponseObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonObject**)Z_Param__Result=this->GetResponseObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRequestObject) \
	{ \
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRequestObject(Z_Param_JsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRequestObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonObject**)Z_Param__Result=this->GetRequestObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Cancel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetResponseData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetResponseData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetRequestData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetRequestData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeader) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_HeaderName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_HeaderValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHeader(Z_Param_HeaderName,Z_Param_HeaderValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringRequestContent) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStringRequestContent(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBinaryRequestContent) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBinaryRequestContent(Z_Param_Out_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBinaryContentType) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ContentType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBinaryContentType(Z_Param_ContentType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetContentType) \
	{ \
		P_GET_ENUM(ERequestContentType,Z_Param_ContentType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetContentType(ERequestContentType(Z_Param_ContentType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomVerb) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Verb); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCustomVerb(Z_Param_Verb); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerb) \
	{ \
		P_GET_ENUM(ERequestVerb,Z_Param_Verb); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVerb(ERequestVerb(Z_Param_Verb)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructRequestExt) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_ENUM(ERequestVerb,Z_Param_Verb); \
		P_GET_ENUM(ERequestContentType,Z_Param_ContentType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestRequestJSON**)Z_Param__Result=UVaRestRequestJSON::ConstructRequestExt(Z_Param_WorldContextObject,ERequestVerb(Z_Param_Verb),ERequestContentType(Z_Param_ContentType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructRequest) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestRequestJSON**)Z_Param__Result=UVaRestRequestJSON::ConstructRequest(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasTag) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->HasTag(Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveTag) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->RemoveTag(Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddTag) \
	{ \
		P_GET_PROPERTY(UNameProperty,Z_Param_Tag); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->AddTag(Z_Param_Tag); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execExecuteProcessRequest) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ExecuteProcessRequest(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execApplyURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_GET_OBJECT_REF(UVaRestJsonObject,Z_Param_Out_Result); \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ApplyURL(Z_Param_Url,Z_Param_Out_Result,Z_Param_WorldContextObject,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execProcessURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ProcessURL(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Url); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetURL(Z_Param_Url); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllResponseHeaders) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FString>*)Z_Param__Result=this->GetAllResponseHeaders(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResponseHeader) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_HeaderName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetResponseHeader(Z_Param_HeaderName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResponseCode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=this->GetResponseCode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStatus) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERequestStatus*)Z_Param__Result=this->GetStatus(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetURL) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=this->GetURL(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetResponseObject) \
	{ \
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetResponseObject(Z_Param_JsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetResponseObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonObject**)Z_Param__Result=this->GetResponseObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRequestObject) \
	{ \
		P_GET_OBJECT(UVaRestJsonObject,Z_Param_JsonObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetRequestObject(Z_Param_JsonObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRequestObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestJsonObject**)Z_Param__Result=this->GetRequestObject(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancel) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->Cancel(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetResponseData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetResponseData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetRequestData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetRequestData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetData) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ResetData(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeader) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_HeaderName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_HeaderValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetHeader(Z_Param_HeaderName,Z_Param_HeaderValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStringRequestContent) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetStringRequestContent(Z_Param_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBinaryRequestContent) \
	{ \
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Content); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBinaryRequestContent(Z_Param_Out_Content); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBinaryContentType) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ContentType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetBinaryContentType(Z_Param_ContentType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetContentType) \
	{ \
		P_GET_ENUM(ERequestContentType,Z_Param_ContentType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetContentType(ERequestContentType(Z_Param_ContentType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomVerb) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Verb); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetCustomVerb(Z_Param_Verb); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVerb) \
	{ \
		P_GET_ENUM(ERequestVerb,Z_Param_Verb); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetVerb(ERequestVerb(Z_Param_Verb)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructRequestExt) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_ENUM(ERequestVerb,Z_Param_Verb); \
		P_GET_ENUM(ERequestContentType,Z_Param_ContentType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestRequestJSON**)Z_Param__Result=UVaRestRequestJSON::ConstructRequestExt(Z_Param_WorldContextObject,ERequestVerb(Z_Param_Verb),ERequestContentType(Z_Param_ContentType)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConstructRequest) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UVaRestRequestJSON**)Z_Param__Result=UVaRestRequestJSON::ConstructRequest(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	}


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVaRestRequestJSON(); \
	friend VARESTPLUGIN_API class UClass* Z_Construct_UClass_UVaRestRequestJSON(); \
public: \
	DECLARE_CLASS(UVaRestRequestJSON, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VaRestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVaRestRequestJSON) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_INCLASS \
private: \
	static void StaticRegisterNativesUVaRestRequestJSON(); \
	friend VARESTPLUGIN_API class UClass* Z_Construct_UClass_UVaRestRequestJSON(); \
public: \
	DECLARE_CLASS(UVaRestRequestJSON, UObject, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/VaRestPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVaRestRequestJSON) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestRequestJSON(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestRequestJSON) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestRequestJSON); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestRequestJSON); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestRequestJSON(UVaRestRequestJSON&&); \
	NO_API UVaRestRequestJSON(const UVaRestRequestJSON&); \
public:


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVaRestRequestJSON(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVaRestRequestJSON(UVaRestRequestJSON&&); \
	NO_API UVaRestRequestJSON(const UVaRestRequestJSON&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVaRestRequestJSON); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVaRestRequestJSON); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVaRestRequestJSON)


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RequestJsonObj() { return STRUCT_OFFSET(UVaRestRequestJSON, RequestJsonObj); } \
	FORCEINLINE static uint32 __PPO__ResponseJsonObj() { return STRUCT_OFFSET(UVaRestRequestJSON, ResponseJsonObj); }


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_79_PROLOG
#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_PRIVATE_PROPERTY_OFFSET \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_RPC_WRAPPERS \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_INCLASS \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_PRIVATE_PROPERTY_OFFSET \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_RPC_WRAPPERS_NO_PURE_DECLS \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_INCLASS_NO_PURE_DECLS \
	PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h_82_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VaRestRequestJSON."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestRequestJSON_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
