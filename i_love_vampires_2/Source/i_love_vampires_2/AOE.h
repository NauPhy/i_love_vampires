#pragma once
#include "CoreMinimal.h"
#include "AttackActor.h"
#include "AOETemplate.h"
#include "AOE.generated.h"
class UGameplayEffectSpecHandle;
class UShapeComponent;

UCLASS()
class AAOE : public AAttackActor {
	GENERATED_BODY()
public:
	AAOE() : AAttackActor() {
	}
	virtual void Tick(float delta) override;

	// This is including attribute mods
	UFUNCTION(BlueprintCallable)
	void initialise_AAOE(APawn* pawnRef, const TArray<FGameplayEffectSpecHandle>& effect, const TArray<float>& effectChances, const FAOETemplate& AOEData);
	void initialise_AAOE(TWeakObjectPtr<APawn> pawnRef, const TArray<EffectStruct>& effect, const FAOETemplate& AOEData);


	UFUNCTION()
	void OnOverlapBegin(
		UPrimitiveComponent* OverlappedComponent,
		AActor* OtherActor,
		UPrimitiveComponent* OtherComp,
		int32 OtherBodyIndex,
		bool bFromSweep,
		const FHitResult& SweepResult
	);
private:
	void initShape();
	void initialise_AAOE_int(const FAOETemplate& AOEData);

	float _duration = 0;
	//0 = circle
	int _shape = 0;
	float _radius = 1;
	UShapeComponent* _collider = nullptr;

	float _consumedDuration = 0;
	bool _isAfterimage = false;
};
