#pragma once
#include "CoreMinimal.h"
// AAttackActor
#include "GameFramework/Actor.h"
#include <memory>
#include "StatusEnum.h"
#include "GameFramework/Pawn.h"
// UAttackConfig
//#include "SpriteEnum.h"
#include "BaseConfig.h"
#include "EffectStruct.h"
#include "PaperFlipbook.h"
// UAttackAttributeData
#include "BaseAttributeData.h"
// AttackAttributes
#include "BaseAttributes.h"
// AttackFactory
#include "BaseAttributeSet.h"
#include "BaseAttributeWrapper.h"
// UAttackTemplate
#include "BaseTemplate.h"
//
#include "AttackActor.generated.h"
class UAttackConfig;
class AttackAttributes;
class AttackFactory;
class UAttackAttributeData;
class UAttackTemplate;
struct AttackInitStruct;

class ACombatant;
class UPaperFlipbookComponent;

UCLASS()
class I_LOVE_VAMPIRES_2_API AAttackActor : public AActor {
	GENERATED_BODY()

	const static inline EStatus _DAMAGE = EStatus::damage;
	const static inline EStatus _HEAL_INSTIGATOR = EStatus::healInstigator;
	const static inline EStatus _RANDOM = EStatus::randomNegativePersistent;
	const static inline EStatus _FRIENDLY_FIRE = EStatus::friendlyFire;

	TObjectPtr<const UAttackConfig> _attackConfig = nullptr;
	
protected:
	const static inline float _SPRITE_RADIUS = 16;
	TWeakObjectPtr<ACombatant> _pawnRef = nullptr;
	TArray<TWeakObjectPtr<APawn>> _effectedPawns;
	std::unique_ptr<const AttackAttributes> _attackAttributes = nullptr;
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
	UPaperFlipbookComponent* _flipbook = nullptr;

private:
	void initialise_AAttackActor(ACombatant* pawnRef, const UAttackConfig* attackConfig, const AttackAttributes& attackAttributes);

protected:
	const UAttackConfig* getAttackConfig() const { return _attackConfig.Get(); }
	bool canHitInstigator() const;

public:
	AAttackActor();
	void initialise_AAttackActor(const AttackInitStruct& temp);
	virtual void BeginPlay() override;
	virtual void Tick(float delta) override;
	void applyEffect(ACombatant* target); 
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAttackConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FEffectStruct> _statusEffects = {};
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UPaperFlipbook> _sprite;

	UAttackConfig(const FObjectInitializer& init) : Super(init) {}
	virtual void replaceOverrides() override {}
};
///////////////////////////////////////////////////////////////////////////////

class UCombatantAttributes;

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAttackAttributeData : public UBaseAttributeData
{
	GENERATED_BODY()

	struct defaults {
		float _damage = 0.f;
		float _critChance = 0.f;
		float _critMultiplier = 1.f;
	};
	const static inline defaults _defaults;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _damage = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _critChance = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _critMultiplier = -999;

	UAttackAttributeData(const FObjectInitializer& init) : Super(init) {}
	virtual void replaceOverrides() override;
};
///////////////////////////////////////////////////////////////////////////////
class AttackAttributes : public BaseAttributes {
public:
	Stat _damage;
	Stat _critChance;
	Stat _critMultiplier;

	AttackAttributes() = delete;
	AttackAttributes(const AttackAttributes& other) : BaseAttributes(other), _damage(other._damage), _critChance(other._critChance), _critMultiplier(other._critMultiplier) {}
	AttackAttributes(AttackAttributes&& other) : BaseAttributes(std::move(other)), _damage(std::move(other._damage)), _critChance(std::move(other._critChance)), _critMultiplier(std::move(other._critMultiplier)) {}
	AttackAttributes& operator=(const AttackAttributes& other) = delete;
	AttackAttributes& operator=(AttackAttributes&& other) = delete;
	AttackAttributes(const UAttackAttributeData* attr) : BaseAttributes(), _damage(attr->_damage), _critChance(attr->_critChance), _critMultiplier(attr->_critMultiplier) {}

	virtual void modifyAttributes(const CombatantAttributes* modifiers) override;
	virtual void discretizeFull() override {}
	virtual void applyStatus(UObject* context, const FEffectStruct& status, float delta) override {}
	virtual void applyToAllStats(const std::function<void(Stat&)>& func) override {
		func(_damage);
		func(_critChance);
		func(_critMultiplier);
	}
};
///////////////////////////////////////////////////////////////////////////////

struct AttackInitStruct {
	ACombatant* _pawnRef;
	const UAttackConfig* _attackConfig;
	const AttackAttributes _attackAttributes;
	AttackInitStruct() = delete;
	AttackInitStruct(ACombatant* pawn, const UAttackConfig* config, const AttackAttributes& attr) :
		_pawnRef(pawn), _attackConfig(config), _attackAttributes(attr){}
};
///////////////////////////////////////////////////////////////////////////////

class AProjectile;
class AExplosiveProjectile;
class AAOE;
class ACombatant;

class AttackFactory : public BaseAttributeSet {
	const TObjectPtr<const UAttackConfig> _attackConfig = nullptr;
	BaseAttributeWrapper<AttackAttributes, UAttackAttributeData> _attackAttributes;
protected:
	// Cannot be const as it is used to call CreateObject/SpawnActor
	const TObjectPtr<ACombatant> _owner = nullptr;
	AttackInitStruct getAttackInit() const {
		AttackAttributes temp = _attackAttributes.getCore();
		temp.discretizeFull();
		AttackInitStruct ret(_owner.Get(), _attackConfig.Get(), temp);
		return ret;
	}

public:
	AttackFactory() = delete;
	AttackFactory(const AttackFactory& other) = delete;
	AttackFactory& operator=(const AttackFactory& other) = delete;
	AttackFactory(AttackFactory&& other);
	AttackFactory& operator=(AttackFactory&& other) = delete;
	AttackFactory(ACombatant* owner, const UAttackConfig* config, const UAttackAttributeData* data);
	virtual void tick(float delta) override;
	float getMember(Stat AttackAttributes::* member) const {
		return _attackAttributes.getMember(member);
	}
	const BaseAttributeWrapper<AttackAttributes, UAttackAttributeData>& getAttackAttributeWrapper() const { return _attackAttributes; }
	virtual void launchAttack(const FVector& forward);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAttackTemplate : public UBaseTemplate {
	GENERATED_BODY()

protected:
	virtual void replaceOverrides() override {
		_attackConfig->replaceOverrides();
		_attackAttributes->replaceOverrides();
	}

public:
	UPROPERTY(EditAnywhere, Instanced)
	UAttackConfig* _attackConfig;
	UPROPERTY(EditAnywhere, Instanced)
	UAttackAttributeData* _attackAttributes;

	UAttackTemplate(const FObjectInitializer& init) : Super(init) {
		_attackConfig = init.CreateDefaultSubobject<UAttackConfig>(this, "_attackConfig");
		_attackAttributes = init.CreateDefaultSubobject<UAttackAttributeData>(this, "_attackAttributes");
	}
	virtual std::unique_ptr<AttackFactory> createFactory(ACombatant* owner) const;
};