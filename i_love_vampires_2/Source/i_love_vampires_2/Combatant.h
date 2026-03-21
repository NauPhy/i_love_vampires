#pragma once

#include "CoreMinimal.h"
//
#include "GameFramework/Pawn.h"
#include "SpriteEnum.h"
#include "Engine/DataAsset.h"
#include "EffectStruct.h"
//
#include "BaseConfig.h"
#include "Active.h"
//
#include "BaseAttributes.h"
//
#include "BaseAttributeComponent.h"
//
#include "BaseAttributeSet.h"
//
#include "BaseTemplate.h"
//
#include "Combatant.generated.h"

class UPaperFlipbookComponent;
class UActive;
class UStatusEffect;
class ACombatantAttributeSet;

UCLASS()
class I_LOVE_VAMPIRES_2_API ACombatant : public APawn
{
	GENERATED_BODY()

	bool _isInitialised = false;
	FVector _myForwardVector;

	//WARNING May cause errors. Use initialise(template) instead if possible.
	//void initialise_ACombatant(const FPrimaryAssetId&);

protected:
	UPROPERTY(VisibleAnywhere, Category = "ACombatant")
	UCombatantConfig* _config = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "ACombatant")
	ACombatantAttributeSet* _attributeSet = nullptr;
	UPROPERTY(VisibleAnywhere, Category = "ACombatant")
	TArray<UActive*> _activeAbilities;



	void lookAtDirection(float, float);
	virtual void onCurrentHPChanged(float oldHP, float newHP);
	static void exchangeContactDamage(ACombatant* left, ACombatant* right);
	bool getAttributes(UCombatantAttributes*&);

public:
	UPROPERTY(VisibleAnywhere, Category = "ACombatant")
	UPaperFlipbookComponent* _combatantFlipbook;

	ACombatant();
	
	UFUNCTION(BlueprintCallable)
	void initialise_ACombatant(const UCombatantTemplate* data);
 	virtual void myInitialise(const UCombatantTemplate* templateVal) { initialise_ACombatant(templateVal); }
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	void burnTick();
	virtual void Tick(float DeltaTime) override;
	void inflictStatus(UStatusEffect*);
	void inflictStatus(const FEffectStruct&);
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
class I_LOVE_VAMPIRES_2_API UCombatantAttributes : public UBaseAttributes
{
	GENERATED_BODY()

public:
	//additive
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _maxHP = 1;
	//additive
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _currentHP = 1;
	//additive
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _damageReduction_flat = 0;
	//additive
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _damageReduction_percent = 0;
	//additive
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _healthRegen_flat = 0;
	//additive
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _healthRegen_percent = 0;
	//additive
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _critChance = 0;
	//additive
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _critMultiplier = 0;
	//multiplicative
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _attackSpeed = 1;
	//additive
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _bonusBounces = 0;
	//additive
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _bonusPierce = 0;
	//additive
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _bonusProjectiles = 0;
	//multiplicative
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _projectileSpeed = 1;
	//multiplicative
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _projectileSize = 1;
	//multiplicative
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _movementSpeed = 1;
	//multiplicative
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _range = 1;
	//additive
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _contactDamage = 0;
	//multiplicative
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _selfSize = 1;
	//multiplicative
	UPROPERTY(VisibleAnywhere, Category = "UCombatantAttributes")
	float _iFrameDuration = 1;

	UCombatantAttributes(const FObjectInitializer& init) : Super(init) {}
	virtual UCombatantAttributes* getDiscretizedCopy(UObject* outer) const override;
	static void modifyAttributes(const UBaseAttributes* mods, const UCombatantAttributes* base, UCombatantAttributes* final) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API UCombatantComponent : public UBaseAttributeComponent
{
	GENERATED_BODY()
public:
	void initialise_UCombatantComponent(const UCombatantAttributes* baseAttributes) {
		if (!IsValid(baseAttributes)) {
			LOGERROR("UCombatantComponent::initialise_UCombatantComponent - baseAttributes not valid");
			return;
		}
		_base = DuplicateObject(baseAttributes, this);
		_final = DuplicateObject(baseAttributes, this);
		_offsets = DuplicateObject(baseAttributes, this);
		zeroOffsets();
	}
	// _base and _final aren't actually used here. I pass nullptr so that I can match the function signature without unnecessary casting.
	virtual void modifyAttributes(ABaseAttributeSet* set) override {
		if (!IsValid(set)) {
			LOGERROR("UCombatantComponent::modifyAttributes - set not valid");
			return;
		}
		UCombatantAttributes::modifyAttributes(nullptr, nullptr, nullptr);
	}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API ACombatantAttributeSet : public ABaseAttributeSet
{
	GENERATED_BODY()
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = true), Category="ACombatantAttributeSet")
	UCombatantComponent* _combatantComponent;
public:
	void initialise_ACombatantAttributeSet(AActor* owner, const UCombatantAttributes* baseAttributes) {
		if (!IsValid(owner) || !IsValid(baseAttributes)) {
			LOGERROR("ACombatantAttributeSet::initialise_ACombatantAttributeSet - owner or baseAttributes not valid");
			return;
		}
		initialise_ABaseAttributeSet(owner, nullptr);
		_combatantComponent = NewObject<UCombatantComponent>(this);
		if (!IsValid(_combatantComponent)) {
			LOGERROR("ACombatantAttributeSet::initialise_ACombatant - combatantComponent not valid after creation");
			return;
		}
		_combatantComponent->initialise_UCombatantComponent(baseAttributes);
	}
	void burnTick();
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
	UCombatantAttributes* _attributes;
	UCombatantTemplate(const FObjectInitializer& init) : Super(init) {
		_config = init.CreateDefaultSubobject<UCombatantConfig>(this, "_config");
		_attributes = init.CreateDefaultSubobject<UCombatantAttributes>(this, "_attributes");
	}
};

