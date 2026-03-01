// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviacRuntime/Public/BehaviorTree/Composites/BehaviacComposites.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviacComposites() {}

// Begin Cross Module References
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorNode();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorTreeTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacCompositeTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacIfElse();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacIfElse_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacIfElseTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacIfElseTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacParallel();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacParallel_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacParallelTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacParallelTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacReferenceBehavior();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacReferenceBehavior_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacReferenceBehaviorTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacReferenceBehaviorTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelector();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelector_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorLoop();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorLoop_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorLoopTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorLoopTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorProbability();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorProbability_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorProbabilityTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorProbabilityTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorStochastic();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorStochastic_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorStochasticTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorStochasticTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSelectorTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSequence();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSequence_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSequenceStochastic();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSequenceStochastic_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSequenceStochasticTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSequenceStochasticTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSequenceTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSequenceTask_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacSingleChildTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWithPrecondition();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWithPrecondition_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWithPreconditionTask();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacWithPreconditionTask_NoRegister();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacChildFinishPolicy();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacParallelPolicy();
UPackage* Z_Construct_UPackage__Script_BehaviacRuntime();
// End Cross Module References

// Begin Class UBehaviacSelector
void UBehaviacSelector::StaticRegisterNativesUBehaviacSelector()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSelector);
UClass* Z_Construct_UClass_UBehaviacSelector_NoRegister()
{
	return UBehaviacSelector::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Selector: ticks children left to right until one succeeds or returns Running.\n * Returns Success if any child succeeds, Failure if all fail.\n */" },
#endif
		{ "DisplayName", "Selector" },
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selector: ticks children left to right until one succeeds or returns Running.\nReturns Success if any child succeeds, Failure if all fail." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSelector>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacSelector_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelector_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSelector_Statics::ClassParams = {
	&UBehaviacSelector::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelector_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSelector_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSelector()
{
	if (!Z_Registration_Info_UClass_UBehaviacSelector.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSelector.OuterSingleton, Z_Construct_UClass_UBehaviacSelector_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSelector.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSelector>()
{
	return UBehaviacSelector::StaticClass();
}
UBehaviacSelector::UBehaviacSelector() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSelector);
UBehaviacSelector::~UBehaviacSelector() {}
// End Class UBehaviacSelector

// Begin Class UBehaviacSelectorTask
void UBehaviacSelectorTask::StaticRegisterNativesUBehaviacSelectorTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSelectorTask);
UClass* Z_Construct_UClass_UBehaviacSelectorTask_NoRegister()
{
	return UBehaviacSelectorTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSelectorTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSelectorTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacSelectorTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacCompositeTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSelectorTask_Statics::ClassParams = {
	&UBehaviacSelectorTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSelectorTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSelectorTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacSelectorTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSelectorTask.OuterSingleton, Z_Construct_UClass_UBehaviacSelectorTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSelectorTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSelectorTask>()
{
	return UBehaviacSelectorTask::StaticClass();
}
UBehaviacSelectorTask::UBehaviacSelectorTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSelectorTask);
UBehaviacSelectorTask::~UBehaviacSelectorTask() {}
// End Class UBehaviacSelectorTask

// Begin Class UBehaviacSequence
void UBehaviacSequence::StaticRegisterNativesUBehaviacSequence()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSequence);
UClass* Z_Construct_UClass_UBehaviacSequence_NoRegister()
{
	return UBehaviacSequence::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSequence_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Sequence: ticks children left to right until one fails or returns Running.\n * Returns Failure if any child fails, Success if all succeed.\n */" },
#endif
		{ "DisplayName", "Sequence" },
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sequence: ticks children left to right until one fails or returns Running.\nReturns Failure if any child fails, Success if all succeed." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSequence>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacSequence_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSequence_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSequence_Statics::ClassParams = {
	&UBehaviacSequence::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSequence_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSequence_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSequence()
{
	if (!Z_Registration_Info_UClass_UBehaviacSequence.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSequence.OuterSingleton, Z_Construct_UClass_UBehaviacSequence_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSequence.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSequence>()
{
	return UBehaviacSequence::StaticClass();
}
UBehaviacSequence::UBehaviacSequence() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSequence);
UBehaviacSequence::~UBehaviacSequence() {}
// End Class UBehaviacSequence

// Begin Class UBehaviacSequenceTask
void UBehaviacSequenceTask::StaticRegisterNativesUBehaviacSequenceTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSequenceTask);
UClass* Z_Construct_UClass_UBehaviacSequenceTask_NoRegister()
{
	return UBehaviacSequenceTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSequenceTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSequenceTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacSequenceTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacCompositeTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSequenceTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSequenceTask_Statics::ClassParams = {
	&UBehaviacSequenceTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSequenceTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSequenceTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSequenceTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacSequenceTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSequenceTask.OuterSingleton, Z_Construct_UClass_UBehaviacSequenceTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSequenceTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSequenceTask>()
{
	return UBehaviacSequenceTask::StaticClass();
}
UBehaviacSequenceTask::UBehaviacSequenceTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSequenceTask);
UBehaviacSequenceTask::~UBehaviacSequenceTask() {}
// End Class UBehaviacSequenceTask

// Begin Class UBehaviacParallel
void UBehaviacParallel::StaticRegisterNativesUBehaviacParallel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacParallel);
UClass* Z_Construct_UClass_UBehaviacParallel_NoRegister()
{
	return UBehaviacParallel::StaticClass();
}
struct Z_Construct_UClass_UBehaviacParallel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Parallel: ticks all children simultaneously every frame.\n * Completion policy determines success/failure behavior.\n */" },
#endif
		{ "DisplayName", "Parallel" },
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parallel: ticks all children simultaneously every frame.\nCompletion policy determines success/failure behavior." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailurePolicy_MetaData[] = {
		{ "Category", "Behaviac|Parallel" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildFinishPolicy_MetaData[] = {
		{ "Category", "Behaviac|Parallel" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailurePolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FailurePolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChildFinishPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ChildFinishPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacParallel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBehaviacParallel_Statics::NewProp_FailurePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBehaviacParallel_Statics::NewProp_FailurePolicy = { "FailurePolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacParallel, FailurePolicy), Z_Construct_UEnum_BehaviacRuntime_EBehaviacParallelPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailurePolicy_MetaData), NewProp_FailurePolicy_MetaData) }; // 1371225892
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBehaviacParallel_Statics::NewProp_ChildFinishPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBehaviacParallel_Statics::NewProp_ChildFinishPolicy = { "ChildFinishPolicy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacParallel, ChildFinishPolicy), Z_Construct_UEnum_BehaviacRuntime_EBehaviacChildFinishPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildFinishPolicy_MetaData), NewProp_ChildFinishPolicy_MetaData) }; // 2046566714
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacParallel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacParallel_Statics::NewProp_FailurePolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacParallel_Statics::NewProp_FailurePolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacParallel_Statics::NewProp_ChildFinishPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacParallel_Statics::NewProp_ChildFinishPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacParallel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacParallel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacParallel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacParallel_Statics::ClassParams = {
	&UBehaviacParallel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacParallel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacParallel_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacParallel_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacParallel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacParallel()
{
	if (!Z_Registration_Info_UClass_UBehaviacParallel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacParallel.OuterSingleton, Z_Construct_UClass_UBehaviacParallel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacParallel.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacParallel>()
{
	return UBehaviacParallel::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacParallel);
UBehaviacParallel::~UBehaviacParallel() {}
// End Class UBehaviacParallel

// Begin Class UBehaviacParallelTask
void UBehaviacParallelTask::StaticRegisterNativesUBehaviacParallelTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacParallelTask);
UClass* Z_Construct_UClass_UBehaviacParallelTask_NoRegister()
{
	return UBehaviacParallelTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacParallelTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacParallelTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacParallelTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacCompositeTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacParallelTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacParallelTask_Statics::ClassParams = {
	&UBehaviacParallelTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacParallelTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacParallelTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacParallelTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacParallelTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacParallelTask.OuterSingleton, Z_Construct_UClass_UBehaviacParallelTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacParallelTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacParallelTask>()
{
	return UBehaviacParallelTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacParallelTask);
UBehaviacParallelTask::~UBehaviacParallelTask() {}
// End Class UBehaviacParallelTask

// Begin Class UBehaviacIfElse
void UBehaviacIfElse::StaticRegisterNativesUBehaviacIfElse()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacIfElse);
UClass* Z_Construct_UClass_UBehaviacIfElse_NoRegister()
{
	return UBehaviacIfElse::StaticClass();
}
struct Z_Construct_UClass_UBehaviacIfElse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * IfElse: expects 3 children: condition, if-true branch, if-false branch.\n */" },
#endif
		{ "DisplayName", "IfElse" },
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IfElse: expects 3 children: condition, if-true branch, if-false branch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacIfElse>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacIfElse_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacIfElse_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacIfElse_Statics::ClassParams = {
	&UBehaviacIfElse::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacIfElse_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacIfElse_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacIfElse()
{
	if (!Z_Registration_Info_UClass_UBehaviacIfElse.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacIfElse.OuterSingleton, Z_Construct_UClass_UBehaviacIfElse_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacIfElse.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacIfElse>()
{
	return UBehaviacIfElse::StaticClass();
}
UBehaviacIfElse::UBehaviacIfElse() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacIfElse);
UBehaviacIfElse::~UBehaviacIfElse() {}
// End Class UBehaviacIfElse

// Begin Class UBehaviacIfElseTask
void UBehaviacIfElseTask::StaticRegisterNativesUBehaviacIfElseTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacIfElseTask);
UClass* Z_Construct_UClass_UBehaviacIfElseTask_NoRegister()
{
	return UBehaviacIfElseTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacIfElseTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacIfElseTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacIfElseTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacCompositeTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacIfElseTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacIfElseTask_Statics::ClassParams = {
	&UBehaviacIfElseTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacIfElseTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacIfElseTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacIfElseTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacIfElseTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacIfElseTask.OuterSingleton, Z_Construct_UClass_UBehaviacIfElseTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacIfElseTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacIfElseTask>()
{
	return UBehaviacIfElseTask::StaticClass();
}
UBehaviacIfElseTask::UBehaviacIfElseTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacIfElseTask);
UBehaviacIfElseTask::~UBehaviacIfElseTask() {}
// End Class UBehaviacIfElseTask

// Begin Class UBehaviacSelectorLoop
void UBehaviacSelectorLoop::StaticRegisterNativesUBehaviacSelectorLoop()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSelectorLoop);
UClass* Z_Construct_UClass_UBehaviacSelectorLoop_NoRegister()
{
	return UBehaviacSelectorLoop::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSelectorLoop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * SelectorLoop: a selector that re-evaluates its conditions on each tick.\n * If a higher-priority child becomes valid, it interrupts the current child.\n */" },
#endif
		{ "DisplayName", "SelectorLoop" },
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SelectorLoop: a selector that re-evaluates its conditions on each tick.\nIf a higher-priority child becomes valid, it interrupts the current child." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSelectorLoop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacSelectorLoop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorLoop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSelectorLoop_Statics::ClassParams = {
	&UBehaviacSelectorLoop::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorLoop_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSelectorLoop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSelectorLoop()
{
	if (!Z_Registration_Info_UClass_UBehaviacSelectorLoop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSelectorLoop.OuterSingleton, Z_Construct_UClass_UBehaviacSelectorLoop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSelectorLoop.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSelectorLoop>()
{
	return UBehaviacSelectorLoop::StaticClass();
}
UBehaviacSelectorLoop::UBehaviacSelectorLoop() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSelectorLoop);
UBehaviacSelectorLoop::~UBehaviacSelectorLoop() {}
// End Class UBehaviacSelectorLoop

// Begin Class UBehaviacSelectorLoopTask
void UBehaviacSelectorLoopTask::StaticRegisterNativesUBehaviacSelectorLoopTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSelectorLoopTask);
UClass* Z_Construct_UClass_UBehaviacSelectorLoopTask_NoRegister()
{
	return UBehaviacSelectorLoopTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSelectorLoopTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSelectorLoopTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacSelectorLoopTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacCompositeTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorLoopTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSelectorLoopTask_Statics::ClassParams = {
	&UBehaviacSelectorLoopTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorLoopTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSelectorLoopTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSelectorLoopTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacSelectorLoopTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSelectorLoopTask.OuterSingleton, Z_Construct_UClass_UBehaviacSelectorLoopTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSelectorLoopTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSelectorLoopTask>()
{
	return UBehaviacSelectorLoopTask::StaticClass();
}
UBehaviacSelectorLoopTask::UBehaviacSelectorLoopTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSelectorLoopTask);
UBehaviacSelectorLoopTask::~UBehaviacSelectorLoopTask() {}
// End Class UBehaviacSelectorLoopTask

// Begin Class UBehaviacSelectorProbability
void UBehaviacSelectorProbability::StaticRegisterNativesUBehaviacSelectorProbability()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSelectorProbability);
UClass* Z_Construct_UClass_UBehaviacSelectorProbability_NoRegister()
{
	return UBehaviacSelectorProbability::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSelectorProbability_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * SelectorProbability: selects a child randomly based on weight values.\n */" },
#endif
		{ "DisplayName", "SelectorProbability" },
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SelectorProbability: selects a child randomly based on weight values." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSelectorProbability>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacSelectorProbability_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorProbability_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSelectorProbability_Statics::ClassParams = {
	&UBehaviacSelectorProbability::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorProbability_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSelectorProbability_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSelectorProbability()
{
	if (!Z_Registration_Info_UClass_UBehaviacSelectorProbability.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSelectorProbability.OuterSingleton, Z_Construct_UClass_UBehaviacSelectorProbability_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSelectorProbability.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSelectorProbability>()
{
	return UBehaviacSelectorProbability::StaticClass();
}
UBehaviacSelectorProbability::UBehaviacSelectorProbability() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSelectorProbability);
UBehaviacSelectorProbability::~UBehaviacSelectorProbability() {}
// End Class UBehaviacSelectorProbability

// Begin Class UBehaviacSelectorProbabilityTask
void UBehaviacSelectorProbabilityTask::StaticRegisterNativesUBehaviacSelectorProbabilityTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSelectorProbabilityTask);
UClass* Z_Construct_UClass_UBehaviacSelectorProbabilityTask_NoRegister()
{
	return UBehaviacSelectorProbabilityTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSelectorProbabilityTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSelectorProbabilityTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacSelectorProbabilityTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacCompositeTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorProbabilityTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSelectorProbabilityTask_Statics::ClassParams = {
	&UBehaviacSelectorProbabilityTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorProbabilityTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSelectorProbabilityTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSelectorProbabilityTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacSelectorProbabilityTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSelectorProbabilityTask.OuterSingleton, Z_Construct_UClass_UBehaviacSelectorProbabilityTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSelectorProbabilityTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSelectorProbabilityTask>()
{
	return UBehaviacSelectorProbabilityTask::StaticClass();
}
UBehaviacSelectorProbabilityTask::UBehaviacSelectorProbabilityTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSelectorProbabilityTask);
UBehaviacSelectorProbabilityTask::~UBehaviacSelectorProbabilityTask() {}
// End Class UBehaviacSelectorProbabilityTask

// Begin Class UBehaviacSelectorStochastic
void UBehaviacSelectorStochastic::StaticRegisterNativesUBehaviacSelectorStochastic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSelectorStochastic);
UClass* Z_Construct_UClass_UBehaviacSelectorStochastic_NoRegister()
{
	return UBehaviacSelectorStochastic::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSelectorStochastic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * SelectorStochastic: a selector that shuffles child order before evaluation.\n */" },
#endif
		{ "DisplayName", "SelectorStochastic" },
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SelectorStochastic: a selector that shuffles child order before evaluation." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSelectorStochastic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacSelectorStochastic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorStochastic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSelectorStochastic_Statics::ClassParams = {
	&UBehaviacSelectorStochastic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorStochastic_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSelectorStochastic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSelectorStochastic()
{
	if (!Z_Registration_Info_UClass_UBehaviacSelectorStochastic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSelectorStochastic.OuterSingleton, Z_Construct_UClass_UBehaviacSelectorStochastic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSelectorStochastic.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSelectorStochastic>()
{
	return UBehaviacSelectorStochastic::StaticClass();
}
UBehaviacSelectorStochastic::UBehaviacSelectorStochastic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSelectorStochastic);
UBehaviacSelectorStochastic::~UBehaviacSelectorStochastic() {}
// End Class UBehaviacSelectorStochastic

// Begin Class UBehaviacSelectorStochasticTask
void UBehaviacSelectorStochasticTask::StaticRegisterNativesUBehaviacSelectorStochasticTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSelectorStochasticTask);
UClass* Z_Construct_UClass_UBehaviacSelectorStochasticTask_NoRegister()
{
	return UBehaviacSelectorStochasticTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSelectorStochasticTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSelectorStochasticTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacSelectorStochasticTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacCompositeTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorStochasticTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSelectorStochasticTask_Statics::ClassParams = {
	&UBehaviacSelectorStochasticTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSelectorStochasticTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSelectorStochasticTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSelectorStochasticTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacSelectorStochasticTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSelectorStochasticTask.OuterSingleton, Z_Construct_UClass_UBehaviacSelectorStochasticTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSelectorStochasticTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSelectorStochasticTask>()
{
	return UBehaviacSelectorStochasticTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSelectorStochasticTask);
UBehaviacSelectorStochasticTask::~UBehaviacSelectorStochasticTask() {}
// End Class UBehaviacSelectorStochasticTask

// Begin Class UBehaviacSequenceStochastic
void UBehaviacSequenceStochastic::StaticRegisterNativesUBehaviacSequenceStochastic()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSequenceStochastic);
UClass* Z_Construct_UClass_UBehaviacSequenceStochastic_NoRegister()
{
	return UBehaviacSequenceStochastic::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSequenceStochastic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * SequenceStochastic: a sequence that shuffles child order before evaluation.\n */" },
#endif
		{ "DisplayName", "SequenceStochastic" },
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SequenceStochastic: a sequence that shuffles child order before evaluation." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSequenceStochastic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacSequenceStochastic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSequenceStochastic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSequenceStochastic_Statics::ClassParams = {
	&UBehaviacSequenceStochastic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSequenceStochastic_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSequenceStochastic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSequenceStochastic()
{
	if (!Z_Registration_Info_UClass_UBehaviacSequenceStochastic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSequenceStochastic.OuterSingleton, Z_Construct_UClass_UBehaviacSequenceStochastic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSequenceStochastic.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSequenceStochastic>()
{
	return UBehaviacSequenceStochastic::StaticClass();
}
UBehaviacSequenceStochastic::UBehaviacSequenceStochastic() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSequenceStochastic);
UBehaviacSequenceStochastic::~UBehaviacSequenceStochastic() {}
// End Class UBehaviacSequenceStochastic

// Begin Class UBehaviacSequenceStochasticTask
void UBehaviacSequenceStochasticTask::StaticRegisterNativesUBehaviacSequenceStochasticTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacSequenceStochasticTask);
UClass* Z_Construct_UClass_UBehaviacSequenceStochasticTask_NoRegister()
{
	return UBehaviacSequenceStochasticTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacSequenceStochasticTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacSequenceStochasticTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacSequenceStochasticTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacCompositeTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSequenceStochasticTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacSequenceStochasticTask_Statics::ClassParams = {
	&UBehaviacSequenceStochasticTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacSequenceStochasticTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacSequenceStochasticTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacSequenceStochasticTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacSequenceStochasticTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacSequenceStochasticTask.OuterSingleton, Z_Construct_UClass_UBehaviacSequenceStochasticTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacSequenceStochasticTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacSequenceStochasticTask>()
{
	return UBehaviacSequenceStochasticTask::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacSequenceStochasticTask);
UBehaviacSequenceStochasticTask::~UBehaviacSequenceStochasticTask() {}
// End Class UBehaviacSequenceStochasticTask

// Begin Class UBehaviacReferenceBehavior
void UBehaviacReferenceBehavior::StaticRegisterNativesUBehaviacReferenceBehavior()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacReferenceBehavior);
UClass* Z_Construct_UClass_UBehaviacReferenceBehavior_NoRegister()
{
	return UBehaviacReferenceBehavior::StaticClass();
}
struct Z_Construct_UClass_UBehaviacReferenceBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ReferenceBehavior: references another behavior tree for execution.\n */" },
#endif
		{ "DisplayName", "ReferenceBehavior" },
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ReferenceBehavior: references another behavior tree for execution." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedTreePath_MetaData[] = {
		{ "Category", "Behaviac|Reference" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Path to the referenced behavior tree */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path to the referenced behavior tree" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReferencedTreePath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacReferenceBehavior>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacReferenceBehavior_Statics::NewProp_ReferencedTreePath = { "ReferencedTreePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacReferenceBehavior, ReferencedTreePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedTreePath_MetaData), NewProp_ReferencedTreePath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacReferenceBehavior_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacReferenceBehavior_Statics::NewProp_ReferencedTreePath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacReferenceBehavior_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacReferenceBehavior_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacReferenceBehavior_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacReferenceBehavior_Statics::ClassParams = {
	&UBehaviacReferenceBehavior::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacReferenceBehavior_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacReferenceBehavior_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacReferenceBehavior_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacReferenceBehavior_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacReferenceBehavior()
{
	if (!Z_Registration_Info_UClass_UBehaviacReferenceBehavior.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacReferenceBehavior.OuterSingleton, Z_Construct_UClass_UBehaviacReferenceBehavior_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacReferenceBehavior.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacReferenceBehavior>()
{
	return UBehaviacReferenceBehavior::StaticClass();
}
UBehaviacReferenceBehavior::UBehaviacReferenceBehavior() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacReferenceBehavior);
UBehaviacReferenceBehavior::~UBehaviacReferenceBehavior() {}
// End Class UBehaviacReferenceBehavior

// Begin Class UBehaviacReferenceBehaviorTask
void UBehaviacReferenceBehaviorTask::StaticRegisterNativesUBehaviacReferenceBehaviorTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacReferenceBehaviorTask);
UClass* Z_Construct_UClass_UBehaviacReferenceBehaviorTask_NoRegister()
{
	return UBehaviacReferenceBehaviorTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubTreeTask_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The loaded sub-tree task */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The loaded sub-tree task" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SubTreeTask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacReferenceBehaviorTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics::NewProp_SubTreeTask = { "SubTreeTask", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacReferenceBehaviorTask, SubTreeTask), Z_Construct_UClass_UBehaviacBehaviorTreeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubTreeTask_MetaData), NewProp_SubTreeTask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics::NewProp_SubTreeTask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacSingleChildTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics::ClassParams = {
	&UBehaviacReferenceBehaviorTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacReferenceBehaviorTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacReferenceBehaviorTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacReferenceBehaviorTask.OuterSingleton, Z_Construct_UClass_UBehaviacReferenceBehaviorTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacReferenceBehaviorTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacReferenceBehaviorTask>()
{
	return UBehaviacReferenceBehaviorTask::StaticClass();
}
UBehaviacReferenceBehaviorTask::UBehaviacReferenceBehaviorTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacReferenceBehaviorTask);
UBehaviacReferenceBehaviorTask::~UBehaviacReferenceBehaviorTask() {}
// End Class UBehaviacReferenceBehaviorTask

// Begin Class UBehaviacWithPrecondition
void UBehaviacWithPrecondition::StaticRegisterNativesUBehaviacWithPrecondition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacWithPrecondition);
UClass* Z_Construct_UClass_UBehaviacWithPrecondition_NoRegister()
{
	return UBehaviacWithPrecondition::StaticClass();
}
struct Z_Construct_UClass_UBehaviacWithPrecondition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * WithPrecondition: expects 2 children. The first is the precondition,\n * the second is the action. Only runs the action if precondition succeeds.\n */" },
#endif
		{ "DisplayName", "WithPrecondition" },
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "WithPrecondition: expects 2 children. The first is the precondition,\nthe second is the action. Only runs the action if precondition succeeds." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacWithPrecondition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacWithPrecondition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacBehaviorNode,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWithPrecondition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacWithPrecondition_Statics::ClassParams = {
	&UBehaviacWithPrecondition::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWithPrecondition_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacWithPrecondition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacWithPrecondition()
{
	if (!Z_Registration_Info_UClass_UBehaviacWithPrecondition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacWithPrecondition.OuterSingleton, Z_Construct_UClass_UBehaviacWithPrecondition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacWithPrecondition.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacWithPrecondition>()
{
	return UBehaviacWithPrecondition::StaticClass();
}
UBehaviacWithPrecondition::UBehaviacWithPrecondition() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacWithPrecondition);
UBehaviacWithPrecondition::~UBehaviacWithPrecondition() {}
// End Class UBehaviacWithPrecondition

// Begin Class UBehaviacWithPreconditionTask
void UBehaviacWithPreconditionTask::StaticRegisterNativesUBehaviacWithPreconditionTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacWithPreconditionTask);
UClass* Z_Construct_UClass_UBehaviacWithPreconditionTask_NoRegister()
{
	return UBehaviacWithPreconditionTask::StaticClass();
}
struct Z_Construct_UClass_UBehaviacWithPreconditionTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTree/Composites/BehaviacComposites.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/Composites/BehaviacComposites.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacWithPreconditionTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacWithPreconditionTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBehaviacCompositeTask,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWithPreconditionTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacWithPreconditionTask_Statics::ClassParams = {
	&UBehaviacWithPreconditionTask::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacWithPreconditionTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacWithPreconditionTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacWithPreconditionTask()
{
	if (!Z_Registration_Info_UClass_UBehaviacWithPreconditionTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacWithPreconditionTask.OuterSingleton, Z_Construct_UClass_UBehaviacWithPreconditionTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacWithPreconditionTask.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacWithPreconditionTask>()
{
	return UBehaviacWithPreconditionTask::StaticClass();
}
UBehaviacWithPreconditionTask::UBehaviacWithPreconditionTask() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacWithPreconditionTask);
UBehaviacWithPreconditionTask::~UBehaviacWithPreconditionTask() {}
// End Class UBehaviacWithPreconditionTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_Composites_BehaviacComposites_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviacSelector, UBehaviacSelector::StaticClass, TEXT("UBehaviacSelector"), &Z_Registration_Info_UClass_UBehaviacSelector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSelector), 862015555U) },
		{ Z_Construct_UClass_UBehaviacSelectorTask, UBehaviacSelectorTask::StaticClass, TEXT("UBehaviacSelectorTask"), &Z_Registration_Info_UClass_UBehaviacSelectorTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSelectorTask), 2645206287U) },
		{ Z_Construct_UClass_UBehaviacSequence, UBehaviacSequence::StaticClass, TEXT("UBehaviacSequence"), &Z_Registration_Info_UClass_UBehaviacSequence, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSequence), 1188138556U) },
		{ Z_Construct_UClass_UBehaviacSequenceTask, UBehaviacSequenceTask::StaticClass, TEXT("UBehaviacSequenceTask"), &Z_Registration_Info_UClass_UBehaviacSequenceTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSequenceTask), 701519870U) },
		{ Z_Construct_UClass_UBehaviacParallel, UBehaviacParallel::StaticClass, TEXT("UBehaviacParallel"), &Z_Registration_Info_UClass_UBehaviacParallel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacParallel), 2485672378U) },
		{ Z_Construct_UClass_UBehaviacParallelTask, UBehaviacParallelTask::StaticClass, TEXT("UBehaviacParallelTask"), &Z_Registration_Info_UClass_UBehaviacParallelTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacParallelTask), 982229934U) },
		{ Z_Construct_UClass_UBehaviacIfElse, UBehaviacIfElse::StaticClass, TEXT("UBehaviacIfElse"), &Z_Registration_Info_UClass_UBehaviacIfElse, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacIfElse), 3520788035U) },
		{ Z_Construct_UClass_UBehaviacIfElseTask, UBehaviacIfElseTask::StaticClass, TEXT("UBehaviacIfElseTask"), &Z_Registration_Info_UClass_UBehaviacIfElseTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacIfElseTask), 4081439600U) },
		{ Z_Construct_UClass_UBehaviacSelectorLoop, UBehaviacSelectorLoop::StaticClass, TEXT("UBehaviacSelectorLoop"), &Z_Registration_Info_UClass_UBehaviacSelectorLoop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSelectorLoop), 91002576U) },
		{ Z_Construct_UClass_UBehaviacSelectorLoopTask, UBehaviacSelectorLoopTask::StaticClass, TEXT("UBehaviacSelectorLoopTask"), &Z_Registration_Info_UClass_UBehaviacSelectorLoopTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSelectorLoopTask), 1536066607U) },
		{ Z_Construct_UClass_UBehaviacSelectorProbability, UBehaviacSelectorProbability::StaticClass, TEXT("UBehaviacSelectorProbability"), &Z_Registration_Info_UClass_UBehaviacSelectorProbability, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSelectorProbability), 2480199858U) },
		{ Z_Construct_UClass_UBehaviacSelectorProbabilityTask, UBehaviacSelectorProbabilityTask::StaticClass, TEXT("UBehaviacSelectorProbabilityTask"), &Z_Registration_Info_UClass_UBehaviacSelectorProbabilityTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSelectorProbabilityTask), 1189025867U) },
		{ Z_Construct_UClass_UBehaviacSelectorStochastic, UBehaviacSelectorStochastic::StaticClass, TEXT("UBehaviacSelectorStochastic"), &Z_Registration_Info_UClass_UBehaviacSelectorStochastic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSelectorStochastic), 2646231273U) },
		{ Z_Construct_UClass_UBehaviacSelectorStochasticTask, UBehaviacSelectorStochasticTask::StaticClass, TEXT("UBehaviacSelectorStochasticTask"), &Z_Registration_Info_UClass_UBehaviacSelectorStochasticTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSelectorStochasticTask), 3429430373U) },
		{ Z_Construct_UClass_UBehaviacSequenceStochastic, UBehaviacSequenceStochastic::StaticClass, TEXT("UBehaviacSequenceStochastic"), &Z_Registration_Info_UClass_UBehaviacSequenceStochastic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSequenceStochastic), 1682813101U) },
		{ Z_Construct_UClass_UBehaviacSequenceStochasticTask, UBehaviacSequenceStochasticTask::StaticClass, TEXT("UBehaviacSequenceStochasticTask"), &Z_Registration_Info_UClass_UBehaviacSequenceStochasticTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacSequenceStochasticTask), 2675552341U) },
		{ Z_Construct_UClass_UBehaviacReferenceBehavior, UBehaviacReferenceBehavior::StaticClass, TEXT("UBehaviacReferenceBehavior"), &Z_Registration_Info_UClass_UBehaviacReferenceBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacReferenceBehavior), 3818890414U) },
		{ Z_Construct_UClass_UBehaviacReferenceBehaviorTask, UBehaviacReferenceBehaviorTask::StaticClass, TEXT("UBehaviacReferenceBehaviorTask"), &Z_Registration_Info_UClass_UBehaviacReferenceBehaviorTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacReferenceBehaviorTask), 3008780676U) },
		{ Z_Construct_UClass_UBehaviacWithPrecondition, UBehaviacWithPrecondition::StaticClass, TEXT("UBehaviacWithPrecondition"), &Z_Registration_Info_UClass_UBehaviacWithPrecondition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacWithPrecondition), 3827685793U) },
		{ Z_Construct_UClass_UBehaviacWithPreconditionTask, UBehaviacWithPreconditionTask::StaticClass, TEXT("UBehaviacWithPreconditionTask"), &Z_Registration_Info_UClass_UBehaviacWithPreconditionTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacWithPreconditionTask), 1653998204U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_Composites_BehaviacComposites_h_3098124625(TEXT("/Script/BehaviacRuntime"),
	Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_Composites_BehaviacComposites_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_Composites_BehaviacComposites_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
