// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviacRuntime/Public/BehaviacAgent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviacAgent() {}

// Begin Cross Module References
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacAgentComponent();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacAgentComponent_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorTree_NoRegister();
BEHAVIACRUNTIME_API UClass* Z_Construct_UClass_UBehaviacBehaviorTreeTask_NoRegister();
BEHAVIACRUNTIME_API UEnum* Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus();
BEHAVIACRUNTIME_API UFunction* Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature();
BEHAVIACRUNTIME_API UFunction* Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_BehaviacRuntime();
// End Cross Module References

// Begin Delegate FBehaviacMethodDelegate
struct Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics
{
	struct _Script_BehaviacRuntime_eventBehaviacMethodDelegate_Parms
	{
		FString MethodName;
		EBehaviacStatus OutResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MethodName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MethodName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutResult_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::NewProp_MethodName = { "MethodName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BehaviacRuntime_eventBehaviacMethodDelegate_Parms, MethodName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MethodName_MetaData), NewProp_MethodName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::NewProp_OutResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BehaviacRuntime_eventBehaviacMethodDelegate_Parms, OutResult), Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus, METADATA_PARAMS(0, nullptr) }; // 4195475470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::NewProp_MethodName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::NewProp_OutResult_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::NewProp_OutResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BehaviacRuntime, nullptr, "BehaviacMethodDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::_Script_BehaviacRuntime_eventBehaviacMethodDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::_Script_BehaviacRuntime_eventBehaviacMethodDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBehaviacMethodDelegate_DelegateWrapper(const FMulticastScriptDelegate& BehaviacMethodDelegate, const FString& MethodName, EBehaviacStatus& OutResult)
{
	struct _Script_BehaviacRuntime_eventBehaviacMethodDelegate_Parms
	{
		FString MethodName;
		EBehaviacStatus OutResult;
	};
	_Script_BehaviacRuntime_eventBehaviacMethodDelegate_Parms Parms;
	Parms.MethodName=MethodName;
	Parms.OutResult=OutResult;
	BehaviacMethodDelegate.ProcessMulticastDelegate<UObject>(&Parms);
	OutResult=Parms.OutResult;
}
// End Delegate FBehaviacMethodDelegate

// Begin Delegate FBehaviacSignalDelegate
struct Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics
{
	struct _Script_BehaviacRuntime_eventBehaviacSignalDelegate_Parms
	{
		FString SignalName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SignalName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics::NewProp_SignalName = { "SignalName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BehaviacRuntime_eventBehaviacSignalDelegate_Parms, SignalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignalName_MetaData), NewProp_SignalName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics::NewProp_SignalName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BehaviacRuntime, nullptr, "BehaviacSignalDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics::_Script_BehaviacRuntime_eventBehaviacSignalDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics::_Script_BehaviacRuntime_eventBehaviacSignalDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBehaviacSignalDelegate_DelegateWrapper(const FMulticastScriptDelegate& BehaviacSignalDelegate, const FString& SignalName)
{
	struct _Script_BehaviacRuntime_eventBehaviacSignalDelegate_Parms
	{
		FString SignalName;
	};
	_Script_BehaviacRuntime_eventBehaviacSignalDelegate_Parms Parms;
	Parms.SignalName=SignalName;
	BehaviacSignalDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FBehaviacSignalDelegate

// Begin Class UBehaviacAgentComponent Function ClearAllSignals
struct Z_Construct_UFunction_UBehaviacAgentComponent_ClearAllSignals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Signals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear all signals */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear all signals" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_ClearAllSignals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "ClearAllSignals", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_ClearAllSignals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_ClearAllSignals_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_ClearAllSignals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_ClearAllSignals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execClearAllSignals)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAllSignals();
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function ClearAllSignals

// Begin Class UBehaviacAgentComponent Function ClearSignal
struct Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics
{
	struct BehaviacAgentComponent_eventClearSignal_Parms
	{
		FString SignalName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Signals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear a signal */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear a signal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SignalName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics::NewProp_SignalName = { "SignalName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventClearSignal_Parms, SignalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignalName_MetaData), NewProp_SignalName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics::NewProp_SignalName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "ClearSignal", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics::BehaviacAgentComponent_eventClearSignal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics::BehaviacAgentComponent_eventClearSignal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execClearSignal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SignalName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearSignal(Z_Param_SignalName);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function ClearSignal

// Begin Class UBehaviacAgentComponent Function ExecuteMethod
struct Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics
{
	struct BehaviacAgentComponent_eventExecuteMethod_Parms
	{
		FString MethodName;
		EBehaviacStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Methods" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Execute a named method on this agent. Override in Blueprints or bind delegates. */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute a named method on this agent. Override in Blueprints or bind delegates." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MethodName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MethodName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::NewProp_MethodName = { "MethodName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventExecuteMethod_Parms, MethodName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MethodName_MetaData), NewProp_MethodName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventExecuteMethod_Parms, ReturnValue), Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus, METADATA_PARAMS(0, nullptr) }; // 4195475470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::NewProp_MethodName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "ExecuteMethod", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::BehaviacAgentComponent_eventExecuteMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::BehaviacAgentComponent_eventExecuteMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execExecuteMethod)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_MethodName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EBehaviacStatus*)Z_Param__Result=P_THIS->ExecuteMethod(Z_Param_MethodName);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function ExecuteMethod

// Begin Class UBehaviacAgentComponent Function FireEvent
struct Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics
{
	struct BehaviacAgentComponent_eventFireEvent_Parms
	{
		FString EventName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fire a named event on this agent (for event attachments) */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fire a named event on this agent (for event attachments)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EventName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventFireEvent_Parms, EventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventName_MetaData), NewProp_EventName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics::NewProp_EventName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "FireEvent", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics::BehaviacAgentComponent_eventFireEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics::BehaviacAgentComponent_eventFireEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execFireEvent)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FireEvent(Z_Param_EventName);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function FireEvent

// Begin Class UBehaviacAgentComponent Function GetBehaviorTreeStatus
struct Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics
{
	struct BehaviacAgentComponent_eventGetBehaviorTreeStatus_Parms
	{
		EBehaviacStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Agent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the current behavior tree status */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current behavior tree status" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventGetBehaviorTreeStatus_Parms, ReturnValue), Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus, METADATA_PARAMS(0, nullptr) }; // 4195475470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "GetBehaviorTreeStatus", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::BehaviacAgentComponent_eventGetBehaviorTreeStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::BehaviacAgentComponent_eventGetBehaviorTreeStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execGetBehaviorTreeStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EBehaviacStatus*)Z_Param__Result=P_THIS->GetBehaviorTreeStatus();
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function GetBehaviorTreeStatus

// Begin Class UBehaviacAgentComponent Function GetBoolProperty
struct Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics
{
	struct BehaviacAgentComponent_eventGetBoolProperty_Parms
	{
		FString PropertyName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get a boolean property */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a boolean property" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventGetBoolProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
void Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BehaviacAgentComponent_eventGetBoolProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BehaviacAgentComponent_eventGetBoolProperty_Parms), &Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "GetBoolProperty", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::BehaviacAgentComponent_eventGetBoolProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::BehaviacAgentComponent_eventGetBoolProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execGetBoolProperty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolProperty(Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function GetBoolProperty

// Begin Class UBehaviacAgentComponent Function GetFloatProperty
struct Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics
{
	struct BehaviacAgentComponent_eventGetFloatProperty_Parms
	{
		FString PropertyName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get a float property */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a float property" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventGetFloatProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventGetFloatProperty_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "GetFloatProperty", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::BehaviacAgentComponent_eventGetFloatProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::BehaviacAgentComponent_eventGetFloatProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execGetFloatProperty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFloatProperty(Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function GetFloatProperty

// Begin Class UBehaviacAgentComponent Function GetIntProperty
struct Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics
{
	struct BehaviacAgentComponent_eventGetIntProperty_Parms
	{
		FString PropertyName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get an integer property */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get an integer property" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventGetIntProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventGetIntProperty_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "GetIntProperty", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::BehaviacAgentComponent_eventGetIntProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::BehaviacAgentComponent_eventGetIntProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execGetIntProperty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetIntProperty(Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function GetIntProperty

// Begin Class UBehaviacAgentComponent Function GetPropertyValue
struct Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics
{
	struct BehaviacAgentComponent_eventGetPropertyValue_Parms
	{
		FString PropertyName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get a property value by name */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get a property value by name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventGetPropertyValue_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventGetPropertyValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "GetPropertyValue", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::BehaviacAgentComponent_eventGetPropertyValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::BehaviacAgentComponent_eventGetPropertyValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execGetPropertyValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetPropertyValue(Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function GetPropertyValue

// Begin Class UBehaviacAgentComponent Function HasProperty
struct Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics
{
	struct BehaviacAgentComponent_eventHasProperty_Parms
	{
		FString PropertyName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if a property exists */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a property exists" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventHasProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
void Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BehaviacAgentComponent_eventHasProperty_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BehaviacAgentComponent_eventHasProperty_Parms), &Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "HasProperty", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::BehaviacAgentComponent_eventHasProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::BehaviacAgentComponent_eventHasProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execHasProperty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasProperty(Z_Param_PropertyName);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function HasProperty

// Begin Class UBehaviacAgentComponent Function IsSignalSet
struct Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics
{
	struct BehaviacAgentComponent_eventIsSignalSet_Parms
	{
		FString SignalName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Signals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if a signal has been set */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if a signal has been set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SignalName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::NewProp_SignalName = { "SignalName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventIsSignalSet_Parms, SignalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignalName_MetaData), NewProp_SignalName_MetaData) };
void Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BehaviacAgentComponent_eventIsSignalSet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BehaviacAgentComponent_eventIsSignalSet_Parms), &Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::NewProp_SignalName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "IsSignalSet", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::BehaviacAgentComponent_eventIsSignalSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::BehaviacAgentComponent_eventIsSignalSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execIsSignalSet)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SignalName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSignalSet(Z_Param_SignalName);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function IsSignalSet

// Begin Class UBehaviacAgentComponent Function LoadBehaviorTree
struct Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics
{
	struct BehaviacAgentComponent_eventLoadBehaviorTree_Parms
	{
		UBehaviacBehaviorTree* TreeAsset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Agent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Load and start a behavior tree from an asset */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load and start a behavior tree from an asset" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TreeAsset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::NewProp_TreeAsset = { "TreeAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventLoadBehaviorTree_Parms, TreeAsset), Z_Construct_UClass_UBehaviacBehaviorTree_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BehaviacAgentComponent_eventLoadBehaviorTree_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BehaviacAgentComponent_eventLoadBehaviorTree_Parms), &Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::NewProp_TreeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "LoadBehaviorTree", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::BehaviacAgentComponent_eventLoadBehaviorTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::BehaviacAgentComponent_eventLoadBehaviorTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execLoadBehaviorTree)
{
	P_GET_OBJECT(UBehaviacBehaviorTree,Z_Param_TreeAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadBehaviorTree(Z_Param_TreeAsset);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function LoadBehaviorTree

// Begin Class UBehaviacAgentComponent Function LoadBehaviorTreeByPath
struct Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics
{
	struct BehaviacAgentComponent_eventLoadBehaviorTreeByPath_Parms
	{
		FString RelativePath;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Agent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Load a behavior tree by relative path (for XML/BSON loading) */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Load a behavior tree by relative path (for XML/BSON loading)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_RelativePath;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::NewProp_RelativePath = { "RelativePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventLoadBehaviorTreeByPath_Parms, RelativePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativePath_MetaData), NewProp_RelativePath_MetaData) };
void Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BehaviacAgentComponent_eventLoadBehaviorTreeByPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BehaviacAgentComponent_eventLoadBehaviorTreeByPath_Parms), &Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::NewProp_RelativePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "LoadBehaviorTreeByPath", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::BehaviacAgentComponent_eventLoadBehaviorTreeByPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::BehaviacAgentComponent_eventLoadBehaviorTreeByPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execLoadBehaviorTreeByPath)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_RelativePath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->LoadBehaviorTreeByPath(Z_Param_RelativePath);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function LoadBehaviorTreeByPath

// Begin Class UBehaviacAgentComponent Function OnExecuteMethod
struct BehaviacAgentComponent_eventOnExecuteMethod_Parms
{
	FString MethodName;
	EBehaviacStatus ReturnValue;

	/** Constructor, initializes return property only **/
	BehaviacAgentComponent_eventOnExecuteMethod_Parms()
		: ReturnValue((EBehaviacStatus)0)
	{
	}
};
static const FName NAME_UBehaviacAgentComponent_OnExecuteMethod = FName(TEXT("OnExecuteMethod"));
EBehaviacStatus UBehaviacAgentComponent::OnExecuteMethod(const FString& MethodName)
{
	BehaviacAgentComponent_eventOnExecuteMethod_Parms Parms;
	Parms.MethodName=MethodName;
	UFunction* Func = FindFunctionChecked(NAME_UBehaviacAgentComponent_OnExecuteMethod);
	ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Methods" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Blueprint event called when a method needs to be executed */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint event called when a method needs to be executed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MethodName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MethodName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::NewProp_MethodName = { "MethodName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventOnExecuteMethod_Parms, MethodName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MethodName_MetaData), NewProp_MethodName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventOnExecuteMethod_Parms, ReturnValue), Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus, METADATA_PARAMS(0, nullptr) }; // 4195475470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::NewProp_MethodName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "OnExecuteMethod", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::PropPointers), sizeof(BehaviacAgentComponent_eventOnExecuteMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(BehaviacAgentComponent_eventOnExecuteMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UBehaviacAgentComponent Function OnExecuteMethod

// Begin Class UBehaviacAgentComponent Function ResetBehaviorTree
struct Z_Construct_UFunction_UBehaviacAgentComponent_ResetBehaviorTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Agent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset the current behavior tree to its initial state */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset the current behavior tree to its initial state" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_ResetBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "ResetBehaviorTree", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_ResetBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_ResetBehaviorTree_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_ResetBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_ResetBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execResetBehaviorTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetBehaviorTree();
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function ResetBehaviorTree

// Begin Class UBehaviacAgentComponent Function SendSignal
struct Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics
{
	struct BehaviacAgentComponent_eventSendSignal_Parms
	{
		FString SignalName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Signals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Send a signal to this agent */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a signal to this agent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SignalName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SignalName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics::NewProp_SignalName = { "SignalName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventSendSignal_Parms, SignalName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SignalName_MetaData), NewProp_SignalName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics::NewProp_SignalName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "SendSignal", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics::BehaviacAgentComponent_eventSendSignal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics::BehaviacAgentComponent_eventSendSignal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execSendSignal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_SignalName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendSignal(Z_Param_SignalName);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function SendSignal

// Begin Class UBehaviacAgentComponent Function SetBoolProperty
struct Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics
{
	struct BehaviacAgentComponent_eventSetBoolProperty_Parms
	{
		FString PropertyName;
		bool Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set a boolean property */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a boolean property" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventSetBoolProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
void Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::NewProp_Value_SetBit(void* Obj)
{
	((BehaviacAgentComponent_eventSetBoolProperty_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BehaviacAgentComponent_eventSetBoolProperty_Parms), &Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "SetBoolProperty", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::BehaviacAgentComponent_eventSetBoolProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::BehaviacAgentComponent_eventSetBoolProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execSetBoolProperty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBoolProperty(Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function SetBoolProperty

// Begin Class UBehaviacAgentComponent Function SetFloatProperty
struct Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics
{
	struct BehaviacAgentComponent_eventSetFloatProperty_Parms
	{
		FString PropertyName;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set a float property */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a float property" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventSetFloatProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventSetFloatProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "SetFloatProperty", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::BehaviacAgentComponent_eventSetFloatProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::BehaviacAgentComponent_eventSetFloatProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execSetFloatProperty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFloatProperty(Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function SetFloatProperty

// Begin Class UBehaviacAgentComponent Function SetIntProperty
struct Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics
{
	struct BehaviacAgentComponent_eventSetIntProperty_Parms
	{
		FString PropertyName;
		int32 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set an integer property */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set an integer property" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventSetIntProperty_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventSetIntProperty_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "SetIntProperty", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::BehaviacAgentComponent_eventSetIntProperty_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::BehaviacAgentComponent_eventSetIntProperty_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execSetIntProperty)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIntProperty(Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function SetIntProperty

// Begin Class UBehaviacAgentComponent Function SetPropertyValue
struct Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics
{
	struct BehaviacAgentComponent_eventSetPropertyValue_Parms
	{
		FString PropertyName;
		FString Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Properties" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set a property value by name */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set a property value by name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventSetPropertyValue_Parms, PropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertyName_MetaData), NewProp_PropertyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventSetPropertyValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "SetPropertyValue", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::BehaviacAgentComponent_eventSetPropertyValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::BehaviacAgentComponent_eventSetPropertyValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execSetPropertyValue)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPropertyValue(Z_Param_PropertyName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function SetPropertyValue

// Begin Class UBehaviacAgentComponent Function StopBehaviorTree
struct Z_Construct_UFunction_UBehaviacAgentComponent_StopBehaviorTree_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Agent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Stop and unload the current behavior tree */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stop and unload the current behavior tree" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_StopBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "StopBehaviorTree", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_StopBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_StopBehaviorTree_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_StopBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_StopBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execStopBehaviorTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopBehaviorTree();
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function StopBehaviorTree

// Begin Class UBehaviacAgentComponent Function TickBehaviorTree
struct Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics
{
	struct BehaviacAgentComponent_eventTickBehaviorTree_Parms
	{
		EBehaviacStatus ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Behaviac|Agent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Execute one tick of the current behavior tree */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute one tick of the current behavior tree" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BehaviacAgentComponent_eventTickBehaviorTree_Parms, ReturnValue), Z_Construct_UEnum_BehaviacRuntime_EBehaviacStatus, METADATA_PARAMS(0, nullptr) }; // 4195475470
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBehaviacAgentComponent, nullptr, "TickBehaviorTree", nullptr, nullptr, Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::BehaviacAgentComponent_eventTickBehaviorTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::BehaviacAgentComponent_eventTickBehaviorTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBehaviacAgentComponent::execTickBehaviorTree)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EBehaviacStatus*)Z_Param__Result=P_THIS->TickBehaviorTree();
	P_NATIVE_END;
}
// End Class UBehaviacAgentComponent Function TickBehaviorTree

// Begin Class UBehaviacAgentComponent
void UBehaviacAgentComponent::StaticRegisterNativesUBehaviacAgentComponent()
{
	UClass* Class = UBehaviacAgentComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearAllSignals", &UBehaviacAgentComponent::execClearAllSignals },
		{ "ClearSignal", &UBehaviacAgentComponent::execClearSignal },
		{ "ExecuteMethod", &UBehaviacAgentComponent::execExecuteMethod },
		{ "FireEvent", &UBehaviacAgentComponent::execFireEvent },
		{ "GetBehaviorTreeStatus", &UBehaviacAgentComponent::execGetBehaviorTreeStatus },
		{ "GetBoolProperty", &UBehaviacAgentComponent::execGetBoolProperty },
		{ "GetFloatProperty", &UBehaviacAgentComponent::execGetFloatProperty },
		{ "GetIntProperty", &UBehaviacAgentComponent::execGetIntProperty },
		{ "GetPropertyValue", &UBehaviacAgentComponent::execGetPropertyValue },
		{ "HasProperty", &UBehaviacAgentComponent::execHasProperty },
		{ "IsSignalSet", &UBehaviacAgentComponent::execIsSignalSet },
		{ "LoadBehaviorTree", &UBehaviacAgentComponent::execLoadBehaviorTree },
		{ "LoadBehaviorTreeByPath", &UBehaviacAgentComponent::execLoadBehaviorTreeByPath },
		{ "ResetBehaviorTree", &UBehaviacAgentComponent::execResetBehaviorTree },
		{ "SendSignal", &UBehaviacAgentComponent::execSendSignal },
		{ "SetBoolProperty", &UBehaviacAgentComponent::execSetBoolProperty },
		{ "SetFloatProperty", &UBehaviacAgentComponent::execSetFloatProperty },
		{ "SetIntProperty", &UBehaviacAgentComponent::execSetIntProperty },
		{ "SetPropertyValue", &UBehaviacAgentComponent::execSetPropertyValue },
		{ "StopBehaviorTree", &UBehaviacAgentComponent::execStopBehaviorTree },
		{ "TickBehaviorTree", &UBehaviacAgentComponent::execTickBehaviorTree },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacAgentComponent);
UClass* Z_Construct_UClass_UBehaviacAgentComponent_NoRegister()
{
	return UBehaviacAgentComponent::StaticClass();
}
struct Z_Construct_UClass_UBehaviacAgentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UBehaviacAgentComponent: The central AI agent component for Unreal Engine 5.\n *\n * Attach this to any Actor to give it behavior tree / FSM / HTN capabilities.\n * This replaces the original behaviac Agent class, integrated as a UActorComponent.\n *\n * Features:\n * - Load and execute behavior trees by asset path\n * - Property system (blackboard-like key/value store)\n * - Method binding via delegates and Blueprint events\n * - Signal system for WaitForSignal nodes\n * - Multiple behavior tree support (stack)\n */" },
#endif
		{ "DisplayName", "Behaviac Agent" },
		{ "IncludePath", "BehaviacAgent.h" },
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UBehaviacAgentComponent: The central AI agent component for Unreal Engine 5.\n\nAttach this to any Actor to give it behavior tree / FSM / HTN capabilities.\nThis replaces the original behaviac Agent class, integrated as a UActorComponent.\n\nFeatures:\n- Load and execute behavior trees by asset path\n- Property system (blackboard-like key/value store)\n- Method binding via delegates and Blueprint events\n- Signal system for WaitForSignal nodes\n- Multiple behavior tree support (stack)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoTick_MetaData[] = {
		{ "Category", "Behaviac|Agent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Whether automatic ticking is enabled */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether automatic ticking is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBehaviorTree_MetaData[] = {
		{ "Category", "Behaviac|Agent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The default behavior tree to load on BeginPlay */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default behavior tree to load on BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMethodCalled_MetaData[] = {
		{ "Category", "Behaviac|Methods" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate for binding method implementations from C++ */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for binding method implementations from C++" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSignalReceived_MetaData[] = {
		{ "Category", "Behaviac|Signals" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate fired when a signal is received */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when a signal is received" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Property storage (blackboard) */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Property storage (blackboard)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSignals_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Active signals */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active signals" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingEvents_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pending events */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pending events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTreeTask_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Current behavior tree task (runtime execution) */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current behavior tree task (runtime execution)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTreeAsset_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Loaded behavior tree definition */" },
#endif
		{ "ModuleRelativePath", "Public/BehaviacAgent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loaded behavior tree definition" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bAutoTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoTick;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBehaviorTree;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMethodCalled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSignalReceived;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Properties_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Properties_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Properties;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActiveSignals_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ActiveSignals;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PendingEvents_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_PendingEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTreeTask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTreeAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_ClearAllSignals, "ClearAllSignals" }, // 675322578
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_ClearSignal, "ClearSignal" }, // 3694592702
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_ExecuteMethod, "ExecuteMethod" }, // 2759382004
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_FireEvent, "FireEvent" }, // 3160154548
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_GetBehaviorTreeStatus, "GetBehaviorTreeStatus" }, // 3992332730
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_GetBoolProperty, "GetBoolProperty" }, // 4282639641
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_GetFloatProperty, "GetFloatProperty" }, // 3429472545
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_GetIntProperty, "GetIntProperty" }, // 3181846351
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_GetPropertyValue, "GetPropertyValue" }, // 442618224
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_HasProperty, "HasProperty" }, // 3448894060
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_IsSignalSet, "IsSignalSet" }, // 1993013772
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTree, "LoadBehaviorTree" }, // 3333676955
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_LoadBehaviorTreeByPath, "LoadBehaviorTreeByPath" }, // 4061215724
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_OnExecuteMethod, "OnExecuteMethod" }, // 229382907
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_ResetBehaviorTree, "ResetBehaviorTree" }, // 3628259289
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_SendSignal, "SendSignal" }, // 3982292667
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_SetBoolProperty, "SetBoolProperty" }, // 1336648047
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_SetFloatProperty, "SetFloatProperty" }, // 603115787
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_SetIntProperty, "SetIntProperty" }, // 2350479421
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_SetPropertyValue, "SetPropertyValue" }, // 2326831282
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_StopBehaviorTree, "StopBehaviorTree" }, // 844802500
		{ &Z_Construct_UFunction_UBehaviacAgentComponent_TickBehaviorTree, "TickBehaviorTree" }, // 2757026438
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacAgentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_bAutoTick_SetBit(void* Obj)
{
	((UBehaviacAgentComponent*)Obj)->bAutoTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_bAutoTick = { "bAutoTick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBehaviacAgentComponent), &Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_bAutoTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoTick_MetaData), NewProp_bAutoTick_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_DefaultBehaviorTree = { "DefaultBehaviorTree", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAgentComponent, DefaultBehaviorTree), Z_Construct_UClass_UBehaviacBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBehaviorTree_MetaData), NewProp_DefaultBehaviorTree_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_OnMethodCalled = { "OnMethodCalled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAgentComponent, OnMethodCalled), Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMethodCalled_MetaData), NewProp_OnMethodCalled_MetaData) }; // 1518369416
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_OnSignalReceived = { "OnSignalReceived", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAgentComponent, OnSignalReceived), Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSignalReceived_MetaData), NewProp_OnSignalReceived_MetaData) }; // 2729649437
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_Properties_ValueProp = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_Properties_Key_KeyProp = { "Properties_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAgentComponent, Properties), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Properties_MetaData), NewProp_Properties_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_ActiveSignals_ElementProp = { "ActiveSignals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_ActiveSignals = { "ActiveSignals", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAgentComponent, ActiveSignals), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveSignals_MetaData), NewProp_ActiveSignals_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_PendingEvents_ElementProp = { "PendingEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_PendingEvents = { "PendingEvents", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAgentComponent, PendingEvents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingEvents_MetaData), NewProp_PendingEvents_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_CurrentTreeTask = { "CurrentTreeTask", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAgentComponent, CurrentTreeTask), Z_Construct_UClass_UBehaviacBehaviorTreeTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTreeTask_MetaData), NewProp_CurrentTreeTask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_CurrentTreeAsset = { "CurrentTreeAsset", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBehaviacAgentComponent, CurrentTreeAsset), Z_Construct_UClass_UBehaviacBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTreeAsset_MetaData), NewProp_CurrentTreeAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBehaviacAgentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_bAutoTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_DefaultBehaviorTree,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_OnMethodCalled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_OnSignalReceived,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_Properties_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_Properties_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_Properties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_ActiveSignals_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_ActiveSignals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_PendingEvents_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_PendingEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_CurrentTreeTask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBehaviacAgentComponent_Statics::NewProp_CurrentTreeAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAgentComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBehaviacAgentComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAgentComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacAgentComponent_Statics::ClassParams = {
	&UBehaviacAgentComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBehaviacAgentComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAgentComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacAgentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacAgentComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacAgentComponent()
{
	if (!Z_Registration_Info_UClass_UBehaviacAgentComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacAgentComponent.OuterSingleton, Z_Construct_UClass_UBehaviacAgentComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacAgentComponent.OuterSingleton;
}
template<> BEHAVIACRUNTIME_API UClass* StaticClass<UBehaviacAgentComponent>()
{
	return UBehaviacAgentComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacAgentComponent);
UBehaviacAgentComponent::~UBehaviacAgentComponent() {}
// End Class UBehaviacAgentComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviacAgentComponent, UBehaviacAgentComponent::StaticClass, TEXT("UBehaviacAgentComponent"), &Z_Registration_Info_UClass_UBehaviacAgentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacAgentComponent), 2769070051U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_1851779961(TEXT("/Script/BehaviacRuntime"),
	Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacRuntime_Public_BehaviacAgent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
