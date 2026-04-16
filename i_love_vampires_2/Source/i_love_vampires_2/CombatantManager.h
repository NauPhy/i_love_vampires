#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CombatantManager.generated.h"
class ACombatant;
class AEnemyBase;



UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UCombatantManager : public UObject
{
	GENERATED_BODY()

	const static inline float _POISON_PERIOD = 1.0f;

	int _nextKey = 0;
	bool _burnThisFrame = false;
	bool _ignoreNextBurn = false;
	bool _poisonThisFrame = false;
	float _poisonTimer = 0.0f;
	bool _gameReady = false;
	UPROPERTY()
	TMap<int, TWeakObjectPtr<AEnemyBase>> _enemyReferences;
	UPROPERTY()
	TWeakObjectPtr<ACombatant> _playerRef = nullptr;
public:
	UCombatantManager() = default;
	void setPlayerRef(ACombatant* playerRef);
	int registerEnemy(AEnemyBase* enemy);
	void removeFromRegister(int key);
	int getEnemyCount() { return _enemyReferences.Num(); }
	AEnemyBase* getRandomEnemyPtr(const AEnemyBase* excluded);
	AEnemyBase* getNearestEnemyPtr(const AActor* caller);
	bool getBurnThisFrame() const { return _burnThisFrame; }
	bool getPoisonThisFrame() const { return _poisonThisFrame; }
	virtual void tick(float DeltaTime);
	void setGameReady(bool val) { _gameReady = val; }
	bool getGameReady() const { return _gameReady; }
};