// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionSandboxGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractionSandboxGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
INTERACTIONSANDBOX_API UClass* Z_Construct_UClass_AInteractionSandboxGameMode();
INTERACTIONSANDBOX_API UClass* Z_Construct_UClass_AInteractionSandboxGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractionSandbox();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractionSandboxGameMode **********************************************
void AInteractionSandboxGameMode::StaticRegisterNativesAInteractionSandboxGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractionSandboxGameMode;
UClass* AInteractionSandboxGameMode::GetPrivateStaticClass()
{
	using TClass = AInteractionSandboxGameMode;
	if (!Z_Registration_Info_UClass_AInteractionSandboxGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractionSandboxGameMode"),
			Z_Registration_Info_UClass_AInteractionSandboxGameMode.InnerSingleton,
			StaticRegisterNativesAInteractionSandboxGameMode,
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
	return Z_Registration_Info_UClass_AInteractionSandboxGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractionSandboxGameMode_NoRegister()
{
	return AInteractionSandboxGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractionSandboxGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "InteractionSandboxGameMode.h" },
		{ "ModuleRelativePath", "InteractionSandboxGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionSandboxGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AInteractionSandboxGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionSandbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionSandboxGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractionSandboxGameMode_Statics::ClassParams = {
	&AInteractionSandboxGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionSandboxGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractionSandboxGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractionSandboxGameMode()
{
	if (!Z_Registration_Info_UClass_AInteractionSandboxGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractionSandboxGameMode.OuterSingleton, Z_Construct_UClass_AInteractionSandboxGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractionSandboxGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionSandboxGameMode);
AInteractionSandboxGameMode::~AInteractionSandboxGameMode() {}
// ********** End Class AInteractionSandboxGameMode ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxGameMode_h__Script_InteractionSandbox_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractionSandboxGameMode, AInteractionSandboxGameMode::StaticClass, TEXT("AInteractionSandboxGameMode"), &Z_Registration_Info_UClass_AInteractionSandboxGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractionSandboxGameMode), 2788939837U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxGameMode_h__Script_InteractionSandbox_1729634476(TEXT("/Script/InteractionSandbox"),
	Z_CompiledInDeferFile_FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxGameMode_h__Script_InteractionSandbox_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxGameMode_h__Script_InteractionSandbox_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
