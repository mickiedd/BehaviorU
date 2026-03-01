// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviacRuntime/Public/BehaviorTree/BehaviacBehaviorTree.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviacBehaviorTree() {}

// Begin Cross Module References
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorNode_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorTree();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorTree_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorTreeLibrary();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorTreeLibrary_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_BehaviacRuntime();
// End Cross Module References

// Begin Class UBehaviacBehaviorTree Function GetRootNode
struct Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics
{
	struct BehaviacBehaviorTree_eventGetRootNode_Parms
	{
		UBehaviacBehaviorNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|BehaviorTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the root node */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the root node" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacBehaviorTree_eventGetRootNode_Parms, ReturnValue), Z_Construct_UClass_UBehaviacBehaviorNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacBehaviorTree, nullptr, "GetRootNode", nullptr, nullptr, Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics::BehaviacBehaviorTree_eventGetRootNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics::BehaviacBehaviorTree_eventGetRootNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacBehaviorTree::execGetRootNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBehaviacBehaviorNode**)Z_Param__Result=P_THIS->GetRootNode();
	P_NATIVE_END;
}
// End Class UBehaviacBehaviorTree Function GetRootNode

// Begin Class UBehaviacBehaviorTree
void UBehaviacBehaviorTree::StaticRegisterNativesUBehaviacBehaviorTree()
{
	UClass* Class = UBehaviacBehaviorTree::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRootNode", &UBehaviacBehaviorTree::execGetRootNode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacBehaviorTree);
UClass* Z_Construct_UClass_UBehaviacBehaviorTree_NoRegister()
{
	return UBehaviacBehaviorTree::StaticClass();
}
struct Z_Construct_UClass_UBehaviacBehaviorTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UBehaviacBehaviorTree: Data asset representing a behavior tree definition.\n *\n * This is the UE5 equivalent of the original behaviac BehaviorTree class.\n * It can be created in the editor or imported from XML/BSON files.\n */" },
#endif
		{ "IncludePath", "BehaviorTree/BehaviacBehaviorTree.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UBehaviacBehaviorTree: Data asset representing a behavior tree definition.\n\nThis is the UE5 equivalent of the original behaviac BehaviorTree class.\nIt can be created in the editor or imported from XML/BSON files." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
		{ "Category", "Behaviac|BehaviorTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The root node of this behavior tree */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The root node of this behavior tree" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreeName_MetaData[] = {
		{ "Category", "Behaviac|BehaviorTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Human-readable name */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Human-readable name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[] = {
		{ "Category", "Behaviac|BehaviorTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Source file path (for imported trees) */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source file path (for imported trees)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "Category", "Behaviac|BehaviorTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Version number from the source file */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Version number from the source file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AgentType_MetaData[] = {
		{ "Category", "Behaviac|BehaviorTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Agent type this tree is designed for */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Agent type this tree is designed for" },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Behaviac|BehaviorTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Description for editor display */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description for editor display" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootNode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TreeName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AgentType;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviacBehaviorTree_GetRootNode, "GetRootNode" }, // 2784084614
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacBehaviorTree>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacBehaviorTree_Statics::NewProp_RootNode = { "RootNode", nullptr, (EPropertyFlags)0x001200000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorTree, RootNode), Z_Construct_UClass_UBehaviacBehaviorNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNode_MetaData), NewProp_RootNode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacBehaviorTree_Statics::NewProp_TreeName = { "TreeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorTree, TreeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreeName_MetaData), NewProp_TreeName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacBehaviorTree_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorTree, SourceFilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFilePath_MetaData), NewProp_SourceFilePath_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBehaviacBehaviorTree_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorTree, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacBehaviorTree_Statics::NewProp_AgentType = { "AgentType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorTree, AgentType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AgentType_MetaData), NewProp_AgentType_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacBehaviorTree_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacBehaviorTree, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacBehaviorTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorTree_Statics::NewProp_RootNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorTree_Statics::NewProp_TreeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorTree_Statics::NewProp_SourceFilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorTree_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorTree_Statics::NewProp_AgentType,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacBehaviorTree_Statics::NewProp_Description,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTree_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacBehaviorTree_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTree_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacBehaviorTree_Statics::ClassParams = {
	&UBehaviacBehaviorTree::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBehaviacBehaviorTree_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTree_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTree_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacBehaviorTree_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacBehaviorTree()
{
	if (!Z_Registration_Info_UClass_UBehaviacBehaviorTree.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacBehaviorTree.OuterSingleton, Z_Construct_UClass_UBehaviacBehaviorTree_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacBehaviorTree.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacBehaviorTree>()
{
	return UBehaviacBehaviorTree::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacBehaviorTree);
UBehaviacBehaviorTree::~UBehaviacBehaviorTree() {}
// End Class UBehaviacBehaviorTree

// Begin Class UBehaviacBehaviorTreeLibrary Function LoadBehaviorTreeFromFile
struct Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics
{
	struct BehaviacBehaviorTreeLibrary_eventLoadBehaviorTreeFromFile_Parms
	{
		UObject* WorldContext;
		FString FilePath;
		UBehaviacBehaviorTree* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|BehaviorTree" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Load a behavior tree from an XML file path */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load a behavior tree from an XML file path" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacBehaviorTreeLibrary_eventLoadBehaviorTreeFromFile_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacBehaviorTreeLibrary_eventLoadBehaviorTreeFromFile_Parms, FilePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilePath_MetaData), NewProp_FilePath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacBehaviorTreeLibrary_eventLoadBehaviorTreeFromFile_Parms, ReturnValue), Z_Construct_UClass_UBehaviacBehaviorTree_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::NewProp_FilePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacBehaviorTreeLibrary, nullptr, "LoadBehaviorTreeFromFile", nullptr, nullptr, Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::BehaviacBehaviorTreeLibrary_eventLoadBehaviorTreeFromFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::BehaviacBehaviorTreeLibrary_eventLoadBehaviorTreeFromFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacBehaviorTreeLibrary::execLoadBehaviorTreeFromFile)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBehaviacBehaviorTree**)Z_Param__Result=UBehaviacBehaviorTreeLibrary::LoadBehaviorTreeFromFile(Z_Param_WorldContext,Z_Param_FilePath);
	P_NATIVE_END;
}
// End Class UBehaviacBehaviorTreeLibrary Function LoadBehaviorTreeFromFile

// Begin Class UBehaviacBehaviorTreeLibrary
void UBehaviacBehaviorTreeLibrary::StaticRegisterNativesUBehaviacBehaviorTreeLibrary()
{
	UClass* Class = UBehaviacBehaviorTreeLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoadBehaviorTreeFromFile", &UBehaviacBehaviorTreeLibrary::execLoadBehaviorTreeFromFile },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacBehaviorTreeLibrary);
UClass* Z_Construct_UClass_UBehaviacBehaviorTreeLibrary_NoRegister()
{
	return UBehaviacBehaviorTreeLibrary::StaticClass();
}
struct Z_Construct_UClass_UBehaviacBehaviorTreeLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UBehaviacBehaviorTreeLibrary: Static library for behavior tree operations.\n */" },
#endif
		{ "IncludePath", "BehaviorTree/BehaviacBehaviorTree.h" },
		{ "ModuleRelativePath", "Public/BehaviorTree/BehaviacBehaviorTree.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UBehaviacBehaviorTreeLibrary: Static library for behavior tree operations." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviacBehaviorTreeLibrary_LoadBehaviorTreeFromFile, "LoadBehaviorTreeFromFile" }, // 3412527326
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacBehaviorTreeLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacBehaviorTreeLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTreeLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacBehaviorTreeLibrary_Statics::ClassParams = {
	&UBehaviacBehaviorTreeLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTreeLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacBehaviorTreeLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacBehaviorTreeLibrary()
{
	if (!Z_Registration_Info_UClass_UBehaviacBehaviorTreeLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacBehaviorTreeLibrary.OuterSingleton, Z_Construct_UClass_UBehaviacBehaviorTreeLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacBehaviorTreeLibrary.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacBehaviorTreeLibrary>()
{
	return UBehaviacBehaviorTreeLibrary::StaticClass();
}
UBehaviacBehaviorTreeLibrary::UBehaviacBehaviorTreeLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacBehaviorTreeLibrary);
UBehaviacBehaviorTreeLibrary::~UBehaviacBehaviorTreeLibrary() {}
// End Class UBehaviacBehaviorTreeLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviacBehaviorTree, UBehaviacBehaviorTree::StaticClass, TEXT("UBehaviacBehaviorTree"), &Z_Registration_Info_UClass_UBehaviacBehaviorTree, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacBehaviorTree), 2567954759U) },
		{ Z_Construct_UClass_UBehaviacBehaviorTreeLibrary, UBehaviacBehaviorTreeLibrary::StaticClass, TEXT("UBehaviacBehaviorTreeLibrary"), &Z_Registration_Info_UClass_UBehaviacBehaviorTreeLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacBehaviorTreeLibrary), 3440730221U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_2922689150(TEXT("/Script/BehaviacRuntime"),
	Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviorTree_BehaviacBehaviorTree_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
