// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviacAgent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBehaviacBehaviorTree;
enum class EBehaviacStatus : uint8;
#ifdef BEHAVIACRUNTIME_BehaviacAgent_generated_h
#error "BehaviacAgent.generated.h already included, missing '#pragma once' in BehaviacAgent.h"
#endif
#define BEHAVIACRUNTIME_BehaviacAgent_generated_h

#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_15_DELEGATE \
BEHAVIACRUNTIME_API void FBehaviacMethodDelegate_DelegateWrapper(const FMulticastScriptDelegate& BehaviacMethodDelegate, const FString& MethodName, EBehaviacStatus& OutResult);


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_16_DELEGATE \
BEHAVIACRUNTIME_API void FBehaviacSignalDelegate_DelegateWrapper(const FMulticastScriptDelegate& BehaviacSignalDelegate, const FString& SignalName);


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFireEvent); \
	DECLARE_FUNCTION(execClearAllSignals); \
	DECLARE_FUNCTION(execClearSignal); \
	DECLARE_FUNCTION(execIsSignalSet); \
	DECLARE_FUNCTION(execSendSignal); \
	DECLARE_FUNCTION(execExecuteMethod); \
	DECLARE_FUNCTION(execGetBoolProperty); \
	DECLARE_FUNCTION(execSetBoolProperty); \
	DECLARE_FUNCTION(execGetFloatProperty); \
	DECLARE_FUNCTION(execSetFloatProperty); \
	DECLARE_FUNCTION(execGetIntProperty); \
	DECLARE_FUNCTION(execSetIntProperty); \
	DECLARE_FUNCTION(execHasProperty); \
	DECLARE_FUNCTION(execGetPropertyValue); \
	DECLARE_FUNCTION(execSetPropertyValue); \
	DECLARE_FUNCTION(execGetBehaviorTreeStatus); \
	DECLARE_FUNCTION(execResetBehaviorTree); \
	DECLARE_FUNCTION(execStopBehaviorTree); \
	DECLARE_FUNCTION(execTickBehaviorTree); \
	DECLARE_FUNCTION(execLoadBehaviorTreeByPath); \
	DECLARE_FUNCTION(execLoadBehaviorTree);


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_34_CALLBACK_WRAPPERS
#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviacAgentComponent(); \
	friend struct Z_Construct_UClass_UBehaviacAgentComponent_Statics; \
public: \
	DECLARE_CLASS(UBehaviacAgentComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BehaviacRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBehaviacAgentComponent)


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_34_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviacAgentComponent(UBehaviacAgentComponent&&); \
	UBehaviacAgentComponent(const UBehaviacAgentComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviacAgentComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviacAgentComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBehaviacAgentComponent) \
	NO_API virtual ~UBehaviacAgentComponent();


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_31_PROLOG
#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_34_CALLBACK_WRAPPERS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_34_INCLASS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIACRUNTIME_API UClass* StaticClass<class UBehaviacAgentComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
