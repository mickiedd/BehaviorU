// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviorTree/BehaviacBehaviorTree.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBehaviacBehaviorNode;
class UBehaviacBehaviorTree;
class UObject;
#ifdef BEHAVIACRUNTIME_BehaviacBehaviorTree_generated_h
#error "BehaviacBehaviorTree.generated.h already included, missing '#pragma once' in BehaviacBehaviorTree.h"
#endif
#define BEHAVIACRUNTIME_BehaviacBehaviorTree_generated_h

#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRootNode);


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviacBehaviorTree(); \
	friend struct Z_Construct_UClass_UBehaviacBehaviorTree_Statics; \
public: \
	DECLARE_CLASS(UBehaviacBehaviorTree, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviacRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBehaviacBehaviorTree)


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviacBehaviorTree(UBehaviacBehaviorTree&&); \
	UBehaviacBehaviorTree(const UBehaviacBehaviorTree&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviacBehaviorTree); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviacBehaviorTree); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBehaviacBehaviorTree) \
	NO_API virtual ~UBehaviacBehaviorTree();


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_20_PROLOG
#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_23_INCLASS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIACRUNTIME_API UClass* StaticClass<class UBehaviacBehaviorTree>();

#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadBehaviorTreeFromFile);


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBehaviacBehaviorTreeLibrary(); \
	friend struct Z_Construct_UClass_UBehaviacBehaviorTreeLibrary_Statics; \
public: \
	DECLARE_CLASS(UBehaviacBehaviorTreeLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BehaviacRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBehaviacBehaviorTreeLibrary)


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_68_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBehaviacBehaviorTreeLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBehaviacBehaviorTreeLibrary(UBehaviacBehaviorTreeLibrary&&); \
	UBehaviacBehaviorTreeLibrary(const UBehaviacBehaviorTreeLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBehaviacBehaviorTreeLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBehaviacBehaviorTreeLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBehaviacBehaviorTreeLibrary) \
	NO_API virtual ~UBehaviacBehaviorTreeLibrary();


#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_65_PROLOG
#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_68_INCLASS_NO_PURE_DECLS \
	FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEHAVIACRUNTIME_API UClass* StaticClass<class UBehaviacBehaviorTreeLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
