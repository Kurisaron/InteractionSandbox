// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionSandboxCameraManager.h"

#ifdef INTERACTIONSANDBOX_InteractionSandboxCameraManager_generated_h
#error "InteractionSandboxCameraManager.generated.h already included, missing '#pragma once' in InteractionSandboxCameraManager.h"
#endif
#define INTERACTIONSANDBOX_InteractionSandboxCameraManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInteractionSandboxCameraManager *****************************************
INTERACTIONSANDBOX_API UClass* Z_Construct_UClass_AInteractionSandboxCameraManager_NoRegister();

#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCameraManager_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionSandboxCameraManager(); \
	friend struct Z_Construct_UClass_AInteractionSandboxCameraManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIONSANDBOX_API UClass* Z_Construct_UClass_AInteractionSandboxCameraManager_NoRegister(); \
public: \
	DECLARE_CLASS2(AInteractionSandboxCameraManager, APlayerCameraManager, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSandbox"), Z_Construct_UClass_AInteractionSandboxCameraManager_NoRegister) \
	DECLARE_SERIALIZER(AInteractionSandboxCameraManager)


#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCameraManager_h_16_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInteractionSandboxCameraManager(AInteractionSandboxCameraManager&&) = delete; \
	AInteractionSandboxCameraManager(const AInteractionSandboxCameraManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionSandboxCameraManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionSandboxCameraManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractionSandboxCameraManager) \
	NO_API virtual ~AInteractionSandboxCameraManager();


#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCameraManager_h_13_PROLOG
#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCameraManager_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCameraManager_h_16_INCLASS_NO_PURE_DECLS \
	FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCameraManager_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInteractionSandboxCameraManager;

// ********** End Class AInteractionSandboxCameraManager *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCameraManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
