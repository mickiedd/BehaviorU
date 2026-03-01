// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviacRuntime/Public/BehaviorTree/BehaviacBehaviorNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviacBehaviorNode() {}

// Begin Cross Module References
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacAttachment_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorNode();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorNode_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BehaviacRuntime();
// End Cross Module References

// Begin Class UBehaviacBehaviorNode Function GetChild
struct Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics
{
	struct BehaviacBehaviorNode_eventGetChild_Parms
	{
		int32 Index;
		UBehaviacBehaviorNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get child at index */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get child at index" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacBehaviorNode_eventGetChild_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacBehaviorNode_eventGetChild_Parms, ReturnValue), Z_Construct_UClass_UBehaviacBehaviorNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacBehaviorNode, nullptr, "GetChild", nullptr, nullptr, Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::BehaviacBehaviorNode_eventGetChild_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::BehaviacBehaviorNode_eventGetChild_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacBehaviorNode::execGetChild)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBehaviacBehaviorNode**)Z_Param__Result=P_THIS->GetChild(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UBehaviacBehaviorNode Function GetChild

// Begin Class UBehaviacBehaviorNode Function GetChildCount
struct Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics
{
	struct BehaviacBehaviorNode_eventGetChildCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the number of children */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the number of children" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacBehaviorNode_eventGetChildCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacBehaviorNode, nullptr, "GetChildCount", nullptr, nullptr, Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics::BehaviacBehaviorNode_eventGetChildCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics::BehaviacBehaviorNode_eventGetChildCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacBehaviorNode::execGetChildCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetChildCount();
	P_NATIVE_END;
}
// End Class UBehaviacBehaviorNode Function GetChildCount

// Begin Class UBehaviacBehaviorNode Function GetParent
struct Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics
{
	struct BehaviacBehaviorNode_eventGetParent_Parms
	{
		UBehaviacBehaviorNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get parent node (if any) */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get parent node (if any)" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacBehaviorNode_eventGetParent_Parms, ReturnValue), Z_Construct_UClass_UBehaviacBehaviorNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacBehaviorNode, nullptr, "GetParent", nullptr, nullptr, Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics::BehaviacBehaviorNode_eventGetParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics::BehaviacBehaviorNode_eventGetParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacBehaviorNode::execGetParent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBehaviacBehaviorNode**)Z_Param__Result=P_THIS->GetParent();
	P_NATIVE_END;
}
// End Class UBehaviacBehaviorNode Function GetParent

// Begin Class UBehaviacBehaviorNode
void UBehaviacBehaviorNode::StaticRegisterNativesUBehaviacBehaviorNode()
{
	UClass* Class = UBehaviacBehaviorNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetChild", &UBehaviacBehaviorNode::execGetChild },
		{ "GetChildCount", &UBehaviacBehaviorNode::execGetChildCount },
		{ "GetParent", &UBehaviacBehaviorNode::execGetParent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacBehaviorNode);
UClass* Z_Construct_UClass_UBehaviacBehaviorNode_NoRegister()
{
	return UBehaviacBehaviorNode::StaticClass();
}
struct Z_Construct_UClass_UBehaviacBehaviorNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for all behavior tree nodes.\n * \n * This mirrors the original behaviac BehaviorNode class, restructured\n * as a UObject for UE5 integration. Each node is a template that defines\n * behavior; the actual runtime state is held in UBehaviacBehaviorTask.\n */" },
#endif
		{ "IncludePath", "BehaviorTree/BehaviacBehaviorNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for all behavior tree nodes.\n\nThis mirrors the original behaviac BehaviorNode class, restructured\nas a UObject for UE5 integration. Each node is a template that defines\nbehavior; the actual runtime state is held in UBehaviacBehaviorTask." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "Category", "Behaviac|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Unique node ID within the tree */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unique node ID within the tree" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeClassName_MetaData[] = {
		{ "Category", "Behaviac|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Human-readable class name for serialization */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Human-readable class name for serialization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentType_MetaData[] = {
		{ "Category", "Behaviac|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** User-specified agent type for this node */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User-specified agent type for this node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_Inner_MetaData[] = {
		{ "Category", "Behaviac|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Child nodes */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Child nodes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "Category", "Behaviac|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Child nodes */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Child nodes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomCondition_MetaData[] = {
		{ "Category", "Behaviac|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom node identifier (user-assigned) */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom node identifier (user-assigned)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasEvents_MetaData[] = {
		{ "Category", "Behaviac|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether this node has custom preconditions/effectors */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether this node has custom preconditions/effectors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preconditions_Inner_MetaData[] = {
		{ "Category", "Behaviac|Attachments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Precondition attachments evaluated before this node executes */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Precondition attachments evaluated before this node executes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preconditions_MetaData[] = {
		{ "Category", "Behaviac|Attachments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Precondition attachments evaluated before this node executes */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Precondition attachments evaluated before this node executes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effectors_Inner_MetaData[] = {
		{ "Category", "Behaviac|Attachments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Effector attachments applied after this node completes */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effector attachments applied after this node completes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[] = {
		{ "Category", "Behaviac|Attachments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Effector attachments applied after this node completes */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effector attachments applied after this node completes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_Inner_MetaData[] = {
		{ "Category", "Behaviac|Attachments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event attachments */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event attachments" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
		{ "Category", "Behaviac|Attachments" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Event attachments */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event attachments" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Parent node reference */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parent node reference" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeClassName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AgentType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomCondition;
	static void NewProp_bHasEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Preconditions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Preconditions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Effectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Effectors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Events_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviacBehaviorNode_GetChild, "GetChild" }, // 279942262
		{ &Z_Construct_UFunction_UBehaviacBehaviorNode_GetChildCount, "GetChildCount" }, // 3043619829
		{ &Z_Construct_UFunction_UBehaviacBehaviorNode_GetParent, "GetParent" }, // 2140477583
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacBehaviorNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorNode, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_NodeClassName = { "NodeClassName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorNode, NodeClassName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeClassName_MetaData), NewProp_NodeClassName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_AgentType = { "AgentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorNode, AgentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentType_MetaData), NewProp_AgentType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBehaviacBehaviorNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_Inner_MetaData), NewProp_Children_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorNode, Children), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_CustomCondition = { "CustomCondition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorNode, CustomCondition), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomCondition_MetaData), NewProp_CustomCondition_MetaData) };
void Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_bHasEvents_SetBit(void* Obj)
{
	((UBehaviacBehaviorNode*)Obj)->bHasEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_bHasEvents = { "bHasEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBehaviacBehaviorNode), &Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_bHasEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasEvents_MetaData), NewProp_bHasEvents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Preconditions_Inner = { "Preconditions", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBehaviacAttachment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preconditions_Inner_MetaData), NewProp_Preconditions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Preconditions = { "Preconditions", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorNode, Preconditions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preconditions_MetaData), NewProp_Preconditions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBehaviacAttachment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effectors_Inner_MetaData), NewProp_Effectors_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorNode, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effectors_MetaData), NewProp_Effectors_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBehaviacAttachment_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_Inner_MetaData), NewProp_Events_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x001000800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorNode, Events), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_MetaData), NewProp_Events_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorNode, ParentNode), Z_Construct_UClass_UBehaviacBehaviorNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNode_MetaData), NewProp_ParentNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacBehaviorNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_NodeClassName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_AgentType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Children,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_CustomCondition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_bHasEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Preconditions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Preconditions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Effectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Effectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Events_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_Events,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorNode_Statics::NewProp_ParentNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacBehaviorNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacBehaviorNode_Statics::ClassParams = {
	&UBehaviacBehaviorNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBehaviacBehaviorNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorNode_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacBehaviorNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacBehaviorNode()
{
	if (!Z_Registration_Info_UClass_UBehaviacBehaviorNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacBehaviorNode.OuterSingleton, Z_Construct_UClass_UBehaviacBehaviorNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacBehaviorNode.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacBehaviorNode>()
{
	return UBehaviacBehaviorNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacBehaviorNode);
UBehaviacBehaviorNode::~UBehaviacBehaviorNode() {}
// End Class UBehaviacBehaviorNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviacBehaviorNode, UBehaviacBehaviorNode::StaticClass, TEXT("UBehaviacBehaviorNode"), &Z_Registration_Info_UClass_UBehaviacBehaviorNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacBehaviorNode), 2959391576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h_1967416502(TEXT("/Script/BehaviacRuntime"),
	Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
