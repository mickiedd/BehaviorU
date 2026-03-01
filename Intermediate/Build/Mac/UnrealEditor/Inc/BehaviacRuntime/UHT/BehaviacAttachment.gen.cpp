// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviacRuntime/Public/BehaviorTree/Attachments/BehaviacAttachment.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviacAttachment() {}

// Begin Cross Module References
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacAttachment();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacAttachment_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacEffector();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacEffector_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacEventAttachment();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacEventAttachment_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacPrecondition();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacPrecondition_NoRegister();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacActionResult();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacEffectorPhase();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacPreconditionPhase();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BehaviacRuntime();
// End Cross Module References

// Begin Class UBehaviacAttachment
void UBehaviacAttachment::StaticRegisterNativesUBehaviacAttachment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacAttachment);
UClass* Z_Construct_UClass_UBehaviacAttachment_NoRegister()
{
	return UBehaviacAttachment::StaticClass();
}
struct Z_Construct_UClass_UBehaviacAttachment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for node attachments (preconditions, effectors, events).\n * Attachments modify node behavior without changing the node itself.\n */" },
#endif
		{ "IncludePath", "BehaviorTree/Attachments/BehaviacAttachment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for node attachments (preconditions, effectors, events).\nAttachments modify node behavior without changing the node itself." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreconditionPhase_MetaData[] = {
		{ "Category", "Behaviac|Attachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Precondition phase this applies to */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Precondition phase this applies to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectorPhase_MetaData[] = {
		{ "Category", "Behaviac|Attachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Effector phase this applies to */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effector phase this applies to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionResult_MetaData[] = {
		{ "Category", "Behaviac|Attachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Action result that triggers this */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action result that triggers this" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNegate_MetaData[] = {
		{ "Category", "Behaviac|Attachment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether to negate the condition result */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to negate the condition result" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_PreconditionPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PreconditionPhase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EffectorPhase_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectorPhase;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionResult;
	static void NewProp_bNegate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNegate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacAttachment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_PreconditionPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_PreconditionPhase = { "PreconditionPhase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAttachment, PreconditionPhase), Z_Construct_UEnum_BehaviacRuntime_EBehaviacPreconditionPhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreconditionPhase_MetaData), NewProp_PreconditionPhase_MetaData) }; // 787748779
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_EffectorPhase_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_EffectorPhase = { "EffectorPhase", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAttachment, EffectorPhase), Z_Construct_UEnum_BehaviacRuntime_EBehaviacEffectorPhase, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectorPhase_MetaData), NewProp_EffectorPhase_MetaData) }; // 1317963560
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_ActionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_ActionResult = { "ActionResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAttachment, ActionResult), Z_Construct_UEnum_BehaviacRuntime_EBehaviacActionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionResult_MetaData), NewProp_ActionResult_MetaData) }; // 2286366246
void Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_bNegate_SetBit(void* Obj)
{
	((UBehaviacAttachment*)Obj)->bNegate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_bNegate = { "bNegate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBehaviacAttachment), &Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_bNegate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNegate_MetaData), NewProp_bNegate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_PreconditionPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_PreconditionPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_EffectorPhase_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_EffectorPhase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_ActionResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_ActionResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAttachment_Statics::NewProp_bNegate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAttachment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacAttachment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAttachment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacAttachment_Statics::ClassParams = {
	&UBehaviacAttachment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacAttachment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAttachment_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAttachment_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacAttachment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacAttachment()
{
	if (!Z_Registration_Info_UClass_UBehaviacAttachment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacAttachment.OuterSingleton, Z_Construct_UClass_UBehaviacAttachment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacAttachment.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacAttachment>()
{
	return UBehaviacAttachment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacAttachment);
UBehaviacAttachment::~UBehaviacAttachment() {}
// End Class UBehaviacAttachment

// Begin Class UBehaviacPrecondition
void UBehaviacPrecondition::StaticRegisterNativesUBehaviacPrecondition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacPrecondition);
UClass* Z_Construct_UClass_UBehaviacPrecondition_NoRegister()
{
	return UBehaviacPrecondition::StaticClass();
}
struct Z_Construct_UClass_UBehaviacPrecondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Precondition: evaluated before node execution.\n */" },
#endif
		{ "IncludePath", "BehaviorTree/Attachments/BehaviacAttachment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Precondition: evaluated before node execution." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConditionExpression_MetaData[] = {
		{ "Category", "Behaviac|Precondition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The condition expression to evaluate */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The condition expression to evaluate" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[] = {
		{ "Category", "Behaviac|Precondition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Operator for comparison */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Operator for comparison" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftOperand_MetaData[] = {
		{ "Category", "Behaviac|Precondition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Left operand */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Left operand" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightOperand_MetaData[] = {
		{ "Category", "Behaviac|Precondition" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Right operand */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Right operand" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ConditionExpression;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operator;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeftOperand;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RightOperand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacPrecondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacPrecondition_Statics::NewProp_ConditionExpression = { "ConditionExpression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacPrecondition, ConditionExpression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConditionExpression_MetaData), NewProp_ConditionExpression_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBehaviacPrecondition_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBehaviacPrecondition_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacPrecondition, Operator), Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operator_MetaData), NewProp_Operator_MetaData) }; // 2665105269
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacPrecondition_Statics::NewProp_LeftOperand = { "LeftOperand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacPrecondition, LeftOperand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftOperand_MetaData), NewProp_LeftOperand_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacPrecondition_Statics::NewProp_RightOperand = { "RightOperand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacPrecondition, RightOperand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightOperand_MetaData), NewProp_RightOperand_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacPrecondition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacPrecondition_Statics::NewProp_ConditionExpression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacPrecondition_Statics::NewProp_Operator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacPrecondition_Statics::NewProp_Operator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacPrecondition_Statics::NewProp_LeftOperand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacPrecondition_Statics::NewProp_RightOperand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacPrecondition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacPrecondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacAttachment,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacPrecondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacPrecondition_Statics::ClassParams = {
	&UBehaviacPrecondition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacPrecondition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacPrecondition_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacPrecondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacPrecondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacPrecondition()
{
	if (!Z_Registration_Info_UClass_UBehaviacPrecondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacPrecondition.OuterSingleton, Z_Construct_UClass_UBehaviacPrecondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacPrecondition.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacPrecondition>()
{
	return UBehaviacPrecondition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacPrecondition);
UBehaviacPrecondition::~UBehaviacPrecondition() {}
// End Class UBehaviacPrecondition

// Begin Class UBehaviacEffector
void UBehaviacEffector::StaticRegisterNativesUBehaviacEffector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacEffector);
UClass* Z_Construct_UClass_UBehaviacEffector_NoRegister()
{
	return UBehaviacEffector::StaticClass();
}
struct Z_Construct_UClass_UBehaviacEffector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Effector: applied after node completion (success or failure).\n */" },
#endif
		{ "IncludePath", "BehaviorTree/Attachments/BehaviacAttachment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effector: applied after node completion (success or failure)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionExpression_MetaData[] = {
		{ "Category", "Behaviac|Effector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The action expression to execute */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The action expression to execute" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "Behaviac|Effector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Property to set */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Property to set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValue_MetaData[] = {
		{ "Category", "Behaviac|Effector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Value to set */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Value to set" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionExpression;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacEffector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacEffector_Statics::NewProp_ActionExpression = { "ActionExpression", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacEffector, ActionExpression), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionExpression_MetaData), NewProp_ActionExpression_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacEffector_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacEffector, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacEffector_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacEffector, PropertyValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyValue_MetaData), NewProp_PropertyValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacEffector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacEffector_Statics::NewProp_ActionExpression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacEffector_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacEffector_Statics::NewProp_PropertyValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEffector_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacEffector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacAttachment,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEffector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacEffector_Statics::ClassParams = {
	&UBehaviacEffector::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacEffector_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEffector_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEffector_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacEffector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacEffector()
{
	if (!Z_Registration_Info_UClass_UBehaviacEffector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacEffector.OuterSingleton, Z_Construct_UClass_UBehaviacEffector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacEffector.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacEffector>()
{
	return UBehaviacEffector::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacEffector);
UBehaviacEffector::~UBehaviacEffector() {}
// End Class UBehaviacEffector

// Begin Class UBehaviacEventAttachment
void UBehaviacEventAttachment::StaticRegisterNativesUBehaviacEventAttachment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacEventAttachment);
UClass* Z_Construct_UClass_UBehaviacEventAttachment_NoRegister()
{
	return UBehaviacEventAttachment::StaticClass();
}
struct Z_Construct_UClass_UBehaviacEventAttachment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Event attachment: triggers behavior based on named events.\n */" },
#endif
		{ "IncludePath", "BehaviorTree/Attachments/BehaviacAttachment.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event attachment: triggers behavior based on named events." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "Category", "Behaviac|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the event to listen for */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the event to listen for" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTriggeredOnce_MetaData[] = {
		{ "Category", "Behaviac|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether the event triggers once or repeatedly */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the event triggers once or repeatedly" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceFilename_MetaData[] = {
		{ "Category", "Behaviac|Event" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The subtree to run when event fires */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Attachments/BehaviacAttachment.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The subtree to run when event fires" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
	static void NewProp_bTriggeredOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTriggeredOnce;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReferenceFilename;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacEventAttachment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacEventAttachment_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacEventAttachment, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
void Z_Construct_UClass_UBehaviacEventAttachment_Statics::NewProp_bTriggeredOnce_SetBit(void* Obj)
{
	((UBehaviacEventAttachment*)Obj)->bTriggeredOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviacEventAttachment_Statics::NewProp_bTriggeredOnce = { "bTriggeredOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBehaviacEventAttachment), &Z_Construct_UClass_UBehaviacEventAttachment_Statics::NewProp_bTriggeredOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTriggeredOnce_MetaData), NewProp_bTriggeredOnce_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacEventAttachment_Statics::NewProp_ReferenceFilename = { "ReferenceFilename", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacEventAttachment, ReferenceFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferenceFilename_MetaData), NewProp_ReferenceFilename_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacEventAttachment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacEventAttachment_Statics::NewProp_EventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacEventAttachment_Statics::NewProp_bTriggeredOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacEventAttachment_Statics::NewProp_ReferenceFilename,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEventAttachment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacEventAttachment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacAttachment,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEventAttachment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacEventAttachment_Statics::ClassParams = {
	&UBehaviacEventAttachment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacEventAttachment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEventAttachment_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEventAttachment_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacEventAttachment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacEventAttachment()
{
	if (!Z_Registration_Info_UClass_UBehaviacEventAttachment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacEventAttachment.OuterSingleton, Z_Construct_UClass_UBehaviacEventAttachment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacEventAttachment.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacEventAttachment>()
{
	return UBehaviacEventAttachment::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacEventAttachment);
UBehaviacEventAttachment::~UBehaviacEventAttachment() {}
// End Class UBehaviacEventAttachment

// Begin Registration
struct Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_Attachments_BehaviacAttachment_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviacAttachment, UBehaviacAttachment::StaticClass, TEXT("UBehaviacAttachment"), &Z_Registration_Info_UClass_UBehaviacAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacAttachment), 685168596U) },
		{ Z_Construct_UClass_UBehaviacPrecondition, UBehaviacPrecondition::StaticClass, TEXT("UBehaviacPrecondition"), &Z_Registration_Info_UClass_UBehaviacPrecondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacPrecondition), 4235345201U) },
		{ Z_Construct_UClass_UBehaviacEffector, UBehaviacEffector::StaticClass, TEXT("UBehaviacEffector"), &Z_Registration_Info_UClass_UBehaviacEffector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacEffector), 899466980U) },
		{ Z_Construct_UClass_UBehaviacEventAttachment, UBehaviacEventAttachment::StaticClass, TEXT("UBehaviacEventAttachment"), &Z_Registration_Info_UClass_UBehaviacEventAttachment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacEventAttachment), 3944333031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_Attachments_BehaviacAttachment_h_1463865941(TEXT("/Script/BehaviacRuntime"),
	Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_Attachments_BehaviacAttachment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_Attachments_BehaviacAttachment_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
