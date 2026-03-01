// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BehaviacBehaviorNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBehaviacBehaviorNode;
#ifdef BEHAVIACRUNTIME_BehaviacBehaviorNode_generated_h
#error "BehaviacBehaviorNode.generated.h already included, missing '#pragma once' in BehaviacBehaviorNode.h"
#endif
#define BEHAVIACRUNTIME_BehaviacBehaviorNode_generated_h

#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetParent); \
	DECLARE_FUNCTION(execGetChild); \
	DECLARE_FUNCTION(execGetChildCount);


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviacBehaviorNode(); \
	friend struct Z_Construct_UClass_UBehaviacBehaviorNode_Statics; \
public: \
	DECLARE_CLASS(UBehaviacBehaviorNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BehaviacRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBehaviacBehaviorNode)


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviacBehaviorNode(UBehaviacBehaviorNode&&); \
	UBehaviacBehaviorNode(const UBehaviacBehaviorNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviacBehaviorNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviacBehaviorNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBehaviacBehaviorNode) \
	NO_API virtual ~UBehaviacBehaviorNode();


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h_22_PROLOG
#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h_25_INCLASS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIACRUNTIME_API UClass* StaticClass<class UBehaviacBehaviorNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
