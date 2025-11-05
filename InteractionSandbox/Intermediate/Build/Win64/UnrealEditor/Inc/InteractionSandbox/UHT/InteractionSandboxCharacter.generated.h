// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionSandboxCharacter.h"

#ifdef INTERACTIONSANDBOX_InteractionSandboxCharacter_generated_h
#error "InteractionSandboxCharacter.generated.h already included, missing '#pragma once' in InteractionSandboxCharacter.h"
#endif
#define INTERACTIONSANDBOX_InteractionSandboxCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInteractionSandboxCharacter *********************************************
#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


INTERACTIONSANDBOX_API UClass* Z_Construct_UClass_AInteractionSandboxCharacter_NoRegister();

#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionSandboxCharacter(); \
	friend struct Z_Construct_UClass_AInteractionSandboxCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIONSANDBOX_API UClass* Z_Construct_UClass_AInteractionSandboxCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AInteractionSandboxCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionSandbox"), Z_Construct_UClass_AInteractionSandboxCharacter_NoRegister) \
	DECLARE_SERIALIZER(AInteractionSandboxCharacter)


#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInteractionSandboxCharacter(AInteractionSandboxCharacter&&) = delete; \
	AInteractionSandboxCharacter(const AInteractionSandboxCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionSandboxCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionSandboxCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AInteractionSandboxCharacter) \
	NO_API virtual ~AInteractionSandboxCharacter();


#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCharacter_h_21_PROLOG
#define FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInteractionSandboxCharacter;

// ********** End Class AInteractionSandboxCharacter ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Github_InteractionSandbox_InteractionSandbox_Source_InteractionSandbox_InteractionSandboxCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
