#pragma once
#include "CoreMinimal.h"
#include "AttackActor.h"
#include "AOETemplate.h"
#include "AOEEnum.h"
#include "MyAOEAttributeSet.h"
#include "AOE.generated.h"
class UShapeComponent;

UCLASS()
class AAOE : public AAttackActor {
	GENERATED_BODY()

	const static EAOEShape _CIRCLE = EAOEShape::circle;

	float _consumedDuration = 0;
	bool _isAfterimage = false;
	float _duration = 0;
	float _radius = 1;
	EAOEShape _shape = static_cast<EAOEShape>(0);
	UPROPERTY()
	UShapeComponent* _collider = nullptr;
	UPROPERTY()
	UMyAOEAttributeSet _AOEAttributes;

public:
	AAOE() : AAttackActor() {};
	// This is including attribute mods
	UFUNCTION(BlueprintCallable)
	void initialise_AAOE(APawn* pawnRef, const TArray<FEffectStruct>& effects, FName ID);
	void initialise_AAOE(TWeakObjectPtr<APawn> pawnRef, const TArray<FEffectStruct>& effects, FName ID);
	virtual void Tick(float delta) override;
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
	void initialise_AAOE_int();
};
