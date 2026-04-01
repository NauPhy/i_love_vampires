#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CombatantManager.generated.h"
class ACombatant;



UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UCombatantManager : public UObject
{
	GENERATED_BODY()

	const static inline float _BURN_PERIOD = 1.f;

	int _nextKey = 0;
	bool _burnThisFrame = false;
	float _burnTimer = 0.0f;
	bool _gameReady = false;
	UPROPERTY()
	TMap<int, TWeakObjectPtr<ACombatant>> _enemyReferences;
	UPROPERTY()
	TWeakObjectPtr<ACombatant> _playerRef = nullptr;
public:
	UCombatantManager() = default;
	void setPlayerRef(ACombatant* playerRef);
	int registerEnemy(ACombatant* enemy);
	void removeFromRegister(int key);
	int getEnemyCount() { return _enemyReferences.Num(); }
	bool getRandomEnemyPtr(TWeakObjectPtr<ACombatant>& ret);
	bool getBurnThisFrame() const { return _burnThisFrame; }
	virtual void tick(float DeltaTime);
	void setGameReady(bool val) { _gameReady = val; }

private:
	void burnAll();
};