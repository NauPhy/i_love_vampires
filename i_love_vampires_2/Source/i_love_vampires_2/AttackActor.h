#pragma once
#include "CoreMinimal.h"


#include "GameFramework/Actor.h"

class ACombatant;
class UAttackConfig;

UCLASS(Blueprintable)
class AAttackActor : public AActor {
	GENERATED_BODY()

	FName _ID = "attackActor";
	UPROPERTY()
	TArray<UAttackFactory*> _attackFactories;
	
protected:
	UPROPERTY()
	TWeakObjectPtr<APawn> _pawnRef = nullptr;
	UPROPERTY()
	TArray<TWeakObjectPtr<APawn>> _effectedPawns;
	UPROPERTY() 
	UAttackConfig* _attackConfig = nullptr;
	
	FName getID() const { return _ID; }
	virtual void factoryInitQuery(const UAttackFactory* factory);

public:
	AAttackActor() { PrimaryActorTick.bCanEverTick = true; }

	void initialise_AAttackActor(APawn* pawnRef, UAttackConfig*, UAttackAttributes*);

	virtual void Tick(float delta) override;
	void applyEffect(ACombatant* target); 
};
///////////////////////////////////////////////////////////////////////////////
#include "BaseConfig.h"

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAttackConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UAttackConfig")
	TArray<FEffectStruct> _statusEffects;
	UAttackConfig() { _attackClass = AAttackActor::StaticClass(); }
};
///////////////////////////////////////////////////////////////////////////////
#include "BaseAttributes.h"
#include "EffectStruct.h"
class UCombatantAttributes;

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAttackAttributes : public UBaseAttributes
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponAttributes")
	float _damage = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponAttributes")
	float _critChance = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponAttributes")
	float _critMultiplier = 2.f;

	virtual void modifyAttributes(const UCombatantAttributes* modifiers, const UAttackAttributes* baseAttributes, UAttackAttributes* finalAttributes);
};
///////////////////////////////////////////////////////////////////////////////
#include "BaseAttributeComponent.h"

UCLASS()
class I_LOVE_VAMPIRES_2_API UAttackComponent : public UBaseAttributeComponent
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UAttackAttributes* _base;
	UPROPERTY()
	UAttackAttributes* _final;
	UPROPERTY()
	UAttackAttributes* _offsets;
	void initialise_UAttackComponent(const UAttackAttributes* baseAttributes) {
		_base = DuplicateObject(baseAttributes, this);
		_final = DuplicateObject(baseAttributes, this);
		_offsets = DuplicateObject(baseAttributes, this);
	}
	virtual UBaseAttributes* getFinal() const override { return _final; }
};
///////////////////////////////////////////////////////////////////////////////
#include "BaseAttributeSet.h"

class AProjectile;
class AExplosiveProjectile;
class AAOE;

UCLASS()
class I_LOVE_VAMPIRES_2_API UAttackFactory : public UBaseAttributeSet
{
	GENERATED_BODY()

	UPROPERTY()
	UAttackConfig* _attackConfig;
	UPROPERTY()
	UAttackComponent* _attackComponent = nullptr;

	void shouldNotRunError() const;

protected:
	TWeakObjectPtr<APawn> _pawnRef;

	virtual void initAttack(AAttackActor*) const;
	virtual void initProjectile(AProjectile*) const { shouldNotRunError(); }
	virtual void initAOE(AAOE*) const { shouldNotRunError(); }
	virtual void initExplosiveProjectile(AExplosiveProjectile*) const { shouldNotRunError(); }

public:
	virtual void launchAttack();
	void initialise_UAttackFactory(APawn*, const UAttackConfig*, const UAttackAttributes*);
};
///////////////////////////////////////////////////////////////////////////////

#include "BaseAttributeSetTemplate.h"

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAttackFactoryTemplate : public UBaseAttributeSetTemplate {
	GENERATED_BODY()

protected:
	virtual bool isValid() const;

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UAttackFactoryTemplate")
	UAttackConfig* _attackConfig;
	UPROPERTY(EditAnywhere, Instanced, Category = "UAttackFactoryTemplate")
	UAttackAttributes* _attackAttributes;

	virtual UAttackFactory* createFactory(APawn*, const UObject*) const;
};

#include "AttackActor.generated.h"