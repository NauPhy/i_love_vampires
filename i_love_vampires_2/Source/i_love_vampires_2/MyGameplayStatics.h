#include "CoreMinimal.h"
class UObject;
class UEnhancedInputLocalPlayerSubsystem;
class APlayerController;
class UGameInstance;
class UAssetRefs;
class UCombatantManager;
class USpriteManager;

class MyGameplayStatics {
	static bool myGetEnhancedInputLocalPlayerSubsystem(const UObject* caller, UEnhancedInputLocalPlayerSubsystem*&) const;
	static bool myGetPlayerController(const UObject* caller, APlayerController*&) const;
	static bool myGetGameInstance(const UObject* caller, UGameInstance*&) const;
	static bool getAssetRefs(const UObject* caller, UAssetRefs*&) const;
	static bool getCombatantManager(const UObject* caller, UCombatantManager*&);
	static bool getSpriteManager(const UObject* caller, USpriteManager*&);
};