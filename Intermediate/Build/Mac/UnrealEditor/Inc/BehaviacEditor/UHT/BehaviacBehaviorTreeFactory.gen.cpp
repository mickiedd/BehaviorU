// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviacEditor/Public/BehaviacBehaviorTreeFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviacBehaviorTreeFactory() {}

// Begin Cross Module References
BEHAVIACEDITOR_API UClass* Z_Construct_UClass_UBehaviacBehaviorTreeFactory();
BEHAVIACEDITOR_API UClass* Z_Construct_UClass_UBehaviacBehaviorTreeFactory_NoRegister();
BEHAVIACEDITOR_API UClass* Z_Construct_UClass_UBehaviacBehaviorTreeImportFactory();
BEHAVIACEDITOR_API UClass* Z_Construct_UClass_UBehaviacBehaviorTreeImportFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_BehaviacEditor();
// End Cross Module References

// Begin Class UBehaviacBehaviorTreeFactory
void UBehaviacBehaviorTreeFactory::StaticRegisterNativesUBehaviacBehaviorTreeFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacBehaviorTreeFactory);
UClass* Z_Construct_UClass_UBehaviacBehaviorTreeFactory_NoRegister()
{
	return UBehaviacBehaviorTreeFactory::StaticClass();
}
struct Z_Construct_UClass_UBehaviacBehaviorTreeFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Factory for creating UBehaviacBehaviorTree assets in the editor.\n * Supports creating new empty trees and importing from XML files.\n */" },
#endif
		{ "IncludePath", "BehaviacBehaviorTreeFactory.h" },
		{ "ModuleRelativePath", "Public/BehaviacBehaviorTreeFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factory for creating UBehaviacBehaviorTree assets in the editor.\nSupports creating new empty trees and importing from XML files." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacBehaviorTreeFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacBehaviorTreeFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTreeFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacBehaviorTreeFactory_Statics::ClassParams = {
	&UBehaviacBehaviorTreeFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTreeFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacBehaviorTreeFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacBehaviorTreeFactory()
{
	if (!Z_Registration_Info_UClass_UBehaviacBehaviorTreeFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacBehaviorTreeFactory.OuterSingleton, Z_Construct_UClass_UBehaviacBehaviorTreeFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacBehaviorTreeFactory.OuterSingleton;
}
template<> BEHAVIACEDITOR_API UClass* StaticClass<UBehaviacBehaviorTreeFactory>()
{
	return UBehaviacBehaviorTreeFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacBehaviorTreeFactory);
UBehaviacBehaviorTreeFactory::~UBehaviacBehaviorTreeFactory() {}
// End Class UBehaviacBehaviorTreeFactory

// Begin Class UBehaviacBehaviorTreeImportFactory
void UBehaviacBehaviorTreeImportFactory::StaticRegisterNativesUBehaviacBehaviorTreeImportFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviacBehaviorTreeImportFactory);
UClass* Z_Construct_UClass_UBehaviacBehaviorTreeImportFactory_NoRegister()
{
	return UBehaviacBehaviorTreeImportFactory::StaticClass();
}
struct Z_Construct_UClass_UBehaviacBehaviorTreeImportFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Factory for importing XML behavior tree files into UBehaviacBehaviorTree assets.\n * Supports both initial import and reimport from XML.\n */" },
#endif
		{ "IncludePath", "BehaviacBehaviorTreeFactory.h" },
		{ "ModuleRelativePath", "Public/BehaviacBehaviorTreeFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Factory for importing XML behavior tree files into UBehaviacBehaviorTree assets.\nSupports both initial import and reimport from XML." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviacBehaviorTreeImportFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBehaviacBehaviorTreeImportFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_BehaviacEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTreeImportFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviacBehaviorTreeImportFactory_Statics::ClassParams = {
	&UBehaviacBehaviorTreeImportFactory::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviacBehaviorTreeImportFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UBehaviacBehaviorTreeImportFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBehaviacBehaviorTreeImportFactory()
{
	if (!Z_Registration_Info_UClass_UBehaviacBehaviorTreeImportFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviacBehaviorTreeImportFactory.OuterSingleton, Z_Construct_UClass_UBehaviacBehaviorTreeImportFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBehaviacBehaviorTreeImportFactory.OuterSingleton;
}
template<> BEHAVIACEDITOR_API UClass* StaticClass<UBehaviacBehaviorTreeImportFactory>()
{
	return UBehaviacBehaviorTreeImportFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviacBehaviorTreeImportFactory);
UBehaviacBehaviorTreeImportFactory::~UBehaviacBehaviorTreeImportFactory() {}
// End Class UBehaviacBehaviorTreeImportFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacEditor_Public_BehaviacBehaviorTreeFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviacBehaviorTreeFactory, UBehaviacBehaviorTreeFactory::StaticClass, TEXT("UBehaviacBehaviorTreeFactory"), &Z_Registration_Info_UClass_UBehaviacBehaviorTreeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacBehaviorTreeFactory), 1658284853U) },
		{ Z_Construct_UClass_UBehaviacBehaviorTreeImportFactory, UBehaviacBehaviorTreeImportFactory::StaticClass, TEXT("UBehaviacBehaviorTreeImportFactory"), &Z_Registration_Info_UClass_UBehaviacBehaviorTreeImportFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviacBehaviorTreeImportFactory), 1041084199U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacEditor_Public_BehaviacBehaviorTreeFactory_h_2829582561(TEXT("/Script/BehaviacEditor"),
	Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacEditor_Public_BehaviacBehaviorTreeFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Works_Crunch_master_Plugins_BehaviacPlugin_Source_BehaviacEditor_Public_BehaviacBehaviorTreeFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
