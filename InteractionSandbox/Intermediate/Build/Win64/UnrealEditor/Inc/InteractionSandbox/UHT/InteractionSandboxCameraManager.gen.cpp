// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSandboxCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractionSandboxCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
INTERACTIONSANDBOX_API UClass* Z_Construct_UClass_AInteractionSandboxCameraManager();
INTERACTIONSANDBOX_API UClass* Z_Construct_UClass_AInteractionSandboxCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractionSandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractionSandboxCameraManager *****************************************
void AInteractionSandboxCameraManager::StaticRegisterNativesAInteractionSandboxCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractionSandboxCameraManager;
UClass* AInteractionSandboxCameraManager::GetPrivateStaticClass()
{
	using TClass = AInteractionSandboxCameraManager;
	if (!Z_Registration_Info_UClass_AInteractionSandboxCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractionSandboxCameraManager"),
			Z_Registration_Info_UClass_AInteractionSandboxCameraManager.InnerSingleton,
			StaticRegisterNativesAInteractionSandboxCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AInteractionSandboxCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractionSandboxCameraManager_NoRegister()
{
	return AInteractionSandboxCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractionSandboxCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "InteractionSandboxCameraManager.h" },
		{ "ModuleRelativePath", "InteractionSandboxCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionSandboxCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInteractionSandboxCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionSandboxCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractionSandboxCameraManager_Statics::ClassParams = {
	&AInteractionSandboxCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionSandboxCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractionSandboxCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractionSandboxCameraManager()
{
	if (!Z_Registration_Info_UClass_AInteractionSandboxCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractionSandboxCameraManager.OuterSingleton, Z_Construct_UClass_AInteractionSandboxCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractionSandboxCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionSandboxCameraManager);
AInteractionSandboxCameraManager::~AInteractionSandboxCameraManager() {}
// ********** End Class AInteractionSandboxCameraManager *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCameraManager_h__Script_InteractionSandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractionSandboxCameraManager, AInteractionSandboxCameraManager::StaticClass, TEXT("AInteractionSandboxCameraManager"), &Z_Registration_Info_UClass_AInteractionSandboxCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractionSandboxCameraManager), 1549367734U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCameraManager_h__Script_InteractionSandbox_4264617036(TEXT("/Script/InteractionSandbox"),
	Z_CompiledInDeferFile_FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCameraManager_h__Script_InteractionSandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCameraManager_h__Script_InteractionSandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
