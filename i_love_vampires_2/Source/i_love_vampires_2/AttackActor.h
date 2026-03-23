#pragma once
#include "CoreMinimal.h"
// AAttackActor
#include "GameFramework/Actor.h"
#include <memory>
#include "StatusEnum.h"
#include "GameFramework/Pawn.h"
// UAttackConfig
#include "SpriteEnum.h"
#include "BaseConfig.h"
#include "EffectStruct.h"
// UAttackAttributeData
#include "BaseAttributeData.h"
// AttackAttributes
#include "BaseAttributes.h"
// AttackFactory
#include "BaseAttributeSet.h"
// UAttackTemplate
#include "BaseTemplate.h"
//
#include "AttackActor.generated.h"
class UAttackConfig;
class AttackAttributes;
class AttackFactory;
class UAttackAttributeData;
class UAttackTemplate;

class ACombatant;
class UPaperFlipbookComponent;

UCLASS()
class I_LOVE_VAMPIRES_2_API AAttackActor : public AActor {
	GENERATED_BODY()

	const EStatus _DAMAGE = EStatus::Damage;

	TObjectPtr<UAttackConfig> _attackConfig = nullptr;
	
protected:
	TWeakObjectPtr<APawn> _pawnRef = nullptr;
	TArray<TWeakObjectPtr<APawn>> _effectedPawns;
	std::unique_ptr<const AttackAttributes> _attackAttributes = nullptr;
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = true))
	UPaperFlipbookComponent* _flipbook = nullptr;

	const UAttackConfig* getAttackConfig() const { return _attackConfig.Get(); }

public:
	AAttackActor();
	void initialise_AAttackActor(APawn* pawnRef, UAttackConfig* attackConfig, const AttackAttributes& attackAttributes);
	virtual void BeginPlay() override;
	virtual void factoryInitQuery(AAttackFactory* factory);
	virtual void Tick(float delta) override;
	void applyEffect(ACombatant* target); 
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAttackConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "UAttackConfig")
	TArray<FEffectStruct> _statusEffects;
	UPROPERTY(VisibleAnywhere, Category = "UAttackConfig")
	ESprite _sprite = static_cast<ESprite>(0);
	UAttackConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

class UCombatantAttributes;

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAttackAttributeData : public UBaseAttributes
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "WeaponAttributes")
	float _damage = 0.f;
	UPROPERTY(VisibleAnywhere, Category = "WeaponAttributes")
	float _critChance = 0.f;
	UPROPERTY(VisibleAnywhere, Category = "WeaponAttributes")
	float _critMultiplier = 2.f;

	UAttackAttributeData(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////
class AttackAttributes : public BaseAttributes {
	Stat _damage;
	Stat _critChance;
	Stat _critMultiplier;

public:
	AttackAttributes() = delete;
	AttackAttributes(const UAttackAttributeData* attr) : _damage(attr->_damage), _critChance(attr->_critChance), _critMultiplier(attr->_critMultiplier) {}
	virtual void modifyAttributes(const CombatantAttributes& modifiers);
	virtual void discretizeFull() override {}
	virtual void applyStatus(const FEffectStruct& status, float delta) override {}
};

class AttackAttributeSet : public BaseAttributeSet {
	BaseAttributeWrapper<AttackAttributes> _attackAttributes;
public:
	AttackAttributeSet() = delete;
	AttackAttributeSet(const UAttackAttributeData* attr) : _attributes(AttackAttributes(attr)) {}
	virtual void tick(float delta) override {
		_attributes.tick(delta, getStatusEffects());
		BaseAttributeSet::tick(delta);
	}
	float getMember(float AttackAttributes::* member) const {
		return _attackAttributes.getMember(member);
	}
	const BaseAttributeWrapper<AttackAttributes>& getAttackAttributeWrapper() const { return _attackAttributes; }
};

///////////////////////////////////////////////////////////////////////////////

class AProjectile;
class AExplosiveProjectile;
class AAOE;

class AttackFactory : public BaseAttributeSet {
	const TObjectPtr<const APawn> _owner = nullptr;
	const TObjectPtr<const UAttackConfig> _attackConfig = nullptr;
	BaseAttributeWrapper<AttackAttributes> _attackAttributes;

public:
	AttackFactory() = delete;
	AttackFactory(APawn* owner, const UAttackConfig* config, const UAttackAttributeData* data) : _owner(owner), _attackConfig(config), _attackAttributes(AttackAttributes(data)) {}
	virtual void tick(float delta) override {
		_attackAttributes.tick(delta, getStatusEffects());
		BaseAttributeSet::tick(delta);
	}
	float getMember(float AttackAttributes::* member) const {
		return _attackAttributes.getMember(member);
	}
	const BaseAttributeWrapper<AttackAttributes>& getAttackAttributeWrapper() const { return _attackAttributes; }
	virtual void launchAttack(const FVector& forward);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAttackTemplate : public UBaseTemplate {
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Instanced, Category = "UAttackFactoryTemplate")
	UAttackConfig* _attackConfig;
	UPROPERTY(VisibleAnywhere, Instanced, Category = "UAttackFactoryTemplate")
	UAttackAttributeData* _attackAttributes;

	UAttackFactoryTemplate(const FObjectInitializer& init) : Super(init) {
		_attackConfig = init.CreateDefaultSubobject<UAttackConfig>(this, "_attackConfig");
		_attackAttributes = init.CreateDefaultSubobject<UAttackAttributeData>(this, "_attackAttributes");
	}
};