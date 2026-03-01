// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviacRuntime/Public/BehaviorTree/Actions/BehaviacActions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviacActions() {}

// Begin Cross Module References
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacAction();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacAction_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacActionTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacActionTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacAssignment();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacAssignment_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacAssignmentTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacAssignmentTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorNode();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacCompute();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacCompute_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacComputeTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacComputeTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacEnd();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacEnd_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacEndTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacEndTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacLeafTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacNoop();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacNoop_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacNoopTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacNoopTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWait();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWait_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWaitForSignal();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWaitForSignal_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWaitForSignalTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWaitForSignalTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWaitFrames();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWaitFrames_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWaitFramesTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWaitFramesTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWaitTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWaitTask_NoRegister();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus();
UPackage* Z_Construct_UPackage__Script_BehaviacRuntime();
// End Cross Module References

// Begin Class UBehaviacAction
void UBehaviacAction::StaticRegisterNativesUBehaviacAction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacAction);
UClass* Z_Construct_UClass_UBehaviacAction_NoRegister()
{
	return UBehaviacAction::StaticClass();
}
struct Z_Construct_UClass_UBehaviacAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Action: calls a method on the agent. The most common leaf node.\n */" },
#endif
		{ "DisplayName", "Action" },
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action: calls a method on the agent. The most common leaf node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MethodName_MetaData[] = {
		{ "Category", "Behaviac|Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The method name to call on the agent */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The method name to call on the agent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultOption_MetaData[] = {
		{ "Category", "Behaviac|Action" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Result status when method is called */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Result status when method is called" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MethodName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ResultOption_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ResultOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacAction_Statics::NewProp_MethodName = { "MethodName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAction, MethodName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MethodName_MetaData), NewProp_MethodName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBehaviacAction_Statics::NewProp_ResultOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBehaviacAction_Statics::NewProp_ResultOption = { "ResultOption", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAction, ResultOption), Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultOption_MetaData), NewProp_ResultOption_MetaData) }; // 4195475470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAction_Statics::NewProp_MethodName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAction_Statics::NewProp_ResultOption_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAction_Statics::NewProp_ResultOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacAction_Statics::ClassParams = {
	&UBehaviacAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAction_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacAction()
{
	if (!Z_Registration_Info_UClass_UBehaviacAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacAction.OuterSingleton, Z_Construct_UClass_UBehaviacAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacAction.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacAction>()
{
	return UBehaviacAction::StaticClass();
}
UBehaviacAction::UBehaviacAction() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacAction);
UBehaviacAction::~UBehaviacAction() {}
// End Class UBehaviacAction

// Begin Class UBehaviacActionTask
void UBehaviacActionTask::StaticRegisterNativesUBehaviacActionTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacActionTask);
UClass* Z_Construct_UClass_UBehaviacActionTask_NoRegister()
{
	return UBehaviacActionTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacActionTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacActionTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacActionTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacLeafTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacActionTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacActionTask_Statics::ClassParams = {
	&UBehaviacActionTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacActionTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacActionTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacActionTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacActionTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacActionTask.OuterSingleton, Z_Construct_UClass_UBehaviacActionTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacActionTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacActionTask>()
{
	return UBehaviacActionTask::StaticClass();
}
UBehaviacActionTask::UBehaviacActionTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacActionTask);
UBehaviacActionTask::~UBehaviacActionTask() {}
// End Class UBehaviacActionTask

// Begin Class UBehaviacAssignment
void UBehaviacAssignment::StaticRegisterNativesUBehaviacAssignment()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacAssignment);
UClass* Z_Construct_UClass_UBehaviacAssignment_NoRegister()
{
	return UBehaviacAssignment::StaticClass();
}
struct Z_Construct_UClass_UBehaviacAssignment_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Assignment: sets a property value on the agent.\n */" },
#endif
		{ "DisplayName", "Assignment" },
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assignment: sets a property value on the agent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "Category", "Behaviac|Assignment" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValue_MetaData[] = {
		{ "Category", "Behaviac|Assignment" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastFromRight_MetaData[] = {
		{ "Category", "Behaviac|Assignment" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyValue;
	static void NewProp_bCastFromRight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastFromRight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacAssignment>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacAssignment_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAssignment, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacAssignment_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAssignment, PropertyValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyValue_MetaData), NewProp_PropertyValue_MetaData) };
void Z_Construct_UClass_UBehaviacAssignment_Statics::NewProp_bCastFromRight_SetBit(void* Obj)
{
	((UBehaviacAssignment*)Obj)->bCastFromRight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviacAssignment_Statics::NewProp_bCastFromRight = { "bCastFromRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBehaviacAssignment), &Z_Construct_UClass_UBehaviacAssignment_Statics::NewProp_bCastFromRight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastFromRight_MetaData), NewProp_bCastFromRight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacAssignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAssignment_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAssignment_Statics::NewProp_PropertyValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAssignment_Statics::NewProp_bCastFromRight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAssignment_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacAssignment_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAssignment_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacAssignment_Statics::ClassParams = {
	&UBehaviacAssignment::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacAssignment_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAssignment_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAssignment_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacAssignment_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacAssignment()
{
	if (!Z_Registration_Info_UClass_UBehaviacAssignment.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacAssignment.OuterSingleton, Z_Construct_UClass_UBehaviacAssignment_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacAssignment.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacAssignment>()
{
	return UBehaviacAssignment::StaticClass();
}
UBehaviacAssignment::UBehaviacAssignment() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacAssignment);
UBehaviacAssignment::~UBehaviacAssignment() {}
// End Class UBehaviacAssignment

// Begin Class UBehaviacAssignmentTask
void UBehaviacAssignmentTask::StaticRegisterNativesUBehaviacAssignmentTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacAssignmentTask);
UClass* Z_Construct_UClass_UBehaviacAssignmentTask_NoRegister()
{
	return UBehaviacAssignmentTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacAssignmentTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacAssignmentTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacAssignmentTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacLeafTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAssignmentTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacAssignmentTask_Statics::ClassParams = {
	&UBehaviacAssignmentTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAssignmentTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacAssignmentTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacAssignmentTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacAssignmentTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacAssignmentTask.OuterSingleton, Z_Construct_UClass_UBehaviacAssignmentTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacAssignmentTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacAssignmentTask>()
{
	return UBehaviacAssignmentTask::StaticClass();
}
UBehaviacAssignmentTask::UBehaviacAssignmentTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacAssignmentTask);
UBehaviacAssignmentTask::~UBehaviacAssignmentTask() {}
// End Class UBehaviacAssignmentTask

// Begin Class UBehaviacCompute
void UBehaviacCompute::StaticRegisterNativesUBehaviacCompute()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacCompute);
UClass* Z_Construct_UClass_UBehaviacCompute_NoRegister()
{
	return UBehaviacCompute::StaticClass();
}
struct Z_Construct_UClass_UBehaviacCompute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Compute: performs an arithmetic operation and stores the result.\n */" },
#endif
		{ "DisplayName", "Compute" },
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compute: performs an arithmetic operation and stores the result." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultProperty_MetaData[] = {
		{ "Category", "Behaviac|Compute" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftOperand_MetaData[] = {
		{ "Category", "Behaviac|Compute" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightOperand_MetaData[] = {
		{ "Category", "Behaviac|Compute" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[] = {
		{ "Category", "Behaviac|Compute" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResultProperty;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LeftOperand;
	static const UECodeGen_Private::FStrPropertyParams NewProp_RightOperand;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Operator_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Operator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacCompute>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacCompute_Statics::NewProp_ResultProperty = { "ResultProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacCompute, ResultProperty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultProperty_MetaData), NewProp_ResultProperty_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacCompute_Statics::NewProp_LeftOperand = { "LeftOperand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacCompute, LeftOperand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftOperand_MetaData), NewProp_LeftOperand_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacCompute_Statics::NewProp_RightOperand = { "RightOperand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacCompute, RightOperand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightOperand_MetaData), NewProp_RightOperand_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBehaviacCompute_Statics::NewProp_Operator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBehaviacCompute_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacCompute, Operator), Z_Construct_UEnum_BehaviacRuntime_EBehaviacOperatorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Operator_MetaData), NewProp_Operator_MetaData) }; // 2665105269
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacCompute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacCompute_Statics::NewProp_ResultProperty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacCompute_Statics::NewProp_LeftOperand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacCompute_Statics::NewProp_RightOperand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacCompute_Statics::NewProp_Operator_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacCompute_Statics::NewProp_Operator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacCompute_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacCompute_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacCompute_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacCompute_Statics::ClassParams = {
	&UBehaviacCompute::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacCompute_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacCompute_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacCompute_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacCompute_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacCompute()
{
	if (!Z_Registration_Info_UClass_UBehaviacCompute.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacCompute.OuterSingleton, Z_Construct_UClass_UBehaviacCompute_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacCompute.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacCompute>()
{
	return UBehaviacCompute::StaticClass();
}
UBehaviacCompute::UBehaviacCompute() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacCompute);
UBehaviacCompute::~UBehaviacCompute() {}
// End Class UBehaviacCompute

// Begin Class UBehaviacComputeTask
void UBehaviacComputeTask::StaticRegisterNativesUBehaviacComputeTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacComputeTask);
UClass* Z_Construct_UClass_UBehaviacComputeTask_NoRegister()
{
	return UBehaviacComputeTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacComputeTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacComputeTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacComputeTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacLeafTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacComputeTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacComputeTask_Statics::ClassParams = {
	&UBehaviacComputeTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacComputeTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacComputeTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacComputeTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacComputeTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacComputeTask.OuterSingleton, Z_Construct_UClass_UBehaviacComputeTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacComputeTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacComputeTask>()
{
	return UBehaviacComputeTask::StaticClass();
}
UBehaviacComputeTask::UBehaviacComputeTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacComputeTask);
UBehaviacComputeTask::~UBehaviacComputeTask() {}
// End Class UBehaviacComputeTask

// Begin Class UBehaviacNoop
void UBehaviacNoop::StaticRegisterNativesUBehaviacNoop()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacNoop);
UClass* Z_Construct_UClass_UBehaviacNoop_NoRegister()
{
	return UBehaviacNoop::StaticClass();
}
struct Z_Construct_UClass_UBehaviacNoop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Noop: does nothing, always succeeds. Useful as a placeholder.\n */" },
#endif
		{ "DisplayName", "Noop" },
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Noop: does nothing, always succeeds. Useful as a placeholder." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacNoop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacNoop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacNoop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacNoop_Statics::ClassParams = {
	&UBehaviacNoop::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacNoop_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacNoop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacNoop()
{
	if (!Z_Registration_Info_UClass_UBehaviacNoop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacNoop.OuterSingleton, Z_Construct_UClass_UBehaviacNoop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacNoop.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacNoop>()
{
	return UBehaviacNoop::StaticClass();
}
UBehaviacNoop::UBehaviacNoop() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacNoop);
UBehaviacNoop::~UBehaviacNoop() {}
// End Class UBehaviacNoop

// Begin Class UBehaviacNoopTask
void UBehaviacNoopTask::StaticRegisterNativesUBehaviacNoopTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacNoopTask);
UClass* Z_Construct_UClass_UBehaviacNoopTask_NoRegister()
{
	return UBehaviacNoopTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacNoopTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacNoopTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacNoopTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacLeafTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacNoopTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacNoopTask_Statics::ClassParams = {
	&UBehaviacNoopTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacNoopTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacNoopTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacNoopTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacNoopTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacNoopTask.OuterSingleton, Z_Construct_UClass_UBehaviacNoopTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacNoopTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacNoopTask>()
{
	return UBehaviacNoopTask::StaticClass();
}
UBehaviacNoopTask::UBehaviacNoopTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacNoopTask);
UBehaviacNoopTask::~UBehaviacNoopTask() {}
// End Class UBehaviacNoopTask

// Begin Class UBehaviacEnd
void UBehaviacEnd::StaticRegisterNativesUBehaviacEnd()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacEnd);
UClass* Z_Construct_UClass_UBehaviacEnd_NoRegister()
{
	return UBehaviacEnd::StaticClass();
}
struct Z_Construct_UClass_UBehaviacEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * End: terminates the behavior tree with a specific status.\n */" },
#endif
		{ "DisplayName", "End" },
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "End: terminates the behavior tree with a specific status." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndStatus_MetaData[] = {
		{ "Category", "Behaviac|End" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEndOutermost_MetaData[] = {
		{ "Category", "Behaviac|End" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EndStatus;
	static void NewProp_bEndOutermost_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndOutermost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacEnd>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBehaviacEnd_Statics::NewProp_EndStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBehaviacEnd_Statics::NewProp_EndStatus = { "EndStatus", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacEnd, EndStatus), Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndStatus_MetaData), NewProp_EndStatus_MetaData) }; // 4195475470
void Z_Construct_UClass_UBehaviacEnd_Statics::NewProp_bEndOutermost_SetBit(void* Obj)
{
	((UBehaviacEnd*)Obj)->bEndOutermost = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviacEnd_Statics::NewProp_bEndOutermost = { "bEndOutermost", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBehaviacEnd), &Z_Construct_UClass_UBehaviacEnd_Statics::NewProp_bEndOutermost_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEndOutermost_MetaData), NewProp_bEndOutermost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacEnd_Statics::NewProp_EndStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacEnd_Statics::NewProp_EndStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacEnd_Statics::NewProp_bEndOutermost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEnd_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacEnd_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEnd_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacEnd_Statics::ClassParams = {
	&UBehaviacEnd::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacEnd_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEnd_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEnd_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacEnd_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacEnd()
{
	if (!Z_Registration_Info_UClass_UBehaviacEnd.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacEnd.OuterSingleton, Z_Construct_UClass_UBehaviacEnd_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacEnd.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacEnd>()
{
	return UBehaviacEnd::StaticClass();
}
UBehaviacEnd::UBehaviacEnd() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacEnd);
UBehaviacEnd::~UBehaviacEnd() {}
// End Class UBehaviacEnd

// Begin Class UBehaviacEndTask
void UBehaviacEndTask::StaticRegisterNativesUBehaviacEndTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacEndTask);
UClass* Z_Construct_UClass_UBehaviacEndTask_NoRegister()
{
	return UBehaviacEndTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacEndTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacEndTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacEndTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacLeafTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEndTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacEndTask_Statics::ClassParams = {
	&UBehaviacEndTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacEndTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacEndTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacEndTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacEndTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacEndTask.OuterSingleton, Z_Construct_UClass_UBehaviacEndTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacEndTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacEndTask>()
{
	return UBehaviacEndTask::StaticClass();
}
UBehaviacEndTask::UBehaviacEndTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacEndTask);
UBehaviacEndTask::~UBehaviacEndTask() {}
// End Class UBehaviacEndTask

// Begin Class UBehaviacWait
void UBehaviacWait::StaticRegisterNativesUBehaviacWait()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacWait);
UClass* Z_Construct_UClass_UBehaviacWait_NoRegister()
{
	return UBehaviacWait::StaticClass();
}
struct Z_Construct_UClass_UBehaviacWait_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wait: returns Running for a specified duration (seconds), then succeeds.\n */" },
#endif
		{ "DisplayName", "Wait" },
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wait: returns Running for a specified duration (seconds), then succeeds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Behaviac|Wait" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacWait>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBehaviacWait_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacWait, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacWait_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacWait_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWait_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacWait_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWait_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacWait_Statics::ClassParams = {
	&UBehaviacWait::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacWait_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWait_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWait_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacWait_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacWait()
{
	if (!Z_Registration_Info_UClass_UBehaviacWait.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacWait.OuterSingleton, Z_Construct_UClass_UBehaviacWait_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacWait.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacWait>()
{
	return UBehaviacWait::StaticClass();
}
UBehaviacWait::UBehaviacWait() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacWait);
UBehaviacWait::~UBehaviacWait() {}
// End Class UBehaviacWait

// Begin Class UBehaviacWaitTask
void UBehaviacWaitTask::StaticRegisterNativesUBehaviacWaitTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacWaitTask);
UClass* Z_Construct_UClass_UBehaviacWaitTask_NoRegister()
{
	return UBehaviacWaitTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacWaitTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacWaitTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacWaitTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacLeafTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacWaitTask_Statics::ClassParams = {
	&UBehaviacWaitTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacWaitTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacWaitTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacWaitTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacWaitTask.OuterSingleton, Z_Construct_UClass_UBehaviacWaitTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacWaitTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacWaitTask>()
{
	return UBehaviacWaitTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacWaitTask);
UBehaviacWaitTask::~UBehaviacWaitTask() {}
// End Class UBehaviacWaitTask

// Begin Class UBehaviacWaitFrames
void UBehaviacWaitFrames::StaticRegisterNativesUBehaviacWaitFrames()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacWaitFrames);
UClass* Z_Construct_UClass_UBehaviacWaitFrames_NoRegister()
{
	return UBehaviacWaitFrames::StaticClass();
}
struct Z_Construct_UClass_UBehaviacWaitFrames_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * WaitFrames: returns Running for a specified number of frames, then succeeds.\n */" },
#endif
		{ "DisplayName", "WaitFrames" },
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WaitFrames: returns Running for a specified number of frames, then succeeds." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameCount_MetaData[] = {
		{ "Category", "Behaviac|WaitFrames" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacWaitFrames>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBehaviacWaitFrames_Statics::NewProp_FrameCount = { "FrameCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacWaitFrames, FrameCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameCount_MetaData), NewProp_FrameCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacWaitFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacWaitFrames_Statics::NewProp_FrameCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitFrames_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacWaitFrames_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitFrames_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacWaitFrames_Statics::ClassParams = {
	&UBehaviacWaitFrames::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacWaitFrames_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitFrames_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitFrames_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacWaitFrames_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacWaitFrames()
{
	if (!Z_Registration_Info_UClass_UBehaviacWaitFrames.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacWaitFrames.OuterSingleton, Z_Construct_UClass_UBehaviacWaitFrames_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacWaitFrames.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacWaitFrames>()
{
	return UBehaviacWaitFrames::StaticClass();
}
UBehaviacWaitFrames::UBehaviacWaitFrames() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacWaitFrames);
UBehaviacWaitFrames::~UBehaviacWaitFrames() {}
// End Class UBehaviacWaitFrames

// Begin Class UBehaviacWaitFramesTask
void UBehaviacWaitFramesTask::StaticRegisterNativesUBehaviacWaitFramesTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacWaitFramesTask);
UClass* Z_Construct_UClass_UBehaviacWaitFramesTask_NoRegister()
{
	return UBehaviacWaitFramesTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacWaitFramesTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacWaitFramesTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacWaitFramesTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacLeafTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitFramesTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacWaitFramesTask_Statics::ClassParams = {
	&UBehaviacWaitFramesTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitFramesTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacWaitFramesTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacWaitFramesTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacWaitFramesTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacWaitFramesTask.OuterSingleton, Z_Construct_UClass_UBehaviacWaitFramesTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacWaitFramesTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacWaitFramesTask>()
{
	return UBehaviacWaitFramesTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacWaitFramesTask);
UBehaviacWaitFramesTask::~UBehaviacWaitFramesTask() {}
// End Class UBehaviacWaitFramesTask

// Begin Class UBehaviacWaitForSignal
void UBehaviacWaitForSignal::StaticRegisterNativesUBehaviacWaitForSignal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacWaitForSignal);
UClass* Z_Construct_UClass_UBehaviacWaitForSignal_NoRegister()
{
	return UBehaviacWaitForSignal::StaticClass();
}
struct Z_Construct_UClass_UBehaviacWaitForSignal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * WaitForSignal: returns Running until a named signal is received.\n */" },
#endif
		{ "DisplayName", "WaitForSignal" },
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WaitForSignal: returns Running until a named signal is received." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignalName_MetaData[] = {
		{ "Category", "Behaviac|WaitForSignal" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SignalName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacWaitForSignal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacWaitForSignal_Statics::NewProp_SignalName = { "SignalName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacWaitForSignal, SignalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignalName_MetaData), NewProp_SignalName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacWaitForSignal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacWaitForSignal_Statics::NewProp_SignalName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitForSignal_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacWaitForSignal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitForSignal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacWaitForSignal_Statics::ClassParams = {
	&UBehaviacWaitForSignal::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacWaitForSignal_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitForSignal_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitForSignal_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacWaitForSignal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacWaitForSignal()
{
	if (!Z_Registration_Info_UClass_UBehaviacWaitForSignal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacWaitForSignal.OuterSingleton, Z_Construct_UClass_UBehaviacWaitForSignal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacWaitForSignal.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacWaitForSignal>()
{
	return UBehaviacWaitForSignal::StaticClass();
}
UBehaviacWaitForSignal::UBehaviacWaitForSignal() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacWaitForSignal);
UBehaviacWaitForSignal::~UBehaviacWaitForSignal() {}
// End Class UBehaviacWaitForSignal

// Begin Class UBehaviacWaitForSignalTask
void UBehaviacWaitForSignalTask::StaticRegisterNativesUBehaviacWaitForSignalTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacWaitForSignalTask);
UClass* Z_Construct_UClass_UBehaviacWaitForSignalTask_NoRegister()
{
	return UBehaviacWaitForSignalTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacWaitForSignalTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Actions/BehaviacActions.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Actions/BehaviacActions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacWaitForSignalTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacWaitForSignalTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacLeafTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitForSignalTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacWaitForSignalTask_Statics::ClassParams = {
	&UBehaviacWaitForSignalTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWaitForSignalTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacWaitForSignalTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacWaitForSignalTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacWaitForSignalTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacWaitForSignalTask.OuterSingleton, Z_Construct_UClass_UBehaviacWaitForSignalTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacWaitForSignalTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacWaitForSignalTask>()
{
	return UBehaviacWaitForSignalTask::StaticClass();
}
UBehaviacWaitForSignalTask::UBehaviacWaitForSignalTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacWaitForSignalTask);
UBehaviacWaitForSignalTask::~UBehaviacWaitForSignalTask() {}
// End Class UBehaviacWaitForSignalTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_Actions_BehaviacActions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviacAction, UBehaviacAction::StaticClass, TEXT("UBehaviacAction"), &Z_Registration_Info_UClass_UBehaviacAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacAction), 4049340470U) },
		{ Z_Construct_UClass_UBehaviacActionTask, UBehaviacActionTask::StaticClass, TEXT("UBehaviacActionTask"), &Z_Registration_Info_UClass_UBehaviacActionTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacActionTask), 2035143532U) },
		{ Z_Construct_UClass_UBehaviacAssignment, UBehaviacAssignment::StaticClass, TEXT("UBehaviacAssignment"), &Z_Registration_Info_UClass_UBehaviacAssignment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacAssignment), 154162611U) },
		{ Z_Construct_UClass_UBehaviacAssignmentTask, UBehaviacAssignmentTask::StaticClass, TEXT("UBehaviacAssignmentTask"), &Z_Registration_Info_UClass_UBehaviacAssignmentTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacAssignmentTask), 3904692718U) },
		{ Z_Construct_UClass_UBehaviacCompute, UBehaviacCompute::StaticClass, TEXT("UBehaviacCompute"), &Z_Registration_Info_UClass_UBehaviacCompute, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacCompute), 1136784131U) },
		{ Z_Construct_UClass_UBehaviacComputeTask, UBehaviacComputeTask::StaticClass, TEXT("UBehaviacComputeTask"), &Z_Registration_Info_UClass_UBehaviacComputeTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacComputeTask), 2551951670U) },
		{ Z_Construct_UClass_UBehaviacNoop, UBehaviacNoop::StaticClass, TEXT("UBehaviacNoop"), &Z_Registration_Info_UClass_UBehaviacNoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacNoop), 3184889502U) },
		{ Z_Construct_UClass_UBehaviacNoopTask, UBehaviacNoopTask::StaticClass, TEXT("UBehaviacNoopTask"), &Z_Registration_Info_UClass_UBehaviacNoopTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacNoopTask), 1927472548U) },
		{ Z_Construct_UClass_UBehaviacEnd, UBehaviacEnd::StaticClass, TEXT("UBehaviacEnd"), &Z_Registration_Info_UClass_UBehaviacEnd, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacEnd), 553473942U) },
		{ Z_Construct_UClass_UBehaviacEndTask, UBehaviacEndTask::StaticClass, TEXT("UBehaviacEndTask"), &Z_Registration_Info_UClass_UBehaviacEndTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacEndTask), 148354179U) },
		{ Z_Construct_UClass_UBehaviacWait, UBehaviacWait::StaticClass, TEXT("UBehaviacWait"), &Z_Registration_Info_UClass_UBehaviacWait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacWait), 3696554257U) },
		{ Z_Construct_UClass_UBehaviacWaitTask, UBehaviacWaitTask::StaticClass, TEXT("UBehaviacWaitTask"), &Z_Registration_Info_UClass_UBehaviacWaitTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacWaitTask), 3835418253U) },
		{ Z_Construct_UClass_UBehaviacWaitFrames, UBehaviacWaitFrames::StaticClass, TEXT("UBehaviacWaitFrames"), &Z_Registration_Info_UClass_UBehaviacWaitFrames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacWaitFrames), 868496088U) },
		{ Z_Construct_UClass_UBehaviacWaitFramesTask, UBehaviacWaitFramesTask::StaticClass, TEXT("UBehaviacWaitFramesTask"), &Z_Registration_Info_UClass_UBehaviacWaitFramesTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacWaitFramesTask), 972714184U) },
		{ Z_Construct_UClass_UBehaviacWaitForSignal, UBehaviacWaitForSignal::StaticClass, TEXT("UBehaviacWaitForSignal"), &Z_Registration_Info_UClass_UBehaviacWaitForSignal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacWaitForSignal), 1784975319U) },
		{ Z_Construct_UClass_UBehaviacWaitForSignalTask, UBehaviacWaitForSignalTask::StaticClass, TEXT("UBehaviacWaitForSignalTask"), &Z_Registration_Info_UClass_UBehaviacWaitForSignalTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacWaitForSignalTask), 180394820U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_Actions_BehaviacActions_h_1046850811(TEXT("/Script/BehaviacRuntime"),
	Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_Actions_BehaviacActions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_Actions_BehaviacActions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
