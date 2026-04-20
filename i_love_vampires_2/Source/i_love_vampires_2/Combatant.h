#pragma once

#include "CoreMinimal.h"
#include "Templates/SharedPointer.h"
#include <functional>
#include <unordered_map>
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
class UCombatantPassive;

class UPaperFlipbookComponent;
class Active;
UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API ACombatant : public APawn
{
	GENERATED_BODY()

	const static inline EStatus _DAMAGE = EStatus::damage;

	FVector _myForwardVector;
	std::vector<Active> _activeAbilities;
	std::unique_ptr<CombatantAttributeSet> _attributeSet = nullptr;
	UPROPERTY(EditAnywhere)
	TObjectPtr<const UCombatantConfig> _config = nullptr;
	UPROPERTY()
	UPassiveContainer* _passiveContainer = nullptr;


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

	ACombatant();
	void initialise_ACombatant(const UCombatantTemplate* temp);
	virtual void myInitialise(const UCombatantTemplate* temp) {
		initialise_ACombatant(temp);
	}
	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;
	void inflictStatus(const FEffectStruct&);
	std::shared_ptr<const CombatantAttributes> getAttributes() const;
	float getAttributeMember(Stat CombatantAttributes::* member) const;
	const FVector& myGetForwardVector() const { return _myForwardVector; }
	UFUNCTION(BlueprintCallable)
	void giveWeapon(const UWeaponTemplate* data);
	UFUNCTION(BlueprintCallable)
	void givePassive(const UCombatantPassive* data);
	UFUNCTION(BlueprintCallable)
	float getHP() const;
	UFUNCTION(BlueprintCallable)
	float getMaxHP() const;
	const UPassiveContainer* getPassives() const { return _passiveContainer; }
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class UPassiveContainer : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<TObjectPtr<const UCombatantPassive>> _passives;
};

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
};

template<>
class DefaultProxy<UCombatantAttributeData> {
public:
	using self = UCombatantAttributeData;
	const static std::unordered_map<float(self::*), float, helpers::MemberPtrHash>& get() {
		const static std::unordered_map<float(self::*), float, helpers::MemberPtrHash> temp = {
		{ &self::_maxHP, 60 },
		{ &self::_currentHP, 60 },
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
		{ &self::_iFrameDuration, 1 }
		};
		return temp;
	}
};

///////////////////////////////////////////////////////////////////////////////
#define STAT(X) \
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

	std::vector<Stat> getStatVector();
	TWeakObjectPtr<const UPassiveContainer> _passiveContainer = nullptr;

public:
	STAT(BASEATTRIBUTES_DECLARE);

	CombatantAttributes() = delete;
	CombatantAttributes(const CombatantAttributes& other);
	CombatantAttributes(CombatantAttributes&& other);
	CombatantAttributes& operator=(const CombatantAttributes& other) = delete;
	CombatantAttributes& operator=(CombatantAttributes&& other) = delete;
	CombatantAttributes(const UCombatantAttributeData* attr, const UPassiveContainer* passives);

	virtual void discretizeFull() override;
	virtual void applyStatus(UObject* context, const FEffectStruct& status, float delta) override;
	virtual void tick(UObject* context, float delta, const TArray<FEffectStruct>& statusEffects) override;
	void applyToAllStats(const std::function<void(Stat&)>& func) override {
		STAT(BASEATTRIBUTES_APPLY);
	}
	void applyToAllStats(const std::function<void(const Stat&)>& func) const override {
		STAT(BASEATTRIBUTES_APPLY);
	}

	CombatantAttributes& prebonusAdd(CombatantAttributes&);
	CombatantAttributes& postbonusAdd(CombatantAttributes&);
	CombatantAttributes& multiplierAdd(CombatantAttributes&);
};
#undef STAT

///////////////////////////////////////////////////////////////////////////////

class CombatantAttributeSet : public BaseAttributeSet {
	const static inline EStatus _DAMAGE = EStatus::damage;

	float _iFrameTimeRemaining = 0;
	std::unique_ptr<BaseAttributeWrapper<CombatantAttributes>> _attributes = nullptr;
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
	TArray<TObjectPtr<UCombatantPassive>> _startingPassives = {};
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

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UCombatantPassive : public UBaseTemplate
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly)
	UCombatantAttributeData* _prebonus;
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly)
	UCombatantAttributeData* _postbonus;
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly)
	UCombatantAttributeData* _multiplier;
	UCombatantPassive(const FObjectInitializer& init) : Super(init) {
		_prebonus = init.CreateDefaultSubobject<UCombatantAttributeData>(this, "_prebonus");
		_postbonus = init.CreateDefaultSubobject<UCombatantAttributeData>(this, "_postbonus");
		_multiplier = init.CreateDefaultSubobject<UCombatantAttributeData>(this, "_multiplier");
	}
	virtual void replaceOverrides() override {
		_prebonus->replaceOverrides();
		_postbonus->replaceOverrides();
		_multiplier->replaceOverrides();
	}
}; 