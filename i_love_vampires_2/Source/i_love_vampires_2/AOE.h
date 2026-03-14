#pragma once
#include "CoreMinimal.h"
#include "AttackActor.h"
#include "AOEEnum.h"
#include "AOE.generated.h"
class UShapeComponent;
class UAOEData;
class UAOEConfig;
class UAOEAttributes;

UCLASS()
class AAOE : public AAttackActor {
	GENERATED_BODY()

	const static EAOEShape _CIRCLE = EAOEShape::circle;

	float _consumedDuration = 0;
	bool _isAfterimage = false;
	UPROPERTY()
	UShapeComponent* _collider = nullptr;

private:
	void initShape();
	TWeakObjectPtr<APawn> _delayedConstruction_pawnRef = nullptr;
	UAOEConfig* _delayedConstruction_config = nullptr;
	UAOEAttributes* _delayedConstruction_attributes = nullptr;

protected:
	void initialise_AAOE(APawn* pawnRef, bool delayFullConstruction = false);

public:
	void initialise_AAOE(APawn* pawnRef, const UAOEData*, bool delayFullConstruction = false);
	void initialise_AAOE(APawn*, const UAOEConfig*, const UAOEAttributes*, bool delayFullConstruction = false);
	void completeDelayedConstruction();

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

	//virtual static void getAttributeType() override { return UAOEAttributes::StaticClass(); }
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAOEData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Instanced, Category = "AOEData")
	UAOEConfig* _config;
	UPROPERTY(EditAnywhere, Instanced, Category = "AOEData")
	UAOEAttributes* _attributes;
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAOEConfig : public UAttackConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOEConfig")
	EAOEShape _shape = static_cast<EAOEShape>(0);
	UAOEConfig() { _attackClass = AAOE::StaticClass(); }
};


UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAOEAttributes : public UAttackAttributes
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOEAttributes")
	float _radius = 1.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AOEAttributes")
	float _duration = 0.f;

	virtual void modifyAttributes(const UCombatantAttributes*, const UAOEAttributes*, UAOEAttributes*);
};
