#pragma once
#include "GameFramework/GameModeBase.h"
#include "CombatGameModeBase.generated.h"
class UEnemySpawner;
class UCombatantManager;

UCLASS(Blueprintable)
class I_LOVE_VAMPIRES_2_API ACombatGameModeBase : public AGameModeBase {
	GENERATED_BODY()

	UPROPERTY()
	UEnemySpawner* _enemySpawner = nullptr;
	UPROPERTY()
	UCombatantManager* _combatantManager = nullptr;

public:
	ACombatGameModeBase();
	virtual void BeginPlay() override;
	virtual void Tick(float delta) override;
	UFUNCTION(BlueprintCallable)
	UEnemySpawner* getEnemySpawner() const { return _enemySpawner; }
	UFUNCTION(BlueprintCallable)
	UCombatantManager* getCombatantManager() const { return _combatantManager; }
	UFUNCTION(BlueprintCallable)
	void setGameReady(bool val);
};