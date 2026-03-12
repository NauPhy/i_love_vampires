#pragma once
#include "CoreMinimal.h"
#include "AttackActor.h"
#include "AOEEnum.h"
#include "AOEConfig.h"
#include "AOEAttributes.h"
#include "AOE.generated.h"
class UShapeComponent;

UCLASS()
class AAOE : public AAttackActor {
	GENERATED_BODY()

	const static EAOEShape _CIRCLE = EAOEShape::circle;

	float _consumedDuration = 0;
	bool _isAfterimage = false;
	UPROPERTY()
	UShapeComponent* _collider = nullptr;

public:
	void initialise_AAOE(APawn* pawnRef) { initialise_AAttackActor(pawnRef); initShape(); }
	void initialise_AAOE(APawn* pawnRef, const FAOEConfig& config, const FAOEAttributes& attributes);

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
};
