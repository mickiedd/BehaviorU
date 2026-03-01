// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviacRuntime/Public/BehaviorTree/BehaviacBehaviorTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviacBehaviorTask() {}

// Begin Cross Module References
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorNode_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorTreeTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorTreeTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacCompositeTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacCompositeTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacLeafTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacLeafTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSingleChildTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSingleChildTask_NoRegister();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BehaviacRuntime();
// End Cross Module References

// Begin Class UBehaviacBehaviorTask Function GetNode
struct Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics
{
	struct BehaviacBehaviorTask_eventGetNode_Parms
	{
		UBehaviacBehaviorNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Task" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the node definition this task is running */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the node definition this task is running" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacBehaviorTask_eventGetNode_Parms, ReturnValue), Z_Construct_UClass_UBehaviacBehaviorNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacBehaviorTask, nullptr, "GetNode", nullptr, nullptr, Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics::BehaviacBehaviorTask_eventGetNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics::BehaviacBehaviorTask_eventGetNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacBehaviorTask::execGetNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBehaviacBehaviorNode**)Z_Param__Result=P_THIS->GetNode();
	P_NATIVE_END;
}
// End Class UBehaviacBehaviorTask Function GetNode

// Begin Class UBehaviacBehaviorTask Function GetStatus
struct Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics
{
	struct BehaviacBehaviorTask_eventGetStatus_Parms
	{
		EBehaviacStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Task" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the current status */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current status" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacBehaviorTask_eventGetStatus_Parms, ReturnValue), Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus, METADATA_PARAMS(0, nullptr) }; // 4195475470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacBehaviorTask, nullptr, "GetStatus", nullptr, nullptr, Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::BehaviacBehaviorTask_eventGetStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::BehaviacBehaviorTask_eventGetStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacBehaviorTask::execGetStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EBehaviacStatus*)Z_Param__Result=P_THIS->GetStatus();
	P_NATIVE_END;
}
// End Class UBehaviacBehaviorTask Function GetStatus

// Begin Class UBehaviacBehaviorTask
void UBehaviacBehaviorTask::StaticRegisterNativesUBehaviacBehaviorTask()
{
	UClass* Class = UBehaviacBehaviorTask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNode", &UBehaviacBehaviorTask::execGetNode },
		{ "GetStatus", &UBehaviacBehaviorTask::execGetStatus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacBehaviorTask);
UClass* Z_Construct_UClass_UBehaviacBehaviorTask_NoRegister()
{
	return UBehaviacBehaviorTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacBehaviorTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for behavior task instances (runtime state of a behavior node).\n *\n * Mirrors the original behaviac BehaviorTask. Each task holds the runtime\n * execution state for one node instance. The node definition is in\n * UBehaviacBehaviorNode; the task is the live execution context.\n */" },
#endif
		{ "IncludePath", "BehaviorTree/BehaviacBehaviorTask.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for behavior task instances (runtime state of a behavior node).\n\nMirrors the original behaviac BehaviorTask. Each task holds the runtime\nexecution state for one node instance. The node definition is in\nUBehaviacBehaviorNode; the task is the live execution context." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The node definition */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The node definition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current status */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current status" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentTask_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Parent task */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent task" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Status_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Status;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviacBehaviorTask_GetNode, "GetNode" }, // 2636440657
		{ &Z_Construct_UFunction_UBehaviacBehaviorTask_GetStatus, "GetStatus" }, // 18800387
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacBehaviorTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacBehaviorTask_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorTask, Node), Z_Construct_UClass_UBehaviacBehaviorNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBehaviacBehaviorTask_Statics::NewProp_Status_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBehaviacBehaviorTask_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorTask, Status), Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Status_MetaData), NewProp_Status_MetaData) }; // 4195475470
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacBehaviorTask_Statics::NewProp_ParentTask = { "ParentTask", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorTask, ParentTask), Z_Construct_UClass_UBehaviacBehaviorTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentTask_MetaData), NewProp_ParentTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacBehaviorTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorTask_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorTask_Statics::NewProp_Status_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorTask_Statics::NewProp_Status,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorTask_Statics::NewProp_ParentTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacBehaviorTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacBehaviorTask_Statics::ClassParams = {
	&UBehaviacBehaviorTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBehaviacBehaviorTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTask_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacBehaviorTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacBehaviorTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacBehaviorTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacBehaviorTask.OuterSingleton, Z_Construct_UClass_UBehaviacBehaviorTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacBehaviorTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacBehaviorTask>()
{
	return UBehaviacBehaviorTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacBehaviorTask);
UBehaviacBehaviorTask::~UBehaviacBehaviorTask() {}
// End Class UBehaviacBehaviorTask

// Begin Class UBehaviacCompositeTask
void UBehaviacCompositeTask::StaticRegisterNativesUBehaviacCompositeTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacCompositeTask);
UClass* Z_Construct_UClass_UBehaviacCompositeTask_NoRegister()
{
	return UBehaviacCompositeTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacCompositeTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------------------------------------------------------------------\n// Composite Task: Base for nodes that manage multiple children\n// -------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "BehaviorTree/BehaviacBehaviorTask.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Composite Task: Base for nodes that manage multiple children" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveChildIndex_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Index of the currently active child */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of the currently active child" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildTasks_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Child task instances */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Child task instances" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveChildIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildTasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildTasks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacCompositeTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBehaviacCompositeTask_Statics::NewProp_ActiveChildIndex = { "ActiveChildIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacCompositeTask, ActiveChildIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveChildIndex_MetaData), NewProp_ActiveChildIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacCompositeTask_Statics::NewProp_ChildTasks_Inner = { "ChildTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBehaviacBehaviorTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviacCompositeTask_Statics::NewProp_ChildTasks = { "ChildTasks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacCompositeTask, ChildTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildTasks_MetaData), NewProp_ChildTasks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacCompositeTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacCompositeTask_Statics::NewProp_ActiveChildIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacCompositeTask_Statics::NewProp_ChildTasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacCompositeTask_Statics::NewProp_ChildTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacCompositeTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacCompositeTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacCompositeTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacCompositeTask_Statics::ClassParams = {
	&UBehaviacCompositeTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacCompositeTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacCompositeTask_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacCompositeTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacCompositeTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacCompositeTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacCompositeTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacCompositeTask.OuterSingleton, Z_Construct_UClass_UBehaviacCompositeTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacCompositeTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacCompositeTask>()
{
	return UBehaviacCompositeTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacCompositeTask);
UBehaviacCompositeTask::~UBehaviacCompositeTask() {}
// End Class UBehaviacCompositeTask

// Begin Class UBehaviacSingleChildTask
void UBehaviacSingleChildTask::StaticRegisterNativesUBehaviacSingleChildTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSingleChildTask);
UClass* Z_Construct_UClass_UBehaviacSingleChildTask_NoRegister()
{
	return UBehaviacSingleChildTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSingleChildTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------------------------------------------------------------------\n// Single Child Task: Base for nodes with exactly one child (decorators)\n// -------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "BehaviorTree/BehaviacBehaviorTask.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Single Child Task: Base for nodes with exactly one child (decorators)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildTask_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The single child task */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The single child task" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSingleChildTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacSingleChildTask_Statics::NewProp_ChildTask = { "ChildTask", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacSingleChildTask, ChildTask), Z_Construct_UClass_UBehaviacBehaviorTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildTask_MetaData), NewProp_ChildTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacSingleChildTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacSingleChildTask_Statics::NewProp_ChildTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSingleChildTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacSingleChildTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSingleChildTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSingleChildTask_Statics::ClassParams = {
	&UBehaviacSingleChildTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacSingleChildTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSingleChildTask_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSingleChildTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSingleChildTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSingleChildTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacSingleChildTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSingleChildTask.OuterSingleton, Z_Construct_UClass_UBehaviacSingleChildTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSingleChildTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSingleChildTask>()
{
	return UBehaviacSingleChildTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSingleChildTask);
UBehaviacSingleChildTask::~UBehaviacSingleChildTask() {}
// End Class UBehaviacSingleChildTask

// Begin Class UBehaviacLeafTask
void UBehaviacLeafTask::StaticRegisterNativesUBehaviacLeafTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacLeafTask);
UClass* Z_Construct_UClass_UBehaviacLeafTask_NoRegister()
{
	return UBehaviacLeafTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacLeafTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------------------------------------------------------------------\n// Leaf Task: Base for nodes with no children (actions, conditions)\n// -------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "BehaviorTree/BehaviacBehaviorTask.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Leaf Task: Base for nodes with no children (actions, conditions)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacLeafTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacLeafTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacLeafTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacLeafTask_Statics::ClassParams = {
	&UBehaviacLeafTask::StaticClass,
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
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacLeafTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacLeafTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacLeafTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacLeafTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacLeafTask.OuterSingleton, Z_Construct_UClass_UBehaviacLeafTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacLeafTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacLeafTask>()
{
	return UBehaviacLeafTask::StaticClass();
}
UBehaviacLeafTask::UBehaviacLeafTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacLeafTask);
UBehaviacLeafTask::~UBehaviacLeafTask() {}
// End Class UBehaviacLeafTask

// Begin Class UBehaviacBehaviorTreeTask Function GetTreeStatus
struct Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics
{
	struct BehaviacBehaviorTreeTask_eventGetTreeStatus_Parms
	{
		EBehaviacStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|BehaviorTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the tree-level status */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the tree-level status" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacBehaviorTreeTask_eventGetTreeStatus_Parms, ReturnValue), Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus, METADATA_PARAMS(0, nullptr) }; // 4195475470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacBehaviorTreeTask, nullptr, "GetTreeStatus", nullptr, nullptr, Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::BehaviacBehaviorTreeTask_eventGetTreeStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::BehaviacBehaviorTreeTask_eventGetTreeStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacBehaviorTreeTask::execGetTreeStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EBehaviacStatus*)Z_Param__Result=P_THIS->GetTreeStatus();
	P_NATIVE_END;
}
// End Class UBehaviacBehaviorTreeTask Function GetTreeStatus

// Begin Class UBehaviacBehaviorTreeTask
void UBehaviacBehaviorTreeTask::StaticRegisterNativesUBehaviacBehaviorTreeTask()
{
	UClass* Class = UBehaviacBehaviorTreeTask::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTreeStatus", &UBehaviacBehaviorTreeTask::execGetTreeStatus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacBehaviorTreeTask);
UClass* Z_Construct_UClass_UBehaviacBehaviorTreeTask_NoRegister()
{
	return UBehaviacBehaviorTreeTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacBehaviorTreeTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// -------------------------------------------------------------------\n// BehaviorTree Task: Root-level task wrapping the entire tree\n// -------------------------------------------------------------------\n" },
#endif
		{ "IncludePath", "BehaviorTree/BehaviacBehaviorTask.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTask.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BehaviorTree Task: Root-level task wrapping the entire tree" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviacBehaviorTreeTask_GetTreeStatus, "GetTreeStatus" }, // 2801125674
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacBehaviorTreeTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacBehaviorTreeTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacSingleChildTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTreeTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacBehaviorTreeTask_Statics::ClassParams = {
	&UBehaviacBehaviorTreeTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTreeTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacBehaviorTreeTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacBehaviorTreeTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacBehaviorTreeTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacBehaviorTreeTask.OuterSingleton, Z_Construct_UClass_UBehaviacBehaviorTreeTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacBehaviorTreeTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacBehaviorTreeTask>()
{
	return UBehaviacBehaviorTreeTask::StaticClass();
}
UBehaviacBehaviorTreeTask::UBehaviacBehaviorTreeTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacBehaviorTreeTask);
UBehaviacBehaviorTreeTask::~UBehaviacBehaviorTreeTask() {}
// End Class UBehaviacBehaviorTreeTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviacBehaviorTask, UBehaviacBehaviorTask::StaticClass, TEXT("UBehaviacBehaviorTask"), &Z_Registration_Info_UClass_UBehaviacBehaviorTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacBehaviorTask), 4171058892U) },
		{ Z_Construct_UClass_UBehaviacCompositeTask, UBehaviacCompositeTask::StaticClass, TEXT("UBehaviacCompositeTask"), &Z_Registration_Info_UClass_UBehaviacCompositeTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacCompositeTask), 3632221186U) },
		{ Z_Construct_UClass_UBehaviacSingleChildTask, UBehaviacSingleChildTask::StaticClass, TEXT("UBehaviacSingleChildTask"), &Z_Registration_Info_UClass_UBehaviacSingleChildTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSingleChildTask), 194885457U) },
		{ Z_Construct_UClass_UBehaviacLeafTask, UBehaviacLeafTask::StaticClass, TEXT("UBehaviacLeafTask"), &Z_Registration_Info_UClass_UBehaviacLeafTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacLeafTask), 3831170004U) },
		{ Z_Construct_UClass_UBehaviacBehaviorTreeTask, UBehaviacBehaviorTreeTask::StaticClass, TEXT("UBehaviacBehaviorTreeTask"), &Z_Registration_Info_UClass_UBehaviacBehaviorTreeTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacBehaviorTreeTask), 2406877890U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_3498736311(TEXT("/Script/BehaviacRuntime"),
	Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
