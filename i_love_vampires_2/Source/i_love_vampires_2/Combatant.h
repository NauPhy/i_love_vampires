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
	UPROPERTY()
	UCombatantConfig* _config = nullptr;
	UPROPERTY()
	ACombatantAttributeSet* _attributeSet = nullptr;
	UPROPERTY()
	TArray<UActive*> _activeAbilities;



	void lookAtDirection(float, float);
	virtual void onCurrentHPChanged(float oldHP, float newHP);
	static void exchangeContactDamage(ACombatant* left, ACombatant* right);
	bool getAttributes(UCombatantAttributes*&);

public:
	UPROPERTY(VisibleAnywhere, Category = "Components")
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
	UPROPERTY(EditAnywhere, Category = "UCombatantConfig")
	FString _name = "Combatant";
	UPROPERTY(EditAnywhere, Category = "UCombatantConfig")
	ESprite _sprite = static_cast<ESprite>(0);
	UPROPERTY(EditAnywhere, Category = "UCombatantConfig")
	TArray<UWeaponTemplate*> _startingWeapons;
	UPROPERTY(EditAnywhere, Category = "UCombatantConfig")
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
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _maxHP = 1;
	//additive
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _currentHP = 1;
	//additive
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _damageReduction_flat = 0;
	//additive
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _damageReduction_percent = 0;
	//additive
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _healthRegen_flat = 0;
	//additive
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _healthRegen_percent = 0;
	//additive
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _critChance = 0;
	//additive
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _critMultiplier = 0;
	//multiplicative
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _attackSpeed = 1;
	//additive
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _bonusBounces = 0;
	//additive
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _bonusPierce = 0;
	//additive
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _bonusProjectiles = 0;
	//multiplicative
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _projectileSpeed = 1;
	//multiplicative
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _projectileSize = 1;
	//multiplicative
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _movementSpeed = 1;
	//multiplicative
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _range = 1;
	//additive
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _contactDamage = 0;
	//multiplicative
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _selfSize = 1;
	//multiplicative
	UPROPERTY(EditAnywhere, Category = "UCombatantAttributes")
	float _iFrameDuration = 1;

	UCombatantAttributes(const FObjectInitializer& init) : Super(init) {}
	virtual UCombatantAttributes* getDiscretizedCopy(UObject* outer) const override;
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API UCombatantComponent : public UBaseAttributeComponent
{
	GENERATED_BODY()
public:
	void initialise_UCombatantComponent(const UCombatantAttributes* baseAttributes) {
		_base = DuplicateObject(baseAttributes, this);
		_final = DuplicateObject(baseAttributes, this);
		_offsets = DuplicateObject(baseAttributes, this);
	}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API ACombatantAttributeSet : public ABaseAttributeSet
{
	GENERATED_BODY()
	UCombatantComponent* _combatantComponent;
public:
	void initialise_ACombatantAttributeSet(const UCombatantAttributes* baseAttributes) {
		_combatantComponent = NewObject<UCombatantComponent>(this);
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
	UPROPERTY(EditAnywhere, Instanced, Category = "UCombatantTemplate")
	UCombatantConfig* _config;
	UPROPERTY(EditAnywhere, Instanced, Category = "UCombatantTemplate")
	UCombatantAttributes* _attributes;
	UCombatantTemplate(const FObjectInitializer& init) : Super(init) {
		_config = init.CreateDefaultSubobject<UCombatantConfig>(this, "_config");
		_attributes = init.CreateDefaultSubobject<UCombatantAttributes>(this, "_attributes");
	}
};

