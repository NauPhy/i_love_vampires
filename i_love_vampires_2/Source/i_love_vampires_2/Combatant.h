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

	FVector _myForwardVector;
	std::vector<Active> _activeAbilities;
	std::unique_ptr<CombatantAttributeSet> _attributeSet = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "ACombatant")
	TObjectPtr<const UCombatantConfig> _config = nullptr;


protected:
	void lookAtDirection(float, float);
	virtual void onCurrentHPChanged(float oldHP, float newHP);
	static void exchangeContactDamage(ACombatant* left, ACombatant* right);

	const UCombatantConfig* getConfig() const { return _config.Get(); }

public:
	UPROPERTY(VisibleAnywhere, Category = "ACombatant")
	UPaperFlipbookComponent* _combatantFlipbook;

	ACombatant();
	void initialise_ACombatant(const UCombatantTemplate* temp);
	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;
	void inflictStatus(const FEffectStruct&);
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

	UCombatantAttributes(const FObjectInitializer& init) : Super(init) {}
};

///////////////////////////////////////////////////////////////////////////////

class CombatantAttributes : public BaseAttributes {
	const static EStatus _DAMAGE = EStatusEffect::Damage;
	const static EStatus _BLEED = EStatusEffect::Bleed;
	const static EStatus _BURN = EStatusEffect::Burn;

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
	virtual void discretizeFull() override;
	virtual void applyStatus(const FStatusEffect* status, float delta) override;
	void modifyAttributes() {}
};

///////////////////////////////////////////////////////////////////////////////

class CombatantAttributeSet : public BaseAttributeSet {
	BaseAttributeWrapper<CombatantAttributes> _attributes;
public:
	CombatantAttributeSet() = delete;
	CombatantAttributeSet(const UCombatantAttributeData* attr) : _attributes(CombatantAttributes(attr)) {}
	virtual void tick(float delta) override {
		_attributes.tick(delta, getStatusEffects());
		BaseAttributeSet::tick(delta);
	}
	float getMember(float CombatantAttributes::* member) const {
		return _attributes.getMember(member);
	}
	const BaseAttributeWrapper<CombatantAttributes>& getAttributeWrapper() const {return _attributes;}
};
///////////////////////////////////////////////////////////////////////////////

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
		_attributes = init.CreateDefaultSubobject<UCombatantAttributes>(this, "_attributes");
	}
};