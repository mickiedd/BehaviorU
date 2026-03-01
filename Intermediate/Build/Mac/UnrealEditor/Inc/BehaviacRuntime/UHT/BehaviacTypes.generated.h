// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BehaviacTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEHAVIACRUNTIME_BehaviacTypes_generated_h
#error "BehaviacTypes.generated.h already included, missing '#pragma once' in BehaviacTypes.h"
#endif
#define BEHAVIACRUNTIME_BehaviacTypes_generated_h

#define FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacTypes_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBehaviacProperty_Statics; \
	static class UScriptStruct* StaticStruct();


template<> BEHAVIACRUNTIME_API UScriptStruct* StaticStruct<struct FBehaviacProperty>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacTypes_h


#define FOREACH_ENUM_EBEHAVIACSTATUS(op) \
	op(EBehaviacStatus::Invalid) \
	op(EBehaviacStatus::Success) \
	op(EBehaviacStatus::Failure) \
	op(EBehaviacStatus::Running) 

enum class EBehaviacStatus : uint8;
template<> struct TIsUEnumClass<EBehaviacStatus> { enum { Value = true }; };
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacStatus>();

#define FOREACH_ENUM_EBEHAVIACACTIONRESULT(op) \
	op(EBehaviacActionResult::Success) \
	op(EBehaviacActionResult::Failure) \
	op(EBehaviacActionResult::All) 

enum class EBehaviacActionResult : uint8;
template<> struct TIsUEnumClass<EBehaviacActionResult> { enum { Value = true }; };
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacActionResult>();

#define FOREACH_ENUM_EBEHAVIACOPERATORTYPE(op) \
	op(EBehaviacOperatorType::Invalid) \
	op(EBehaviacOperatorType::Assign) \
	op(EBehaviacOperatorType::Add) \
	op(EBehaviacOperatorType::Subtract) \
	op(EBehaviacOperatorType::Multiply) \
	op(EBehaviacOperatorType::Divide) \
	op(EBehaviacOperatorType::Equal) \
	op(EBehaviacOperatorType::NotEqual) \
	op(EBehaviacOperatorType::Greater) \
	op(EBehaviacOperatorType::Less) \
	op(EBehaviacOperatorType::GreaterEqual) \
	op(EBehaviacOperatorType::LessEqual) 

enum class EBehaviacOperatorType : uint8;
template<> struct TIsUEnumClass<EBehaviacOperatorType> { enum { Value = true }; };
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacOperatorType>();

#define FOREACH_ENUM_EBEHAVIACPARALLELPOLICY(op) \
	op(EBehaviacParallelPolicy::FailOnOne_SucceedOnAll) \
	op(EBehaviacParallelPolicy::FailOnAll_SucceedOnOne) \
	op(EBehaviacParallelPolicy::FailOnOne_SucceedOnOne) 

enum class EBehaviacParallelPolicy : uint8;
template<> struct TIsUEnumClass<EBehaviacParallelPolicy> { enum { Value = true }; };
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacParallelPolicy>();

#define FOREACH_ENUM_EBEHAVIACCHILDFINISHPOLICY(op) \
	op(EBehaviacChildFinishPolicy::Loop) \
	op(EBehaviacChildFinishPolicy::Once) 

enum class EBehaviacChildFinishPolicy : uint8;
template<> struct TIsUEnumClass<EBehaviacChildFinishPolicy> { enum { Value = true }; };
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacChildFinishPolicy>();

#define FOREACH_ENUM_EBEHAVIACPRECONDITIONPHASE(op) \
	op(EBehaviacPreconditionPhase::Enter) \
	op(EBehaviacPreconditionPhase::Update) \
	op(EBehaviacPreconditionPhase::Both) 

enum class EBehaviacPreconditionPhase : uint8;
template<> struct TIsUEnumClass<EBehaviacPreconditionPhase> { enum { Value = true }; };
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacPreconditionPhase>();

#define FOREACH_ENUM_EBEHAVIACEFFECTORPHASE(op) \
	op(EBehaviacEffectorPhase::Success) \
	op(EBehaviacEffectorPhase::Failure) \
	op(EBehaviacEffectorPhase::Both) 

enum class EBehaviacEffectorPhase : uint8;
template<> struct TIsUEnumClass<EBehaviacEffectorPhase> { enum { Value = true }; };
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacEffectorPhase>();

#define FOREACH_ENUM_EBEHAVIACFILEFORMAT(op) \
	op(EBehaviacFileFormat::XML) \
	op(EBehaviacFileFormat::BSON) 

enum class EBehaviacFileFormat : uint8;
template<> struct TIsUEnumClass<EBehaviacFileFormat> { enum { Value = true }; };
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacFileFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
