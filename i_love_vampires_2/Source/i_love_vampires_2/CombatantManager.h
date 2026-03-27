#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "CombatantManager.generated.h"
class ACombatant;



UCLASS()
class I_LOVE_VAMPIRES_2_API UCombatantManager : public UTickableWorldSubsystem
{
	GENERATED_BODY()

	const float _BURN_PERIOD = 1.f;

	int _nextKey = 0;
	bool _burnThisFrame = false;
	float _burnTimer = 0.0f;
	UPROPERTY()
	TMap<int, TWeakObjectPtr<ACombatant>> _enemyReferences;
	UPROPERTY()
	TWeakObjectPtr<ACombatant> _playerRef = nullptr;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantManager")
	bool _gameReady = false;

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(UCombatantManager, STATGROUP_Tickables);
	}
	UCombatantManager() = default;
	void setPlayerRef(ACombatant* playerRef);
	int registerEnemy(ACombatant* enemy);
	void removeFromRegister(int key);
	int getEnemyCount() { return _enemyReferences.Num(); }
	bool getRandomEnemyPtr(TWeakObjectPtr<ACombatant>& ret);
	bool getBurnThisFrame() const { return _burnThisFrame; }

protected:
	virtual void Tick(float DeltaTime) override;

private:
	void burnAll();
};