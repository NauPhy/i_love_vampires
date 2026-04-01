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

	const static inline EStatus _DAMAGE = EStatus::damage;

	FVector _myForwardVector;
	std::vector<Active> _activeAbilities;
	std::unique_ptr<CombatantAttributeSet> _attributeSet = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<const UCombatantConfig> _config = nullptr;


protected:
	void lookAtDirection(float x, float y);
	virtual void onCurrentHPChanged(float oldHP, float newHP);
	static void exchangeContactDamage(ACombatant* left, ACombatant* right);
	virtual void onKilled() { Destroy(); }

	const UCombatantConfig* getConfig() const { return _config.Get(); }

public:
	UPROPERTY(EditAnywhere)
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

	struct defaults {
		float _maxHP = 60;
		float _currentHP = 60;
		float _damageReduction_flat = 0;
		float _damageReduction_percent = 0;
		float _healthRegen_flat = 0;
		float _healthRegen_percent = 0;
		float _critChance = 0;
		float _critMultiplier = 0;
		float _attackSpeed = 1;
		float _bonusBounces = 0;
		float _bonusPierce = 0;
		float _bonusProjectiles = 0;
		float _projectileSpeed = 1;
		float _projectileSize = 1;
		float _movementSpeed = 1;
		float _range = 1;
		float _contactDamage = 0;
		float _selfSize = 1;
		float _iFrameDuration = 1;
	};
	const static inline defaults _defaults;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _maxHP = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _currentHP = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _damageReduction_flat = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _damageReduction_percent = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _healthRegen_flat = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _healthRegen_percent = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _critChance = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _critMultiplier = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _attackSpeed = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _bonusBounces = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _bonusPierce = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _bonusProjectiles = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _projectileSpeed = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _projectileSize = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _movementSpeed = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _range = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _contactDamage = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _selfSize = -999;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float _iFrameDuration = -999;

	UCombatantAttributeData(const FObjectInitializer& init) : Super(init) {}
	virtual void replaceOverrides() override;
};

///////////////////////////////////////////////////////////////////////////////

class CombatantAttributes : public BaseAttributes {
	const static inline EStatus _DAMAGE = EStatus::damage;
	const static inline EStatus _BLEED = EStatus::bleed;
	const static inline EStatus _BURN = EStatus::burn;

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
	CombatantAttributes(const CombatantAttributes& other);
	CombatantAttributes(CombatantAttributes&& other);
	CombatantAttributes& operator=(const CombatantAttributes& other) = delete;
	CombatantAttributes& operator=(CombatantAttributes&& other) = delete;
	CombatantAttributes(const UCombatantAttributeData* attr);
	virtual void discretizeFull() override;
	virtual void applyStatus(UObject* context, const FEffectStruct& status, float delta) override;
	virtual void applyToAllStats(const std::function<void(Stat&)>& func) override;
};

///////////////////////////////////////////////////////////////////////////////

class CombatantAttributeSet : public BaseAttributeSet {
	BaseAttributeWrapper<CombatantAttributes, UCombatantAttributeData> _attributes;
public:
	CombatantAttributeSet() = delete;
	CombatantAttributeSet(const CombatantAttributeSet& other) = delete;
	CombatantAttributeSet(CombatantAttributeSet&& other);
	CombatantAttributeSet& operator=(const CombatantAttributeSet& other) = delete;
	CombatantAttributeSet& operator=(CombatantAttributeSet&& other) = delete;
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

	struct defaults {
		FString _name = "Combatant";
		ESprite _sprite = static_cast<ESprite>(0);
		TSubclassOf<ACombatant> _combatantClass = ACombatant::StaticClass();
	};
	const static inline defaults _defaults;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString _name = "_invalid_";
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	ESprite _sprite = static_cast<ESprite>(static_cast<uint8>(255));
	// No sentinel needed
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TObjectPtr<UWeaponTemplate>> _startingWeapons = {};
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<ACombatant> _combatantClass = nullptr;

	UCombatantConfig(const FObjectInitializer& init) : Super(init) {}
	virtual void replaceOverrides() override;
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UCombatantTemplate : public UBaseTemplate
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Instanced)
	UCombatantConfig* _config;
	UPROPERTY(EditAnywhere, Instanced)
	UCombatantAttributeData* _attributes;
	UCombatantTemplate(const FObjectInitializer& init) : Super(init) {
		_config = init.CreateDefaultSubobject<UCombatantConfig>(this, "_config");
		_attributes = init.CreateDefaultSubobject<UCombatantAttributeData>(this, "_attributes");
	}
	virtual void replaceOverrides() override {
		_config->replaceOverrides();
		_attributes->replaceOverrides();
	}
};


