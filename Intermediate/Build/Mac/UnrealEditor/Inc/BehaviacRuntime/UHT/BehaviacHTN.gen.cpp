// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviacRuntime/Public/HTN/BehaviacHTN.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviacHTN() {}

// Begin Cross Module References
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacAgentComponent_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorNode();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacCompositeTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacHTNMethod();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacHTNMethod_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacHTNMethodTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacHTNMethodTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacHTNPlanner();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacHTNPlanner_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacHTNTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacHTNTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacHTNTaskExecution();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacHTNTaskExecution_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSingleChildTask();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BehaviacRuntime();
// End Cross Module References

// Begin Class UBehaviacHTNTask
void UBehaviacHTNTask::StaticRegisterNativesUBehaviacHTNTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacHTNTask);
UClass* Z_Construct_UClass_UBehaviacHTNTask_NoRegister()
{
	return UBehaviacHTNTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacHTNTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * HTN Task: A primitive task that can be decomposed or executed directly.\n */" },
#endif
		{ "DisplayName", "HTN Task" },
		{ "IncludePath", "HTN/BehaviacHTN.h" },
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HTN Task: A primitive task that can be decomposed or executed directly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPrimitive_MetaData[] = {
		{ "Category", "Behaviac|HTN" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this is a primitive (directly executable) task */" },
#endif
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this is a primitive (directly executable) task" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedTreePath_MetaData[] = {
		{ "Category", "Behaviac|HTN" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Referenced behavior tree path (for compound tasks) */" },
#endif
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referenced behavior tree path (for compound tasks)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsPrimitive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPrimitive;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencedTreePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacHTNTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBehaviacHTNTask_Statics::NewProp_bIsPrimitive_SetBit(void* Obj)
{
	((UBehaviacHTNTask*)Obj)->bIsPrimitive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviacHTNTask_Statics::NewProp_bIsPrimitive = { "bIsPrimitive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBehaviacHTNTask), &Z_Construct_UClass_UBehaviacHTNTask_Statics::NewProp_bIsPrimitive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPrimitive_MetaData), NewProp_bIsPrimitive_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacHTNTask_Statics::NewProp_ReferencedTreePath = { "ReferencedTreePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacHTNTask, ReferencedTreePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedTreePath_MetaData), NewProp_ReferencedTreePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacHTNTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacHTNTask_Statics::NewProp_bIsPrimitive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacHTNTask_Statics::NewProp_ReferencedTreePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacHTNTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacHTNTask_Statics::ClassParams = {
	&UBehaviacHTNTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacHTNTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNTask_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacHTNTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacHTNTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacHTNTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacHTNTask.OuterSingleton, Z_Construct_UClass_UBehaviacHTNTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacHTNTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacHTNTask>()
{
	return UBehaviacHTNTask::StaticClass();
}
UBehaviacHTNTask::UBehaviacHTNTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacHTNTask);
UBehaviacHTNTask::~UBehaviacHTNTask() {}
// End Class UBehaviacHTNTask

// Begin Class UBehaviacHTNTaskExecution
void UBehaviacHTNTaskExecution::StaticRegisterNativesUBehaviacHTNTaskExecution()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacHTNTaskExecution);
UClass* Z_Construct_UClass_UBehaviacHTNTaskExecution_NoRegister()
{
	return UBehaviacHTNTaskExecution::StaticClass();
}
struct Z_Construct_UClass_UBehaviacHTNTaskExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HTN/BehaviacHTN.h" },
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacHTNTaskExecution>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacHTNTaskExecution_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacSingleChildTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNTaskExecution_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacHTNTaskExecution_Statics::ClassParams = {
	&UBehaviacHTNTaskExecution::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNTaskExecution_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacHTNTaskExecution_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacHTNTaskExecution()
{
	if (!Z_Registration_Info_UClass_UBehaviacHTNTaskExecution.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacHTNTaskExecution.OuterSingleton, Z_Construct_UClass_UBehaviacHTNTaskExecution_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacHTNTaskExecution.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacHTNTaskExecution>()
{
	return UBehaviacHTNTaskExecution::StaticClass();
}
UBehaviacHTNTaskExecution::UBehaviacHTNTaskExecution() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacHTNTaskExecution);
UBehaviacHTNTaskExecution::~UBehaviacHTNTaskExecution() {}
// End Class UBehaviacHTNTaskExecution

// Begin Class UBehaviacHTNMethod
void UBehaviacHTNMethod::StaticRegisterNativesUBehaviacHTNMethod()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacHTNMethod);
UClass* Z_Construct_UClass_UBehaviacHTNMethod_NoRegister()
{
	return UBehaviacHTNMethod::StaticClass();
}
struct Z_Construct_UClass_UBehaviacHTNMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * HTN Method: defines one way to decompose a compound task.\n * A compound task may have multiple methods (alternative decompositions).\n */" },
#endif
		{ "DisplayName", "HTN Method" },
		{ "IncludePath", "HTN/BehaviacHTN.h" },
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HTN Method: defines one way to decompose a compound task.\nA compound task may have multiple methods (alternative decompositions)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MethodPrecondition_MetaData[] = {
		{ "Category", "Behaviac|HTN" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Precondition for this method to be applicable */" },
#endif
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Precondition for this method to be applicable" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MethodPrecondition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacHTNMethod>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacHTNMethod_Statics::NewProp_MethodPrecondition = { "MethodPrecondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacHTNMethod, MethodPrecondition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MethodPrecondition_MetaData), NewProp_MethodPrecondition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacHTNMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacHTNMethod_Statics::NewProp_MethodPrecondition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNMethod_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacHTNMethod_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNMethod_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacHTNMethod_Statics::ClassParams = {
	&UBehaviacHTNMethod::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacHTNMethod_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNMethod_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNMethod_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacHTNMethod_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacHTNMethod()
{
	if (!Z_Registration_Info_UClass_UBehaviacHTNMethod.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacHTNMethod.OuterSingleton, Z_Construct_UClass_UBehaviacHTNMethod_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacHTNMethod.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacHTNMethod>()
{
	return UBehaviacHTNMethod::StaticClass();
}
UBehaviacHTNMethod::UBehaviacHTNMethod() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacHTNMethod);
UBehaviacHTNMethod::~UBehaviacHTNMethod() {}
// End Class UBehaviacHTNMethod

// Begin Class UBehaviacHTNMethodTask
void UBehaviacHTNMethodTask::StaticRegisterNativesUBehaviacHTNMethodTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacHTNMethodTask);
UClass* Z_Construct_UClass_UBehaviacHTNMethodTask_NoRegister()
{
	return UBehaviacHTNMethodTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacHTNMethodTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HTN/BehaviacHTN.h" },
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacHTNMethodTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacHTNMethodTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacCompositeTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNMethodTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacHTNMethodTask_Statics::ClassParams = {
	&UBehaviacHTNMethodTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNMethodTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacHTNMethodTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacHTNMethodTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacHTNMethodTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacHTNMethodTask.OuterSingleton, Z_Construct_UClass_UBehaviacHTNMethodTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacHTNMethodTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacHTNMethodTask>()
{
	return UBehaviacHTNMethodTask::StaticClass();
}
UBehaviacHTNMethodTask::UBehaviacHTNMethodTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacHTNMethodTask);
UBehaviacHTNMethodTask::~UBehaviacHTNMethodTask() {}
// End Class UBehaviacHTNMethodTask

// Begin Class UBehaviacHTNPlanner
void UBehaviacHTNPlanner::StaticRegisterNativesUBehaviacHTNPlanner()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacHTNPlanner);
UClass* Z_Construct_UClass_UBehaviacHTNPlanner_NoRegister()
{
	return UBehaviacHTNPlanner::StaticClass();
}
struct Z_Construct_UClass_UBehaviacHTNPlanner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * HTN Planner: generates and executes plans using Hierarchical Task Network decomposition.\n *\n * The planner takes a root task and decomposes compound tasks into primitive tasks\n * until a complete plan is found. It then executes the plan and can automatically\n * replan when the plan fails or the world state changes.\n */" },
#endif
		{ "IncludePath", "HTN/BehaviacHTN.h" },
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "HTN Planner: generates and executes plans using Hierarchical Task Network decomposition.\n\nThe planner takes a root task and decomposes compound tasks into primitive tasks\nuntil a complete plan is found. It then executes the plan and can automatically\nreplan when the plan fails or the world state changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoReplan_MetaData[] = {
		{ "Category", "Behaviac|HTN" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether auto-replanning is enabled */" },
#endif
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether auto-replanning is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Agent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The agent being planned for */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The agent being planned for" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootTaskNode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Root task node */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Root task node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlan_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current plan (sequence of primitive tasks) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current plan (sequence of primitive tasks)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTaskExecution_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current task execution */" },
#endif
		{ "ModuleRelativePath", "Public/HTN/BehaviacHTN.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current task execution" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAutoReplan_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoReplan;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Agent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootTaskNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentPlan_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPlan;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTaskExecution;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacHTNPlanner>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_bAutoReplan_SetBit(void* Obj)
{
	((UBehaviacHTNPlanner*)Obj)->bAutoReplan = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_bAutoReplan = { "bAutoReplan", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBehaviacHTNPlanner), &Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_bAutoReplan_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoReplan_MetaData), NewProp_bAutoReplan_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_Agent = { "Agent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacHTNPlanner, Agent), Z_Construct_UClass_UBehaviacAgentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Agent_MetaData), NewProp_Agent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_RootTaskNode = { "RootTaskNode", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacHTNPlanner, RootTaskNode), Z_Construct_UClass_UBehaviacHTNTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootTaskNode_MetaData), NewProp_RootTaskNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_CurrentPlan_Inner = { "CurrentPlan", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBehaviacHTNTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_CurrentPlan = { "CurrentPlan", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacHTNPlanner, CurrentPlan), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPlan_MetaData), NewProp_CurrentPlan_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_CurrentTaskExecution = { "CurrentTaskExecution", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacHTNPlanner, CurrentTaskExecution), Z_Construct_UClass_UBehaviacBehaviorTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTaskExecution_MetaData), NewProp_CurrentTaskExecution_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacHTNPlanner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_bAutoReplan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_Agent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_RootTaskNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_CurrentPlan_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_CurrentPlan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacHTNPlanner_Statics::NewProp_CurrentTaskExecution,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNPlanner_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacHTNPlanner_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNPlanner_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacHTNPlanner_Statics::ClassParams = {
	&UBehaviacHTNPlanner::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacHTNPlanner_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNPlanner_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacHTNPlanner_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacHTNPlanner_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacHTNPlanner()
{
	if (!Z_Registration_Info_UClass_UBehaviacHTNPlanner.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacHTNPlanner.OuterSingleton, Z_Construct_UClass_UBehaviacHTNPlanner_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacHTNPlanner.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacHTNPlanner>()
{
	return UBehaviacHTNPlanner::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacHTNPlanner);
UBehaviacHTNPlanner::~UBehaviacHTNPlanner() {}
// End Class UBehaviacHTNPlanner

// Begin Registration
struct Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_HTN_BehaviacHTN_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviacHTNTask, UBehaviacHTNTask::StaticClass, TEXT("UBehaviacHTNTask"), &Z_Registration_Info_UClass_UBehaviacHTNTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacHTNTask), 1748255135U) },
		{ Z_Construct_UClass_UBehaviacHTNTaskExecution, UBehaviacHTNTaskExecution::StaticClass, TEXT("UBehaviacHTNTaskExecution"), &Z_Registration_Info_UClass_UBehaviacHTNTaskExecution, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacHTNTaskExecution), 274906650U) },
		{ Z_Construct_UClass_UBehaviacHTNMethod, UBehaviacHTNMethod::StaticClass, TEXT("UBehaviacHTNMethod"), &Z_Registration_Info_UClass_UBehaviacHTNMethod, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacHTNMethod), 1808062761U) },
		{ Z_Construct_UClass_UBehaviacHTNMethodTask, UBehaviacHTNMethodTask::StaticClass, TEXT("UBehaviacHTNMethodTask"), &Z_Registration_Info_UClass_UBehaviacHTNMethodTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacHTNMethodTask), 3934417159U) },
		{ Z_Construct_UClass_UBehaviacHTNPlanner, UBehaviacHTNPlanner::StaticClass, TEXT("UBehaviacHTNPlanner"), &Z_Registration_Info_UClass_UBehaviacHTNPlanner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacHTNPlanner), 3051019322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_HTN_BehaviacHTN_h_3646013279(TEXT("/Script/BehaviacRuntime"),
	Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_HTN_BehaviacHTN_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_HTN_BehaviacHTN_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
