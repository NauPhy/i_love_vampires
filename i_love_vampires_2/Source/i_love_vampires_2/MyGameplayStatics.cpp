#include "MyGameplayStatics.h"
#include "Kismet/GameplayStatics.h"
#include "Definitions.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/KismetMathLibrary.h"
#include "CombatantManager.h"
#include "AssetRefs.h"

bool MyGameplayStatics::myGetEnhancedInputLocalPlayerSubsystem(const UObject* caller, UEnhancedInputLocalPlayerSubsystem*& ret) const {
	ret = nullptr;
	APlayerController* controller = nullptr;
	if (!myGetPlayerController(caller, controller))
		return false;
	ULocalPlayer* localPlayer = controller->GetLocalPlayer();
	if (localPlayer == nullptr) {
		LOGERROR("APlayer::myGetEnhancedInputLocalPlayerSubsystem - localPlayer is nullptr");
		return false;
	}
	ret = localPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	if (ret == nullptr) {
		LOGERROR("APlayer::myGetEnhancedInputLocalPlayerSubsystem - subsystem is nullptr");
		return false;
	}
	return true;
}

bool MyGameplayStatics::myGetPlayerController(const UObject* caller, APlayerController*& ret) const {
	ret = UGameplayStatics::GetPlayerController(caller, 0);
	if (ret == nullptr) {
		LOGERROR("MyGameplayStatics::myGetPlayerController - ret is nullptr");
		return false;
	}
	return true;
}

bool MyGameplayStatics::myGetGameInstance(const UObject* caller, UGameInstance*& ret) const {
	ret = nullptr;
	UWorld* world = caller->GetWorld();
	if (world == nullptr) {
		LOGERROR("MyGameplayStatics::myGetGameInstance - world is nullptr");
		return false;
	}
	ret = world->GetGameInstance();
	if (ret == nullptr) {
		LOGERROR("MyGameplayStatics::myGetGameInstance - ret is nullptr");
		return false;
	}
	return true;
}

bool MyGameplayStatics::getAssetRefs(const UObject* caller, UAssetRefs*& ret) const {
	UGameInstance* gameInstance = nullptr;
	if (!myGetGameInstance(caller, gameInstance)) {
		return false;
	}
	ret = gameInstance->GetSubsystem<UAssetRefs>();
	if (ret == nullptr) {
		LOGERROR("MyGameplayStatics::myGetAssetRefs - ret is nullptr");
		return false;
	}
	return true;
}

bool MyGameplayStatics::getCombatantManager(const UObject* caller, UCombatantManager*& ret) {
	UWorld* world = caller->GetWorld();
	if (world == nullptr) {
		LOGERROR("ACombatant::getCombatantManager - world is nullptr");
		return false;
	}
	ret = world->GetSubsystem<UCombatantManager>();
	if (ret == nullptr) {
		LOGERROR("ACombatant::getCombatantManager - ret is nullptr");
		return false;
	}
	return true;
}

bool MyGameplayStatics::getSpriteManager(const UObject* caller, USpriteManager*& ret) {
	UWorld* world = caller->GetWorld();
	if (world == nullptr) {
		LOGERROR("ACombatant::initialiseFromTemplate - No world found");
		return false;
	}
	UGameInstance* gameInstance = world->GetGameInstance();
	if (gameInstance == nullptr) {
		LOGERROR("ACombatant::initialiseFromTemplate - No game instance found");
		return false;
	}
	ret = gameInstance->GetSubsystem<USpriteManager>();
	if (ret == nullptr) {
		LOGERROR("ACombatant::initialiseFromTemplate - No sprite manager found");
		return false;
	}
	return true;
}