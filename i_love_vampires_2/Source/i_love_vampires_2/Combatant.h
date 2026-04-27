#pragma once

#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include <functional>
#include <unordered_map>
#include "BaseLevelContainer.h"
// ACombatant
#include "GameFramework/Pawn.h"
//#include "SpriteEnum.h"
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
#include "PaperFlipbook.h"
// UCombatantTemplate
#include "BaseTemplate.h"
//
#include "Combatant.generated.h"
class UCombatantAttributeData;
class CombatantAttributes;
class CombatantAttributeSet;
class UCombatantConfig;
class UCombatantTemplate;
class UWeaponTemplate;
class Passive;

class UPaperFlipbookComponent;
class Active;
UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API ACombatant : public APawn
{
	GENERATED_BODY()

	const static inline EStatus _DAMAGE = EStatus::damage;
	const static inline int _MAX_WEAPONS = 2;
	const static inline float _DAMAGE_THRESHOLD = 0.5f;

	FVector _myForwardVector;
	std::vector<Active> _activeAbilities;
	std::unique_ptr<CombatantAttributeSet> _attributeSet = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<const UCombatantConfig> _config = nullptr;
	/*UPROPERTY()
	UPassiveContainer* _passiveContainer = nullptr;*/
	std::shared_ptr<std::vector<Passive>> _passives;

	void givePassive_internal(const UPassiveData* data);
	void giveWeapon_internal(const UWeaponTemplate* data);


protected:
	void lookAtDirection(float x, float y);
	// Returns true iff onKilled() is called
	virtual bool onCurrentHPChanged(float oldHP, float newHP);
	static void exchangeContactDamage(ACombatant* left, ACombatant* right);
	virtual void onKilled();

	const UCombatantConfig* getConfig() const { return _config.Get(); }

public:
	UPROPERTY(EditAnywhere)
	UPaperFlipbookComponent* _combatantFlipbook;
	UPROPERTY(EditAnywhere)
	UPaperFlipbookComponent* _overlayFlipbook;

	ACombatant();
	UFUNCTION(BlueprintCallable)
	void initialise_ACombatant(UCombatantTemplate* temp);
	virtual void myInitialise(UCombatantTemplate* temp) {
		initialise_ACombatant(temp);
	}
	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;

	std::shared_ptr<const CombatantAttributes> getAttributes() const;
	float getAttributeMember(Stat CombatantAttributes::* member) const;
	const FVector& myGetForwardVector() const { return _myForwardVector; }
	std::shared_ptr<const std::vector<Passive>> getPassives() const { return _passives; }
	void inflictStatus(const FEffectStruct&);

	UFUNCTION(BlueprintCallable) float getHP() const;
	UFUNCTION(BlueprintCallable) float getMaxHP() const;
	UFUNCTION(BlueprintCallable) bool canGiveWeapon() const;
	UFUNCTION(BlueprintCallable) bool canUpgradeWeapon() const;
	UFUNCTION(BlueprintCallable) bool canGivePassive() const { return true; }
	UFUNCTION(BlueprintCallable) bool canUpgradePassive() const;
	UFUNCTION(BlueprintCallable) TArray<UWeaponTemplate*> getUpgradableWeapons() const;
	UFUNCTION(BlueprintCallable) TArray<UPassiveData*> getUpgradablePassives() const;
	UFUNCTION(BlueprintCallable) TArray<UWeaponTemplate*> getMaxedWeapons() const;
	UFUNCTION(BlueprintCallable) TArray<UWeaponTemplate*> getAllWeapons() const;
	UFUNCTION(BlueprintCallable) TArray<UPassiveData*> getAllPassives() const;
	UFUNCTION(BlueprintCallable) void giveWeapon(UWeaponTemplate* data);
	UFUNCTION(BlueprintCallable) void upgradeWeapon(UWeaponTemplate* data);
	UFUNCTION(BlueprintCallable) void givePassive(UPassiveData* data);
	UFUNCTION(BlueprintCallable) void upgradePassive(UPassiveData* data) {}
};
///////////////////////////////////////////////////////////////////////////////

//UCLASS()
//class UPassiveContainer : public UObject
//{
//	GENERATED_BODY()
//
//public:
//	UPROPERTY()
//	TArray<TObjectPtr<const UCombatantPassive>> _passives;
//	TArray<UCombatantPassive*> getDiskPassives() const;
//};

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UCombatantAttributeData : public UBaseAttributeData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _maxHP = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _currentHP = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _damageReduction_flat = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _damageReduction_percent = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _healthRegen_flat = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _healthRegen_percent = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _critChance = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _critMultiplier = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _attackSpeed = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _bonusBounces = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _bonusPierce = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _bonusProjectiles = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _projectileSpeed = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _projectileSize = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _movementSpeed = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _range = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _contactDamage = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _selfSize = SENTINEL_FLOAT;
	UPROPERTY(EditAnywhere, BlueprintReadOnly) float _iFrameDuration = SENTINEL_FLOAT;
	UCombatantAttributeData(const FObjectInitializer& init) : Super(init) {}
	virtual void replaceOverrides() override;
	std::vector<float> getStatVector() const;
};

template<>
class DefaultProxy<UCombatantAttributeData> {
public:
	using self = UCombatantAttributeData;
	const static std::unordered_map<float(self::*), float, helpers::MemberPtrHash>& get() {
		const static std::unordered_map<float(self::*), float, helpers::MemberPtrHash> temp = {
		{ &self::_maxHP, 100 },
		{ &self::_currentHP, 100 },
		{ &self::_damageReduction_flat, 0 },
		{ &self::_damageReduction_percent, 0 },
		{ &self::_healthRegen_flat, 0 },
		{ &self::_healthRegen_percent, 0 },
		{ &self::_critChance, 0 },
		{ &self::_critMultiplier, 0 },
		{ &self::_attackSpeed, 1 },
		{ &self::_bonusBounces, 0 },
		{ &self::_bonusPierce, 0 },
		{ &self::_bonusProjectiles, 0 },
		{ &self::_projectileSpeed, 1 },
		{ &self::_projectileSize, 1 },
		{ &self::_movementSpeed, 1 },
		{ &self::_range, 1 },
		{ &self::_contactDamage, 0 },
		{ &self::_selfSize, 1 },
		{ &self::_iFrameDuration, 0 }
		};
		return temp;
	}
};

///////////////////////////////////////////////////////////////////////////////
#define MYSTAT(X) \
	X(_maxHP) \
	X(_currentHP) \
	X(_damageReduction_flat) \
	X(_damageReduction_percent) \
	X(_healthRegen_flat) \
	X(_healthRegen_percent) \
	X(_critChance) \
	X(_critMultiplier) \
	X(_attackSpeed) \
	X(_bonusBounces) \
	X(_bonusPierce) \
	X(_bonusProjectiles) \
	X(_projectileSpeed) \
	X(_projectileSize) \
	X(_movementSpeed) \
	X(_range) \
	X(_contactDamage) \
	X(_selfSize) \
	X(_iFrameDuration)

class CombatantAttributes : public BaseAttributes {
	const static inline EStatus _DAMAGE = EStatus::damage;
	const static inline EStatus _BLEED = EStatus::bleed;
	const static inline EStatus _BURN = EStatus::burn;
	const static inline EStatus _POISON = EStatus::poison;
	const static inline EStatus _EXECUTE = EStatus::execute;
	const static inline EStatus _CHILL = EStatus::chill;
	const static inline EStatus _DECAY = EStatus::decay;
	const static inline EStatus _DECAY_INSTANT = EStatus::decay_instant;
	const static inline EStatus _DEATH = EStatus::instantDeath;

	std::weak_ptr<const std::vector<Passive>> _passives;

public:
	MYSTAT(BASEATTRIBUTES_DECLARE);

	CombatantAttributes() = delete;
	CombatantAttributes(const CombatantAttributes& other);
	CombatantAttributes(CombatantAttributes&& other);
	CombatantAttributes& operator=(const CombatantAttributes& other) = delete;
	CombatantAttributes& operator=(CombatantAttributes&& other) = delete;
	CombatantAttributes(const UCombatantAttributeData* attr, std::shared_ptr<const std::vector<Passive>> passives);
	CombatantAttributes(const UCombatantAttributeData* attr);

	virtual void discretizeFull() override;
	virtual void applyStatus(UObject* context, const FEffectStruct& status, float delta) override;
	virtual void tick(UObject* context, float delta, const TArray<FEffectStruct>& statusEffects) override;
	virtual bool isCompatibleWith(const UBaseAttributeData* data) const override { return dynamic_cast<const UCombatantAttributeData*>(data) != nullptr; }
	void applyToAllStats(const std::function<void(Stat&)>& func) override {
		MYSTAT(BASEATTRIBUTES_APPLY);
	}
	void applyToAllStats(const std::function<void(const Stat&)>& func) const override {
		MYSTAT(BASEATTRIBUTES_APPLY);
	}

	CombatantAttributes& prebonusAdd(const UCombatantAttributeData*);
	CombatantAttributes& postbonusAdd(const UCombatantAttributeData*);
	CombatantAttributes& multiplierAdd(const UCombatantAttributeData*);
};
#undef MYSTAT

///////////////////////////////////////////////////////////////////////////////

class CombatantAttributeSet : public BaseAttributeSet {
	const static inline EStatus _DAMAGE = EStatus::damage;

	float _iFrameTimeRemaining = 0;
	std::unique_ptr<BaseAttributeWrapper<CombatantAttributes>> _attributes;
public:
	CombatantAttributeSet() = delete;
	CombatantAttributeSet(const CombatantAttributeSet& other) = delete;
	CombatantAttributeSet(CombatantAttributeSet&& other);
	CombatantAttributeSet& operator=(const CombatantAttributeSet& other) = delete;
	CombatantAttributeSet& operator=(CombatantAttributeSet&& other) = delete;
	CombatantAttributeSet(ACombatant* owner, const UCombatantAttributeData* attr);
	void tick(float delta) override;
	float getMember(Stat CombatantAttributes::* member) const {
		if (!_attributes) {
			LOGERROR("Attempting to access uninitialized CombatantAttributeSet attributes");
			return 0;
		}
		return _attributes->getMember(member);
	}
	const BaseAttributeWrapper<CombatantAttributes>& getAttributeWrapper() const {return *_attributes;}
};
///////////////////////////////////////////////////////////////////////////////

class UWeaponTemplate;
class UPassiveData;

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UCombatantConfig : public UBaseConfig
{
	GENERATED_BODY()

	struct defaults {
		FString _name = "Combatant";
		TSubclassOf<ACombatant> _combatantClass = ACombatant::StaticClass();
	};
	const static inline defaults _defaults;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString _name = "_invalid_";
	// No sentinel needed
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TObjectPtr<UWeaponTemplate>> _startingWeapons = {};
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TObjectPtr<UPassiveData>> _startingPassives = {};
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<ACombatant> _combatantClass = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<UPaperFlipbook> _sprite = nullptr;

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

///////////////////////////////////////////////////////////////////////////////
UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UPassiveLevelData : public UBaseLevelContainer
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly)
	TObjectPtr<UCombatantAttributeData> _prebonus;
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly)
	TObjectPtr<UCombatantAttributeData> _postbonus;
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly)
	TObjectPtr<UCombatantAttributeData> _multiplier;

	UPassiveLevelData(const FObjectInitializer& init) : Super(init) {
		_prebonus = init.CreateDefaultSubobject<UCombatantAttributeData>(this, "_prebonus");
		_postbonus = init.CreateDefaultSubobject<UCombatantAttributeData>(this, "_postbonus");
		_multiplier = init.CreateDefaultSubobject<UCombatantAttributeData>(this, "_multiplier");
	}
	virtual void replaceOverrides() override {
		_prebonus->zeroSentinelOverride();
		_postbonus->zeroSentinelOverride();
		_multiplier->zeroSentinelOverride();
	}
	std::vector<Stat> getStatVector() const;
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UPassiveData : public UBaseTemplate
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly)
	TArray<TObjectPtr<UPassiveLevelData>> _levels;
	virtual void replaceOverrides() override {
		// The defaults are applied to the base values, these are offsets so the default is 0.
		for (auto& level : _levels) {
			level->replaceOverrides();
		}
	}
}; 
class Passive {
	int _level = 0;
	TArray<const TObjectPtr<const UPassiveLevelData>> _levels = {};
	TObjectPtr<const UPassiveData> _data = nullptr;
public:
	Passive() = delete;
	Passive(const UPassiveData* data) : _data(data) {
		if (!IsValid(data)) {
			LOGERROR("Attempting to construct Passive with invalid data");
			return;
		}
		for (const auto& level : data->_levels) {
			if (!IsValid(level)) {
				LOGERROR("Attempting to construct Passive with invalid level data");
				return;
			}
			_levels.Add(level);
		}
	}
	UPassiveData* getDiskData() const;
	bool isUpgradable() const { return (_level + 1) <= _levels.Num() - 1; }
	void upgrade();
	const UCombatantAttributeData* getPrebonus() const;
	const UCombatantAttributeData* getPostbonus() const;
	const UCombatantAttributeData* getMultiplier() const;
};