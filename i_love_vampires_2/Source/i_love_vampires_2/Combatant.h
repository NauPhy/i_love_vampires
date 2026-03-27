#pragma once

#include "CoreMinimal.h"
// ACombatant
#include "GameFramework/Pawn.h"
#include "SpriteEnum.h"
#include "Engine/DataAsset.h"
#include "EffectStruct.h"
#include <memory>
// UCombatantAttributeData
#include "BaseAttributeData.h"
// CombatantAttributes
#include "BaseAttributes.h"
// CombatantAttributeSet
#include "BaseAttributeSet.h"
#include "BaseAttributeWrapper.h"
// UCombatantConfig
#include "BaseConfig.h"
// UCombatantTemplate
#include "BaseTemplate.h"
//
#include "Combatant.generated.h"
class UCombatantAttributeData;
class CombatantAttributes;
class CombatantAttributeSet;
class UCombatantConfig;
class UCombatantTemplate;

class UPaperFlipbookComponent;
class Active;
UCLASS()
class I_LOVE_VAMPIRES_2_API ACombatant : public APawn
{
	GENERATED_BODY()

	const static EStatus _DAMAGE = EStatus::damage;

	FVector _myForwardVector;
	std::vector<Active> _activeAbilities;
	std::unique_ptr<CombatantAttributeSet> _attributeSet = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "ACombatant")
	TObjectPtr<const UCombatantConfig> _config = nullptr;


protected:
	void lookAtDirection(float x, float y);
	virtual void onCurrentHPChanged(float oldHP, float newHP);
	static void exchangeContactDamage(ACombatant* left, ACombatant* right);

	const UCombatantConfig* getConfig() const { return _config.Get(); }

public:
	UPROPERTY(VisibleAnywhere, Category = "ACombatant")
	UPaperFlipbookComponent* _combatantFlipbook;

	ACombatant();
	void initialise_ACombatant(const UCombatantTemplate* temp);
	virtual void myInitialise(const UCombatantTemplate* temp) {
		initialise_ACombatant(temp);
	}
	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;
	void inflictStatus(const FEffectStruct&);
	const CombatantAttributes& getAttributes() const;
	float getAttributeMember(Stat CombatantAttributes::* member) const;
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UCombatantAttributeData : public UBaseAttributeData
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _maxHP = 1;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _currentHP = 1;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _damageReduction_flat = 0;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _damageReduction_percent = 0;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _healthRegen_flat = 0;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _healthRegen_percent = 0;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _critChance = 0;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _critMultiplier = 0;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _attackSpeed = 1;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _bonusBounces = 0;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _bonusPierce = 0;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _bonusProjectiles = 0;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _projectileSpeed = 1;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _projectileSize = 1;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _movementSpeed = 1;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _range = 1;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _contactDamage = 0;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _selfSize = 1;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _iFrameDuration = 1;

	UCombatantAttributeData(const FObjectInitializer& init) : Super(init) {}
};

///////////////////////////////////////////////////////////////////////////////

class CombatantAttributes : public BaseAttributes {
	const static EStatus _DAMAGE = EStatus::damage;
	const static EStatus _BLEED = EStatus::bleed;
	const static EStatus _BURN = EStatus::burn;

public:
	Stat _maxHP;
	Stat _currentHP;
	Stat _damageReduction_flat;
	Stat _damageReduction_percent;
	Stat _healthRegen_flat;
	Stat _healthRegen_percent;
	Stat _critChance;
	Stat _critMultiplier;
	Stat _attackSpeed;
	Stat _bonusBounces;
	Stat _bonusPierce;
	Stat _bonusProjectiles;
	Stat _projectileSpeed;
	Stat _projectileSize;
	Stat _movementSpeed;
	Stat _range;
	Stat _contactDamage;
	Stat _selfSize;
	Stat _iFrameDuration;

	CombatantAttributes() = delete;
	CombatantAttributes(const UCombatantAttributeData* attr);
	CombatantAttributes(const CombatantAttributes& other);
	CombatantAttributes(CombatantAttributes&& other);
	virtual void discretizeFull() override;
	virtual void applyStatus(UObject* context, const FEffectStruct& status, float delta) override;
	virtual void applyToAllStats(const std::function<void(Stat&)>& func) override;
};

///////////////////////////////////////////////////////////////////////////////

class CombatantAttributeSet : public BaseAttributeSet {
	BaseAttributeWrapper<CombatantAttributes, UCombatantAttributeData> _attributes;
public:
	CombatantAttributeSet() = delete;
	CombatantAttributeSet(ACombatant* owner, const UCombatantAttributeData* attr) : _attributes(owner, attr) {}
	virtual void tick(float delta) override {
		_attributes.tick(delta, getStatusEffects());
		BaseAttributeSet::tick(delta);
	}
	float getMember(Stat CombatantAttributes::* member) const {
		return _attributes.getMember(member);
	}
	const BaseAttributeWrapper<CombatantAttributes, UCombatantAttributeData>& getAttributeWrapper() const {return _attributes;}
};
///////////////////////////////////////////////////////////////////////////////

class UWeaponTemplate;

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UCombatantConfig : public UBaseConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Category = "UCombatantConfig")
	FString _name = "Combatant";
	UPROPERTY(VisibleAnywhere, Category = "UCombatantConfig")
	ESprite _sprite = static_cast<ESprite>(0);
	UPROPERTY(VisibleAnywhere, Category = "UCombatantConfig")
	TArray<UWeaponTemplate*> _startingWeapons;
	UPROPERTY(VisibleAnywhere, Category = "UCombatantConfig")
	TSubclassOf<ACombatant> _combatantClass = ACombatant::StaticClass();

	UCombatantConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UCombatantTemplate : public UBaseTemplate
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, Instanced, Category = "UCombatantTemplate")
	UCombatantConfig* _config;
	UPROPERTY(VisibleAnywhere, Instanced, Category = "UCombatantTemplate")
	UCombatantAttributeData* _attributes;
	UCombatantTemplate(const FObjectInitializer& init) : Super(init) {
		_config = init.CreateDefaultSubobject<UCombatantConfig>(this, "_config");
		_attributes = init.CreateDefaultSubobject<UCombatantAttributeData>(this, "_attributes");
	}
};


//Template stuff
CombatantAttributes::CombatantAttributes(const UCombatantAttributeData* attr) :
	_maxHP(attr->_maxHP),
	_currentHP(attr->_currentHP),
	_damageReduction_flat(attr->_damageReduction_flat),
	_damageReduction_percent(attr->_damageReduction_percent),
	_healthRegen_flat(attr->_healthRegen_flat),
	_healthRegen_percent(attr->_healthRegen_percent),
	_critChance(attr->_critChance),
	_critMultiplier(attr->_critMultiplier),
	_attackSpeed(attr->_attackSpeed),
	_bonusBounces(attr->_bonusBounces),
	_bonusPierce(attr->_bonusPierce),
	_bonusProjectiles(attr->_bonusProjectiles),
	_projectileSpeed(attr->_projectileSpeed),
	_projectileSize(attr->_projectileSize),
	_movementSpeed(attr->_movementSpeed),
	_range(attr->_range),
	_contactDamage(attr->_contactDamage),
	_selfSize(attr->_selfSize),
	_iFrameDuration(attr->_iFrameDuration)
{
}
CombatantAttributes::CombatantAttributes(const CombatantAttributes& other) :
	_maxHP(other._maxHP),
	_currentHP(other._currentHP),
	_damageReduction_flat(other._damageReduction_flat),
	_damageReduction_percent(other._damageReduction_percent),
	_healthRegen_flat(other._healthRegen_flat),
	_healthRegen_percent(other._healthRegen_percent),
	_critChance(other._critChance),
	_critMultiplier(other._critMultiplier),
	_attackSpeed(other._attackSpeed),
	_bonusBounces(other._bonusBounces),
	_bonusPierce(other._bonusPierce),
	_bonusProjectiles(other._bonusProjectiles),
	_projectileSpeed(other._projectileSpeed),
	_projectileSize(other._projectileSize),
	_movementSpeed(other._movementSpeed),
	_range(other._range),
	_contactDamage(other._contactDamage),
	_selfSize(other._selfSize),
	_iFrameDuration(other._iFrameDuration)
{
}
CombatantAttributes::CombatantAttributes(CombatantAttributes&& other) :
	_maxHP(std::move(other._maxHP)),
	_currentHP(std::move(other._currentHP)),
	_damageReduction_flat(std::move(other._damageReduction_flat)),
	_damageReduction_percent(std::move(other._damageReduction_percent)),
	_healthRegen_flat(std::move(other._healthRegen_flat)),
	_healthRegen_percent(std::move(other._healthRegen_percent)),
	_critChance(std::move(other._critChance)),
	_critMultiplier(std::move(other._critMultiplier)),
	_attackSpeed(std::move(other._attackSpeed)),
	_bonusBounces(std::move(other._bonusBounces)),
	_bonusPierce(std::move(other._bonusPierce)),
	_bonusProjectiles(std::move(other._bonusProjectiles)),
	_projectileSpeed(std::move(other._projectileSpeed)),
	_projectileSize(std::move(other._projectileSize)),
	_movementSpeed(std::move(other._movementSpeed)),
	_range(std::move(other._range)),
	_contactDamage(std::move(other._contactDamage)),
	_selfSize(std::move(other._selfSize)),
	_iFrameDuration(std::move(other._iFrameDuration))
{
}