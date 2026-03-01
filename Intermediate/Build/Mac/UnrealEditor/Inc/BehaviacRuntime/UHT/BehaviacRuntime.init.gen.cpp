// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviacRuntime_init() {}
	BEHAVIACRUNTIME_API UFunction* Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature();
	BEHAVIACRUNTIME_API UFunction* Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BehaviacRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BehaviacRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_BehaviacRuntime.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacMethodDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BehaviacRuntime_BehaviacSignalDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BehaviacRuntime",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x419AD391,
				0xC8E4D633,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BehaviacRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BehaviacRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BehaviacRuntime(Z_Construct_UPackage__Script_BehaviacRuntime, TEXT("/Script/BehaviacRuntime"), Z_Registration_Info_UPackage__Script_BehaviacRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x419AD391, 0xC8E4D633));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
