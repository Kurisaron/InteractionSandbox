// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionSandbox_init() {}
	INTERACTIONSANDBOX_API UFunction* Z_Construct_UDelegateFunction_InteractionSandbox_BulletCountUpdatedDelegate__DelegateSignature();
	INTERACTIONSANDBOX_API UFunction* Z_Construct_UDelegateFunction_InteractionSandbox_DamagedDelegate__DelegateSignature();
	INTERACTIONSANDBOX_API UFunction* Z_Construct_UDelegateFunction_InteractionSandbox_PawnDeathDelegate__DelegateSignature();
	INTERACTIONSANDBOX_API UFunction* Z_Construct_UDelegateFunction_InteractionSandbox_SprintStateChangedDelegate__DelegateSignature();
	INTERACTIONSANDBOX_API UFunction* Z_Construct_UDelegateFunction_InteractionSandbox_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InteractionSandbox;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InteractionSandbox()
	{
		if (!Z_Registration_Info_UPackage__Script_InteractionSandbox.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_InteractionSandbox_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InteractionSandbox_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InteractionSandbox_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InteractionSandbox_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_InteractionSandbox_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InteractionSandbox",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB0F73CC9,
				0xDD7E1B9D,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InteractionSandbox.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InteractionSandbox.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InteractionSandbox(Z_Construct_UPackage__Script_InteractionSandbox, TEXT("/Script/InteractionSandbox"), Z_Registration_Info_UPackage__Script_InteractionSandbox, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB0F73CC9, 0xDD7E1B9D));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
