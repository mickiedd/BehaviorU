// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviacRuntime/Public/BehaviacTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviacTypes() {}

// Begin Cross Module References
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacActionResult();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacChildFinishPolicy();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacEffectorPhase();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacFileFormat();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacParallelPolicy();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacPreconditionPhase();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus();
BEHAVIACRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FBehaviacProperty();
UPackage* Z_Construct_UPackage__Script_BehaviacRuntime();
// End Cross Module References

// Begin Enum EBehaviacStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBehaviacStatus;
static UEnum* EBehaviacStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBehaviacStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBehaviacStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus, (UObject*)Z_Construct_UPackage__Script_BehaviacRuntime(), TEXT("EBehaviacStatus"));
	}
	return Z_Registration_Info_UEnum_EBehaviacStatus.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacStatus>()
{
	return EBehaviacStatus_StaticEnum();
}
struct Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Return values of node execution and valid states for behaviors. */" },
#endif
		{ "Failure.DisplayName", "Failure" },
		{ "Failure.Name", "EBehaviacStatus::Failure" },
		{ "Invalid.DisplayName", "Invalid" },
		{ "Invalid.Name", "EBehaviacStatus::Invalid" },
		{ "ModuleRelativePath", "Public/BehaviacTypes.h" },
		{ "Running.DisplayName", "Running" },
		{ "Running.Name", "EBehaviacStatus::Running" },
		{ "Success.DisplayName", "Success" },
		{ "Success.Name", "EBehaviacStatus::Success" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Return values of node execution and valid states for behaviors." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBehaviacStatus::Invalid", (int64)EBehaviacStatus::Invalid },
		{ "EBehaviacStatus::Success", (int64)EBehaviacStatus::Success },
		{ "EBehaviacStatus::Failure", (int64)EBehaviacStatus::Failure },
		{ "EBehaviacStatus::Running", (int64)EBehaviacStatus::Running },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BehaviacRuntime,
	nullptr,
	"EBehaviacStatus",
	"EBehaviacStatus",
	Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus()
{
	if (!Z_Registration_Info_UEnum_EBehaviacStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBehaviacStatus.InnerSingleton, Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBehaviacStatus.InnerSingleton;
}
// End Enum EBehaviacStatus

// Begin Enum EBehaviacActionResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBehaviacActionResult;
static UEnum* EBehaviacActionResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBehaviacActionResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBehaviacActionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BehaviacRuntime_EBehaviacActionResult, (UObject*)Z_Construct_UPackage__Script_BehaviacRuntime(), TEXT("EBehaviacActionResult"));
	}
	return Z_Registration_Info_UEnum_EBehaviacActionResult.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacActionResult>()
{
	return EBehaviacActionResult_StaticEnum();
}
struct Z_Construct_UEnum_BehaviacRuntime_EBehaviacActionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.DisplayName", "All" },
		{ "All.Name", "EBehaviacActionResult::All" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Action result for preconditions/effectors. */" },
#endif
		{ "Failure.DisplayName", "Failure" },
		{ "Failure.Name", "EBehaviacActionResult::Failure" },
		{ "ModuleRelativePath", "Public/BehaviacTypes.h" },
		{ "Success.DisplayName", "Success" },
		{ "Success.Name", "EBehaviacActionResult::Success" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action result for preconditions/effectors." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBehaviacActionResult::Success", (int64)EBehaviacActionResult::Success },
		{ "EBehaviacActionResult::Failure", (int64)EBehaviacActionResult::Failure },
		{ "EBehaviacActionResult::All", (int64)EBehaviacActionResult::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BehaviacRuntime_EBehaviacActionResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BehaviacRuntime,
	nullptr,
	"EBehaviacActionResult",
	"EBehaviacActionResult",
	Z_Construct_UEnum_BehaviacRuntime_EBehaviacActionResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacActionResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacActionResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BehaviacRuntime_EBehaviacActionResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacActionResult()
{
	if (!Z_Registration_Info_UEnum_EBehaviacActionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBehaviacActionResult.InnerSingleton, Z_Construct_UEnum_BehaviacRuntime_EBehaviacActionResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBehaviacActionResult.InnerSingleton;
}
// End Enum EBehaviacActionResult

// Begin Enum EBehaviacOperatorType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBehaviacOperatorType;
static UEnum* EBehaviacOperatorType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBehaviacOperatorType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBehaviacOperatorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType, (UObject*)Z_Construct_UPackage__Script_BehaviacRuntime(), TEXT("EBehaviacOperatorType"));
	}
	return Z_Registration_Info_UEnum_EBehaviacOperatorType.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacOperatorType>()
{
	return EBehaviacOperatorType_StaticEnum();
}
struct Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Add.Comment", "// =\n" },
		{ "Add.Name", "EBehaviacOperatorType::Add" },
		{ "Assign.Name", "EBehaviacOperatorType::Assign" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Operator types used in conditions and computations. */" },
#endif
		{ "Divide.Comment", "// =\n// +\n// -\n// *\n" },
		{ "Divide.Name", "EBehaviacOperatorType::Divide" },
		{ "Equal.Comment", "// =\n// +\n// -\n// *\n// /\n" },
		{ "Equal.Name", "EBehaviacOperatorType::Equal" },
		{ "Greater.Comment", "// =\n// +\n// -\n// *\n// /\n// ==\n// !=\n" },
		{ "Greater.Name", "EBehaviacOperatorType::Greater" },
		{ "GreaterEqual.Comment", "// =\n// +\n// -\n// *\n// /\n// ==\n// !=\n// >\n// <\n" },
		{ "GreaterEqual.Name", "EBehaviacOperatorType::GreaterEqual" },
		{ "Invalid.Name", "EBehaviacOperatorType::Invalid" },
		{ "Less.Comment", "// =\n// +\n// -\n// *\n// /\n// ==\n// !=\n// >\n" },
		{ "Less.Name", "EBehaviacOperatorType::Less" },
		{ "LessEqual.Comment", "// =\n// +\n// -\n// *\n// /\n// ==\n// !=\n// >\n// <\n// >=\n" },
		{ "LessEqual.Name", "EBehaviacOperatorType::LessEqual" },
		{ "ModuleRelativePath", "Public/BehaviacTypes.h" },
		{ "Multiply.Comment", "// =\n// +\n// -\n" },
		{ "Multiply.Name", "EBehaviacOperatorType::Multiply" },
		{ "NotEqual.Comment", "// =\n// +\n// -\n// *\n// /\n// ==\n" },
		{ "NotEqual.Name", "EBehaviacOperatorType::NotEqual" },
		{ "Subtract.Comment", "// =\n// +\n" },
		{ "Subtract.Name", "EBehaviacOperatorType::Subtract" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Operator types used in conditions and computations." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBehaviacOperatorType::Invalid", (int64)EBehaviacOperatorType::Invalid },
		{ "EBehaviacOperatorType::Assign", (int64)EBehaviacOperatorType::Assign },
		{ "EBehaviacOperatorType::Add", (int64)EBehaviacOperatorType::Add },
		{ "EBehaviacOperatorType::Subtract", (int64)EBehaviacOperatorType::Subtract },
		{ "EBehaviacOperatorType::Multiply", (int64)EBehaviacOperatorType::Multiply },
		{ "EBehaviacOperatorType::Divide", (int64)EBehaviacOperatorType::Divide },
		{ "EBehaviacOperatorType::Equal", (int64)EBehaviacOperatorType::Equal },
		{ "EBehaviacOperatorType::NotEqual", (int64)EBehaviacOperatorType::NotEqual },
		{ "EBehaviacOperatorType::Greater", (int64)EBehaviacOperatorType::Greater },
		{ "EBehaviacOperatorType::Less", (int64)EBehaviacOperatorType::Less },
		{ "EBehaviacOperatorType::GreaterEqual", (int64)EBehaviacOperatorType::GreaterEqual },
		{ "EBehaviacOperatorType::LessEqual", (int64)EBehaviacOperatorType::LessEqual },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BehaviacRuntime,
	nullptr,
	"EBehaviacOperatorType",
	"EBehaviacOperatorType",
	Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType()
{
	if (!Z_Registration_Info_UEnum_EBehaviacOperatorType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBehaviacOperatorType.InnerSingleton, Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBehaviacOperatorType.InnerSingleton;
}
// End Enum EBehaviacOperatorType

// Begin Enum EBehaviacParallelPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBehaviacParallelPolicy;
static UEnum* EBehaviacParallelPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBehaviacParallelPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBehaviacParallelPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BehaviacRuntime_EBehaviacParallelPolicy, (UObject*)Z_Construct_UPackage__Script_BehaviacRuntime(), TEXT("EBehaviacParallelPolicy"));
	}
	return Z_Registration_Info_UEnum_EBehaviacParallelPolicy.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacParallelPolicy>()
{
	return EBehaviacParallelPolicy_StaticEnum();
}
struct Z_Construct_UEnum_BehaviacRuntime_EBehaviacParallelPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Parallel node policy for child completion. */" },
#endif
		{ "FailOnAll_SucceedOnOne.Comment", "/** Succeed when any child succeeds, fail when all fail */" },
		{ "FailOnAll_SucceedOnOne.DisplayName", "Fail On All, Succeed On One" },
		{ "FailOnAll_SucceedOnOne.Name", "EBehaviacParallelPolicy::FailOnAll_SucceedOnOne" },
		{ "FailOnAll_SucceedOnOne.ToolTip", "Succeed when any child succeeds, fail when all fail" },
		{ "FailOnOne_SucceedOnAll.Comment", "/** Succeed when all children succeed, fail when any fails */" },
		{ "FailOnOne_SucceedOnAll.DisplayName", "Fail On One, Succeed On All" },
		{ "FailOnOne_SucceedOnAll.Name", "EBehaviacParallelPolicy::FailOnOne_SucceedOnAll" },
		{ "FailOnOne_SucceedOnAll.ToolTip", "Succeed when all children succeed, fail when any fails" },
		{ "FailOnOne_SucceedOnOne.Comment", "/** Succeed when any child succeeds, fail when any fails */" },
		{ "FailOnOne_SucceedOnOne.DisplayName", "Fail On One, Succeed On One" },
		{ "FailOnOne_SucceedOnOne.Name", "EBehaviacParallelPolicy::FailOnOne_SucceedOnOne" },
		{ "FailOnOne_SucceedOnOne.ToolTip", "Succeed when any child succeeds, fail when any fails" },
		{ "ModuleRelativePath", "Public/BehaviacTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parallel node policy for child completion." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBehaviacParallelPolicy::FailOnOne_SucceedOnAll", (int64)EBehaviacParallelPolicy::FailOnOne_SucceedOnAll },
		{ "EBehaviacParallelPolicy::FailOnAll_SucceedOnOne", (int64)EBehaviacParallelPolicy::FailOnAll_SucceedOnOne },
		{ "EBehaviacParallelPolicy::FailOnOne_SucceedOnOne", (int64)EBehaviacParallelPolicy::FailOnOne_SucceedOnOne },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BehaviacRuntime_EBehaviacParallelPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BehaviacRuntime,
	nullptr,
	"EBehaviacParallelPolicy",
	"EBehaviacParallelPolicy",
	Z_Construct_UEnum_BehaviacRuntime_EBehaviacParallelPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacParallelPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacParallelPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BehaviacRuntime_EBehaviacParallelPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacParallelPolicy()
{
	if (!Z_Registration_Info_UEnum_EBehaviacParallelPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBehaviacParallelPolicy.InnerSingleton, Z_Construct_UEnum_BehaviacRuntime_EBehaviacParallelPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBehaviacParallelPolicy.InnerSingleton;
}
// End Enum EBehaviacParallelPolicy

// Begin Enum EBehaviacChildFinishPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBehaviacChildFinishPolicy;
static UEnum* EBehaviacChildFinishPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBehaviacChildFinishPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBehaviacChildFinishPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BehaviacRuntime_EBehaviacChildFinishPolicy, (UObject*)Z_Construct_UPackage__Script_BehaviacRuntime(), TEXT("EBehaviacChildFinishPolicy"));
	}
	return Z_Registration_Info_UEnum_EBehaviacChildFinishPolicy.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacChildFinishPolicy>()
{
	return EBehaviacChildFinishPolicy_StaticEnum();
}
struct Z_Construct_UEnum_BehaviacRuntime_EBehaviacChildFinishPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Parallel node exit policy for child that completed early. */" },
#endif
		{ "Loop.Comment", "/** Keep ticking completed children */" },
		{ "Loop.DisplayName", "Loop" },
		{ "Loop.Name", "EBehaviacChildFinishPolicy::Loop" },
		{ "Loop.ToolTip", "Keep ticking completed children" },
		{ "ModuleRelativePath", "Public/BehaviacTypes.h" },
		{ "Once.Comment", "/** Stop ticking completed children */" },
		{ "Once.DisplayName", "Once" },
		{ "Once.Name", "EBehaviacChildFinishPolicy::Once" },
		{ "Once.ToolTip", "Stop ticking completed children" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parallel node exit policy for child that completed early." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBehaviacChildFinishPolicy::Loop", (int64)EBehaviacChildFinishPolicy::Loop },
		{ "EBehaviacChildFinishPolicy::Once", (int64)EBehaviacChildFinishPolicy::Once },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BehaviacRuntime_EBehaviacChildFinishPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BehaviacRuntime,
	nullptr,
	"EBehaviacChildFinishPolicy",
	"EBehaviacChildFinishPolicy",
	Z_Construct_UEnum_BehaviacRuntime_EBehaviacChildFinishPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacChildFinishPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacChildFinishPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BehaviacRuntime_EBehaviacChildFinishPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacChildFinishPolicy()
{
	if (!Z_Registration_Info_UEnum_EBehaviacChildFinishPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBehaviacChildFinishPolicy.InnerSingleton, Z_Construct_UEnum_BehaviacRuntime_EBehaviacChildFinishPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBehaviacChildFinishPolicy.InnerSingleton;
}
// End Enum EBehaviacChildFinishPolicy

// Begin Enum EBehaviacPreconditionPhase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBehaviacPreconditionPhase;
static UEnum* EBehaviacPreconditionPhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBehaviacPreconditionPhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBehaviacPreconditionPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BehaviacRuntime_EBehaviacPreconditionPhase, (UObject*)Z_Construct_UPackage__Script_BehaviacRuntime(), TEXT("EBehaviacPreconditionPhase"));
	}
	return Z_Registration_Info_UEnum_EBehaviacPreconditionPhase.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacPreconditionPhase>()
{
	return EBehaviacPreconditionPhase_StaticEnum();
}
struct Z_Construct_UEnum_BehaviacRuntime_EBehaviacPreconditionPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Name", "EBehaviacPreconditionPhase::Both" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Precondition phase. */" },
#endif
		{ "Enter.Name", "EBehaviacPreconditionPhase::Enter" },
		{ "ModuleRelativePath", "Public/BehaviacTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Precondition phase." },
#endif
		{ "Update.Name", "EBehaviacPreconditionPhase::Update" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBehaviacPreconditionPhase::Enter", (int64)EBehaviacPreconditionPhase::Enter },
		{ "EBehaviacPreconditionPhase::Update", (int64)EBehaviacPreconditionPhase::Update },
		{ "EBehaviacPreconditionPhase::Both", (int64)EBehaviacPreconditionPhase::Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BehaviacRuntime_EBehaviacPreconditionPhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BehaviacRuntime,
	nullptr,
	"EBehaviacPreconditionPhase",
	"EBehaviacPreconditionPhase",
	Z_Construct_UEnum_BehaviacRuntime_EBehaviacPreconditionPhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacPreconditionPhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacPreconditionPhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BehaviacRuntime_EBehaviacPreconditionPhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacPreconditionPhase()
{
	if (!Z_Registration_Info_UEnum_EBehaviacPreconditionPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBehaviacPreconditionPhase.InnerSingleton, Z_Construct_UEnum_BehaviacRuntime_EBehaviacPreconditionPhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBehaviacPreconditionPhase.InnerSingleton;
}
// End Enum EBehaviacPreconditionPhase

// Begin Enum EBehaviacEffectorPhase
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBehaviacEffectorPhase;
static UEnum* EBehaviacEffectorPhase_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBehaviacEffectorPhase.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBehaviacEffectorPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BehaviacRuntime_EBehaviacEffectorPhase, (UObject*)Z_Construct_UPackage__Script_BehaviacRuntime(), TEXT("EBehaviacEffectorPhase"));
	}
	return Z_Registration_Info_UEnum_EBehaviacEffectorPhase.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacEffectorPhase>()
{
	return EBehaviacEffectorPhase_StaticEnum();
}
struct Z_Construct_UEnum_BehaviacRuntime_EBehaviacEffectorPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Name", "EBehaviacEffectorPhase::Both" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Effector phase. */" },
#endif
		{ "Failure.Name", "EBehaviacEffectorPhase::Failure" },
		{ "ModuleRelativePath", "Public/BehaviacTypes.h" },
		{ "Success.Name", "EBehaviacEffectorPhase::Success" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effector phase." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBehaviacEffectorPhase::Success", (int64)EBehaviacEffectorPhase::Success },
		{ "EBehaviacEffectorPhase::Failure", (int64)EBehaviacEffectorPhase::Failure },
		{ "EBehaviacEffectorPhase::Both", (int64)EBehaviacEffectorPhase::Both },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BehaviacRuntime_EBehaviacEffectorPhase_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BehaviacRuntime,
	nullptr,
	"EBehaviacEffectorPhase",
	"EBehaviacEffectorPhase",
	Z_Construct_UEnum_BehaviacRuntime_EBehaviacEffectorPhase_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacEffectorPhase_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacEffectorPhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BehaviacRuntime_EBehaviacEffectorPhase_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacEffectorPhase()
{
	if (!Z_Registration_Info_UEnum_EBehaviacEffectorPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBehaviacEffectorPhase.InnerSingleton, Z_Construct_UEnum_BehaviacRuntime_EBehaviacEffectorPhase_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBehaviacEffectorPhase.InnerSingleton;
}
// End Enum EBehaviacEffectorPhase

// Begin Enum EBehaviacFileFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBehaviacFileFormat;
static UEnum* EBehaviacFileFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBehaviacFileFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBehaviacFileFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BehaviacRuntime_EBehaviacFileFormat, (UObject*)Z_Construct_UPackage__Script_BehaviacRuntime(), TEXT("EBehaviacFileFormat"));
	}
	return Z_Registration_Info_UEnum_EBehaviacFileFormat.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UEnum* StaticEnum<EBehaviacFileFormat>()
{
	return EBehaviacFileFormat_StaticEnum();
}
struct Z_Construct_UEnum_BehaviacRuntime_EBehaviacFileFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BSON.Name", "EBehaviacFileFormat::BSON" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** File format for behavior tree data. */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "File format for behavior tree data." },
#endif
		{ "XML.Name", "EBehaviacFileFormat::XML" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBehaviacFileFormat::XML", (int64)EBehaviacFileFormat::XML },
		{ "EBehaviacFileFormat::BSON", (int64)EBehaviacFileFormat::BSON },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BehaviacRuntime_EBehaviacFileFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BehaviacRuntime,
	nullptr,
	"EBehaviacFileFormat",
	"EBehaviacFileFormat",
	Z_Construct_UEnum_BehaviacRuntime_EBehaviacFileFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacFileFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BehaviacRuntime_EBehaviacFileFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BehaviacRuntime_EBehaviacFileFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacFileFormat()
{
	if (!Z_Registration_Info_UEnum_EBehaviacFileFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBehaviacFileFormat.InnerSingleton, Z_Construct_UEnum_BehaviacRuntime_EBehaviacFileFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBehaviacFileFormat.InnerSingleton;
}
// End Enum EBehaviacFileFormat

// Begin ScriptStruct FBehaviacProperty
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BehaviacProperty;
class UScriptStruct* FBehaviacProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BehaviacProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BehaviacProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBehaviacProperty, (UObject*)Z_Construct_UPackage__Script_BehaviacRuntime(), TEXT("BehaviacProperty"));
	}
	return Z_Registration_Info_UScriptStruct_BehaviacProperty.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UScriptStruct* StaticStruct<FBehaviacProperty>()
{
	return FBehaviacProperty::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBehaviacProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Property container used during node loading. */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Property container used during node loading." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Behaviac" },
		{ "ModuleRelativePath", "Public/BehaviacTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Behaviac" },
		{ "ModuleRelativePath", "Public/BehaviacTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBehaviacProperty>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBehaviacProperty_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBehaviacProperty, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBehaviacProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBehaviacProperty, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBehaviacProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviacProperty_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviacProperty_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviacProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBehaviacProperty_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
	nullptr,
	&NewStructOps,
	"BehaviacProperty",
	Z_Construct_UScriptStruct_FBehaviacProperty_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviacProperty_Statics::PropPointers),
	sizeof(FBehaviacProperty),
	alignof(FBehaviacProperty),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviacProperty_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBehaviacProperty_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBehaviacProperty()
{
	if (!Z_Registration_Info_UScriptStruct_BehaviacProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BehaviacProperty.InnerSingleton, Z_Construct_UScriptStruct_FBehaviacProperty_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BehaviacProperty.InnerSingleton;
}
// End ScriptStruct FBehaviacProperty

// Begin Registration
struct Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBehaviacStatus_StaticEnum, TEXT("EBehaviacStatus"), &Z_Registration_Info_UEnum_EBehaviacStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4195475470U) },
		{ EBehaviacActionResult_StaticEnum, TEXT("EBehaviacActionResult"), &Z_Registration_Info_UEnum_EBehaviacActionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2286366246U) },
		{ EBehaviacOperatorType_StaticEnum, TEXT("EBehaviacOperatorType"), &Z_Registration_Info_UEnum_EBehaviacOperatorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2665105269U) },
		{ EBehaviacParallelPolicy_StaticEnum, TEXT("EBehaviacParallelPolicy"), &Z_Registration_Info_UEnum_EBehaviacParallelPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1371225892U) },
		{ EBehaviacChildFinishPolicy_StaticEnum, TEXT("EBehaviacChildFinishPolicy"), &Z_Registration_Info_UEnum_EBehaviacChildFinishPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2046566714U) },
		{ EBehaviacPreconditionPhase_StaticEnum, TEXT("EBehaviacPreconditionPhase"), &Z_Registration_Info_UEnum_EBehaviacPreconditionPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 787748779U) },
		{ EBehaviacEffectorPhase_StaticEnum, TEXT("EBehaviacEffectorPhase"), &Z_Registration_Info_UEnum_EBehaviacEffectorPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1317963560U) },
		{ EBehaviacFileFormat_StaticEnum, TEXT("EBehaviacFileFormat"), &Z_Registration_Info_UEnum_EBehaviacFileFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3119507038U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBehaviacProperty::StaticStruct, Z_Construct_UScriptStruct_FBehaviacProperty_Statics::NewStructOps, TEXT("BehaviacProperty"), &Z_Registration_Info_UScriptStruct_BehaviacProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBehaviacProperty), 1297951897U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacTypes_h_85844585(TEXT("/Script/BehaviacRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
