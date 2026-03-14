#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/PrimaryAssetID.h"
#include "Active.generated.h"
class APawn;
class UMyAttackAttributeSet;
class AAttackActor;
class UAttackConfig;
class UAttackAttributes;
class UAttackData;
class UCombatantAttributes;
class UWeaponConfig;
class UWeaponTemplate;
class UWeaponConfig;

UCLASS()
class I_LOVE_VAMPIRES_2_API UAttackDataRuntime : public UObject {
	GENERATED_BODY()

public:
	UPROPERTY()
	UAttackConfig* _config = nullptr;
	UPROPERTY()
	UAttackAttributes* _attributes = nullptr;
	UPROPERTY()
	UMyAttackAttributeSet* _attributeSet = nullptr;
};

UCLASS()
class I_LOVE_VAMPIRES_2_API UActive : public UObject {
	GENERATED_BODY()

	float _timeSinceLastActivation = 0;
	float _chargeRatio = 0;
	TWeakObjectPtr<UCombatantAttributes> _combatantAttributes = nullptr;
	TWeakObjectPtr<APawn> _pawnRef = nullptr;

	UPROPERTY()
	UWeaponConfig* _myTemplate;
	UPROPERTY()
	TArray<UAttackDataRuntime*> _attackData;

	void updateWarmup(float delta);
	void activate();
	//bool initAttackData(const TArray<UAttackData*>&);

public:
	void initialise_UActive(const APawn* caller, const FPrimaryAssetId& ID, UCombatantAttributes* callerAttributes);
	virtual void tick(float delta);
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UWeaponTemplate : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "WeaponTemplate")
	UWeaponConfig* _config;
	UPROPERTY(EditAnywhere, Instanced, Category = "WeaponTemplate")
	TArray<UAttackData*> _attackData;
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UWeaponConfig : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponConfig")
	FString _name = "Active";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponConfig")
	TArray<TSubclassOf<AAttackActor>> _attackActorClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponConfig")
	bool _startOnCooldown = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponConfig")
	float warmup = 1.f;
};