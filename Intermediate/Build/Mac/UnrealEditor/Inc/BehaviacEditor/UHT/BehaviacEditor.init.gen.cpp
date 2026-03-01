// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviacEditor_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BehaviacEditor;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BehaviacEditor()
	{
		if (!Z_Registration_Info_UPackage__Script_BehaviacEditor.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BehaviacEditor",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000040,
				0xE4C5849A,
				0x7079CCBE,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BehaviacEditor.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BehaviacEditor.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BehaviacEditor(Z_Construct_UPackage__Script_BehaviacEditor, TEXT("/Script/BehaviacEditor"), Z_Registration_Info_UPackage__Script_BehaviacEditor, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE4C5849A, 0x7079CCBE));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
