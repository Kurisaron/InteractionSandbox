// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionSandboxGameMode.h"

#ifdef INTERACTIONSANDBOX_InteractionSandboxGameMode_generated_h
#error "InteractionSandboxGameMode.generated.h already included, missing '#pragma once' in InteractionSandboxGameMode.h"
#endif
#define INTERACTIONSANDBOX_InteractionSandboxGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInteractionSandboxGameMode **********************************************
INTERACTIONSANDBOX_API UClass* Z_Construct_UClass_AInteractionSandboxGameMode_NoRegister();

#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionSandboxGameMode(); \
	friend struct Z_Construct_UClass_AInteractionSandboxGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIONSANDBOX_API UClass* Z_Construct_UClass_AInteractionSandboxGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AInteractionSandboxGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSandbox"), Z_Construct_UClass_AInteractionSandboxGameMode_NoRegister) \
	DECLARE_SERIALIZER(AInteractionSandboxGameMode)


#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInteractionSandboxGameMode(AInteractionSandboxGameMode&&) = delete; \
	AInteractionSandboxGameMode(const AInteractionSandboxGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionSandboxGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionSandboxGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AInteractionSandboxGameMode) \
	NO_API virtual ~AInteractionSandboxGameMode();


#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxGameMode_h_12_PROLOG
#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInteractionSandboxGameMode;

// ********** End Class AInteractionSandboxGameMode ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
