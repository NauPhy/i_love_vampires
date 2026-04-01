#include "MyGameplayStatics.h"
#include "UObject/Object.h"
#include "EnhancedInputSubsystems.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameInstance.h"
#include "AssetRefs.h"
#include "CombatantManager.h"
#include "SpriteManager.h"
#include "Definitions.h"
#include "Engine/World.h"
#include "Engine/LocalPlayer.h"
#include "Kismet/KismetMathLibrary.h"
#include "CombatGameModeBase.h"
#include "DynamicAssetManager.h"


bool MyGameplayStatics::myGetEnhancedInputLocalPlayerSubsystem(const UObject* caller, UEnhancedInputLocalPlayerSubsystem*& ret) {
	if (!IsValid(caller)) {
		LOGERROR("MyGameplayStatics::myGetEnhancedInputLocalPlayerSubsystem - caller is not valid");
		return false;
	}
	APlayerController* controller = nullptr;
	if (!myGetPlayerController(caller, controller))
		return false;
	ULocalPlayer* localPlayer = controller->GetLocalPlayer();
	if (!IsValid(localPlayer)) {
		LOGERROR("APlayer::myGetEnhancedInputLocalPlayerSubsystem - localPlayer is invalid");
		return false;
	}
	ret = localPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	if (!IsValid(ret)) {
		LOGERROR("APlayer::myGetEnhancedInputLocalPlayerSubsystem - subsystem is invalid");
		return false;
	}
	return true;
}

bool MyGameplayStatics::myGetPlayerController(const UObject* caller, APlayerController*& ret) {
	if (!IsValid(caller)) {
		LOGERROR("MyGameplayStatics::myGetPlayerController - caller is not valid");
		return false;
	}
	ret = UGameplayStatics::GetPlayerController(caller, 0);
	if (!IsValid(ret)) {
		LOGERROR("MyGameplayStatics::myGetPlayerController - ret is invalid");
		return false;
	}
	return true;
}

bool MyGameplayStatics::myGetGameInstance(const UObject* caller, UGameInstance*& ret) {
	if (!IsValid(caller)) {
		LOGERROR("MyGameplayStatics::myGetGameInstance - caller is not valid");
		return false;
	}
	UWorld* world = caller->GetWorld();
	if (!IsValid(world)) {
		LOGERROR("MyGameplayStatics::myGetGameInstance - world is invalid");
		return false;
	}
	ret = world->GetGameInstance();
	if (!IsValid(ret)) {
		LOGERROR("MyGameplayStatics::myGetGameInstance - ret is invalid");
		return false;
	}
	return true;
}

bool MyGameplayStatics::getAssetRefs(const UObject* caller, UAssetRefs*& ret) {
	if (!IsValid(caller)) {
		LOGERROR("MyGameplayStatics::getAssetRefs - caller is not valid");
		return false;
	}
	UGameInstance* gameInstance = nullptr;
	if (!myGetGameInstance(caller, gameInstance)) {
		return false;
	}
	ret = gameInstance->GetSubsystem<UAssetRefs>();
	if (!IsValid(ret)) {
		LOGERROR("MyGameplayStatics::myGetAssetRefs - ret is invalid");
		return false;
	}
	return true;
}

bool MyGameplayStatics::getCombatantManager(const UObject* caller, UCombatantManager*& ret) {
	if (!IsValid(caller)) {
		LOGERROR("MyGameplayStatics::getCombatantManager - caller is not valid");
		return false;
	}
	ACombatGameModeBase* gameMode = nullptr;
	if (!getCombatGameMode(caller, gameMode)) {
		return false;
	}
	ret = gameMode->getCombatantManager();
	if (!IsValid(ret)) {
		LOGERROR("MyGameplayStatics::getCombatantManager - ret is invalid");
		return false;
	}
	return true;
}

bool MyGameplayStatics::getCombatGameMode(const UObject* caller, ACombatGameModeBase*& ret) {
	if (!IsValid(caller)) {
		LOGERROR("MyGameplayStatics::getCombatGameMode - caller is not valid");
		return false;
	}
	UWorld* world = caller->GetWorld();
	if (!IsValid(world)) {
		LOGERROR("MyGameplayStatics::getCombatGameMode - world is invalid");
		return false;
	}
	AGameModeBase* gameMode = world->GetAuthGameMode();
	if (!IsValid(gameMode)) {
		LOGERROR("MyGameplayStatics::getCombatGameMode - game mode is invalid");
		return false;
	}
	ret = Cast<ACombatGameModeBase>(gameMode);
	if (!IsValid(ret)) {
		LOGERROR("MyGameplayStatics::getCombatGameMode - game mode is not combat game mode");
		return false;
	}
	return true;
}

bool MyGameplayStatics::getSpriteManager(const UObject* caller, USpriteManager*& ret) {
	if (!IsValid(caller)) {
		LOGERROR("MyGameplayStatics::getSpriteManager - caller is not valid");
		return false;
	}
	UWorld* world = caller->GetWorld();
	if (!IsValid(world)) {
		LOGERROR("ACombatant::initialiseFromTemplate - world is invalid");
		return false;
	}
	UGameInstance* gameInstance = world->GetGameInstance();
	if (!IsValid(gameInstance)) {
		LOGERROR("ACombatant::initialiseFromTemplate - game instance invalid");
		return false;
	}
	ret = gameInstance->GetSubsystem<USpriteManager>();
	if (!IsValid(ret)) {
		LOGERROR("ACombatant::initialiseFromTemplate - ret is invalid");
		return false;
	}
	return true;
}

bool MyGameplayStatics::getDynamicAssetManager(const UObject* caller, UDynamicAssetManager*& ret) {
	if (!IsValid(caller)) {
		LOGERROR("MyGameplayStatics::getDynamicAssetManager - caller is not valid");
		return false;
	}
	UWorld* world = caller->GetWorld();
	if (!IsValid(world)) {
		LOGERROR("MyGameplayStatics::getDynamicAssetManager - world is invalid");
		return false;
	}
	UGameInstance* gameInstance = world->GetGameInstance();
	if (!IsValid(gameInstance)) {
		LOGERROR("MyGameplayStatics::getDynamicAssetManager - game instance invalid");
		return false;
	}
	ret = gameInstance->GetSubsystem<UDynamicAssetManager>();
	if (!IsValid(ret)) {
		LOGERROR("MyGameplayStatics::getDynamicAssetManager - ret is invalid");
		return false;
	}
	return true;
}