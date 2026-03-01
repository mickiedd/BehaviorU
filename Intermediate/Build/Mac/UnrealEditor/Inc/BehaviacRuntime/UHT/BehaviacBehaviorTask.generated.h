// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BehaviacBehaviorTask.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBehaviacBehaviorNode;
enum class EBehaviacStatus : uint8;
#ifdef BEHAVIACRUNTIME_BehaviacBehaviorTask_generated_h
#error "BehaviacBehaviorTask.generated.h already included, missing '#pragma once' in BehaviacBehaviorTask.h"
#endif
#define BEHAVIACRUNTIME_BehaviacBehaviorTask_generated_h

#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNode); \
	DECLARE_FUNCTION(execGetStatus);


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviacBehaviorTask(); \
	friend struct Z_Construct_UClass_UBehaviacBehaviorTask_Statics; \
public: \
	DECLARE_CLASS(UBehaviacBehaviorTask, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BehaviacRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBehaviacBehaviorTask)


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviacBehaviorTask(UBehaviacBehaviorTask&&); \
	UBehaviacBehaviorTask(const UBehaviacBehaviorTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviacBehaviorTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviacBehaviorTask); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBehaviacBehaviorTask) \
	NO_API virtual ~UBehaviacBehaviorTask();


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_21_PROLOG
#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_24_INCLASS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIACRUNTIME_API UClass* StaticClass<class UBehaviacBehaviorTask>();

#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_98_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviacCompositeTask(); \
	friend struct Z_Construct_UClass_UBehaviacCompositeTask_Statics; \
public: \
	DECLARE_CLASS(UBehaviacCompositeTask, UBehaviacBehaviorTask, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BehaviacRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBehaviacCompositeTask)


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_98_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviacCompositeTask(UBehaviacCompositeTask&&); \
	UBehaviacCompositeTask(const UBehaviacCompositeTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviacCompositeTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviacCompositeTask); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBehaviacCompositeTask) \
	NO_API virtual ~UBehaviacCompositeTask();


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_95_PROLOG
#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_98_INCLASS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_98_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIACRUNTIME_API UClass* StaticClass<class UBehaviacCompositeTask>();

#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_126_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviacSingleChildTask(); \
	friend struct Z_Construct_UClass_UBehaviacSingleChildTask_Statics; \
public: \
	DECLARE_CLASS(UBehaviacSingleChildTask, UBehaviacBehaviorTask, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BehaviacRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBehaviacSingleChildTask)


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_126_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviacSingleChildTask(UBehaviacSingleChildTask&&); \
	UBehaviacSingleChildTask(const UBehaviacSingleChildTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviacSingleChildTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviacSingleChildTask); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBehaviacSingleChildTask) \
	NO_API virtual ~UBehaviacSingleChildTask();


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_123_PROLOG
#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_126_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_126_INCLASS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_126_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIACRUNTIME_API UClass* StaticClass<class UBehaviacSingleChildTask>();

#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_149_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviacLeafTask(); \
	friend struct Z_Construct_UClass_UBehaviacLeafTask_Statics; \
public: \
	DECLARE_CLASS(UBehaviacLeafTask, UBehaviacBehaviorTask, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/BehaviacRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBehaviacLeafTask)


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_149_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviacLeafTask(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviacLeafTask(UBehaviacLeafTask&&); \
	UBehaviacLeafTask(const UBehaviacLeafTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviacLeafTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviacLeafTask); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UBehaviacLeafTask) \
	NO_API virtual ~UBehaviacLeafTask();


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_146_PROLOG
#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_149_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_149_INCLASS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_149_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIACRUNTIME_API UClass* StaticClass<class UBehaviacLeafTask>();

#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_161_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetTreeStatus);


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_161_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviacBehaviorTreeTask(); \
	friend struct Z_Construct_UClass_UBehaviacBehaviorTreeTask_Statics; \
public: \
	DECLARE_CLASS(UBehaviacBehaviorTreeTask, UBehaviacSingleChildTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviacRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBehaviacBehaviorTreeTask)


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_161_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviacBehaviorTreeTask(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviacBehaviorTreeTask(UBehaviacBehaviorTreeTask&&); \
	UBehaviacBehaviorTreeTask(const UBehaviacBehaviorTreeTask&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviacBehaviorTreeTask); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviacBehaviorTreeTask); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBehaviacBehaviorTreeTask) \
	NO_API virtual ~UBehaviacBehaviorTreeTask();


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_158_PROLOG
#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_161_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_161_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_161_INCLASS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_161_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIACRUNTIME_API UClass* StaticClass<class UBehaviacBehaviorTreeTask>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
