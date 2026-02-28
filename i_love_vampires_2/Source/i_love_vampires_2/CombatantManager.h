#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include <vector>
#include <unordered_map>
#include "StatusEnum.h"
#include "CombatantManager.generated.h"
class ACombatant;

struct FCombatantManager_MyStruct {
	int key = 0;
	TWeakObjectPtr<ACombatant> value;
};

UCLASS()
class I_LOVE_VAMPIRES_2_API UCombatantManager : public UTickableWorldSubsystem
{
	GENERATED_BODY()
public:
	UCombatantManager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Startup")
	bool gameReady = false;

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(UCombatantManager, STATGROUP_Tickables);
	}
	
	UFUNCTION(BlueprintCallable)
	void setPlayerRef(ACombatant* playerRef);
	UFUNCTION(BlueprintCallable)
	int registerEnemy(ACombatant* enemy);
	UFUNCTION(BlueprintCallable)
	void removeFromRegister(int key);
	UFUNCTION(BlueprintCallable)
	int getEnemyCount() {
		return _enemyReferences.size();
	}
	UFUNCTION(BlueprintCallable)
	static void inflictBurn(ACombatant* target, float magnitude, float duration);

	TWeakObjectPtr<ACombatant> getRandomEnemyPtr();
protected:
	virtual void Tick(float DeltaTime) override;
private:
	void combatantTick(ACombatant* combatant, EStatusEffect effect, float deltaTime);
	void handleStatusEffects(float delta);

	std::vector<FCombatantManager_MyStruct> _enemyReferences;
	TWeakObjectPtr<ACombatant> _playerRef;
	int _nextKey = 0;

	std::unordered_map<EStatusEffect, float> _nextStatusEffectTickDictionary;
};