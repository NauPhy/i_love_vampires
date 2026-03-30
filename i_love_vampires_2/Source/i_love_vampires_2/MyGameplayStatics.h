#pragma once
#include "CoreMinimal.h"
class UObject;
class UEnhancedInputLocalPlayerSubsystem;
class APlayerController;
class UGameInstance;
class UAssetRefs;
class UCombatantManager;
class USpriteManager;
class ACombatGameModeBase;

class MyGameplayStatics {

	static bool getCombatGameMode(const UObject* caller, ACombatGameModeBase*& ret);
public:
	static bool myGetEnhancedInputLocalPlayerSubsystem(const UObject* caller, UEnhancedInputLocalPlayerSubsystem*&);
	static bool myGetPlayerController(const UObject* caller, APlayerController*&);
	static bool myGetGameInstance(const UObject* caller, UGameInstance*&);
	static bool getAssetRefs(const UObject* caller, UAssetRefs*&);
	static bool getCombatantManager(const UObject* caller, UCombatantManager*&);
	static bool getSpriteManager(const UObject* caller, USpriteManager*&);
};