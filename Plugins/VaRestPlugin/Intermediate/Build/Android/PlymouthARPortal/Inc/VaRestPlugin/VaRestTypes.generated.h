// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VARESTPLUGIN_VaRestTypes_generated_h
#error "VaRestTypes.generated.h already included, missing '#pragma once' in VaRestTypes.h"
#endif
#define VARESTPLUGIN_VaRestTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PlymouthARPortal_Plugins_VaRestPlugin_Source_VaRestPlugin_Classes_VaRestTypes_h


#define FOREACH_ENUM_EREQUESTSTATUS(op) \
	op(ERequestStatus::NotStarted) \
	op(ERequestStatus::Processing) \
	op(ERequestStatus::Failed) \
	op(ERequestStatus::Failed_ConnectionError) 
#define FOREACH_ENUM_EREQUESTCONTENTTYPE(op) \
	op(ERequestContentType::x_www_form_urlencoded_url) \
	op(ERequestContentType::x_www_form_urlencoded_body) \
	op(ERequestContentType::json) 
#define FOREACH_ENUM_EREQUESTVERB(op) \
	op(ERequestVerb::GET) \
	op(ERequestVerb::POST) \
	op(ERequestVerb::PUT) \
	op(ERequestVerb::DEL) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
