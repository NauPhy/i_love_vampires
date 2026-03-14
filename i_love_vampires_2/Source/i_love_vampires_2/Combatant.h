#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpriteEnum.h"
#include "UObject/PrimaryAssetId.h"
#include "Engine/DataAsset.h"
class UPaperFlipbookComponent;
class UActive;

class ACombatantAttributeSet;

UCLASS()
class I_LOVE_VAMPIRES_2_API ACombatant : public APawn
{
	GENERATED_BODY()

	bool _isInitialised = false;

protected:
	UPROPERTY()
	UCombatantConfig* _config = nullptr;
	UPROPERTY()
	ACombatantAttributeSet* _attributeSet = nullptr;
	UPROPERTY()
	TArray<UActive*> _activeAbilities;

	virtual void onCurrentHPChanged(float oldHP, float newHP);
	static void exchangeContactDamage(ACombatant* left, ACombatant* right);
	void initialise_ACombatant(const UCombatantConfig*, const UCombatantAttributes*);
	bool getAttributes(UCombatantAttributes*&);

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACombatant")
	UPaperFlipbookComponent* _combatantFlipbook;

	ACombatant();
	void initialise_ACombatant(const FPrimaryAssetId&);
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	void burnTick();
	virtual void Tick(float DeltaTime) override;
	void inflictStatus(UStatusEffect*);
	void inflictStatus(const FEffectStruct&);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UCombatantConfig : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantConfig")
	FString _name = "Combatant";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantConfig")
	ESprite _sprite = static_cast<ESprite>(0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantConfig")
	TArray<FPrimaryAssetId> _startingWeapons;
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UCombatantAttributes : public UObject
{
	GENERATED_BODY()

public:
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _maxHP = 1;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _currentHP = 1;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _damageReduction_flat = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _damageReduction_percent = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _healthRegen_flat = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _healthRegen_percent = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _critChance = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _critMultiplier = 0;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _attackSpeed = 1;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _bonusBounces = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _bonusPierce = 0;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _bonusProjectiles = 0;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _projectileSpeed = 1;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _projectileSize = 1;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _movementSpeed = 1;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _range = 1;
	//additive
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _contactDamage = 0;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _selfSize = 1;
	//multiplicative
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantAttributes")
	float _iFrameDuration = 1;
};
///////////////////////////////////////////////////////////////////////////////

#include "BaseAttributeSet.h"
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
};
///////////////////////////////////////////////////////////////////////////////

#include "BaseAttributeComponent.h"
UCLASS()
class I_LOVE_VAMPIRES_2_API UCombatantComponent : public UBaseAttributeComponent
{
	GENERATED_BODY()
public:
	UPROPERTY()
	UCombatantAttributes* _base;
	UPROPERTY()
	UCombatantAttributes* _final;
	UPROPERTY()
	UCombatantAttributes* _offsets;
	void initialise_UCombatantComponent(const UCombatantAttributes* baseAttributes) {
		_base = DuplicateObject(baseAttributes, this);
		_final = DuplicateObject(baseAttributes, this);
		_offsets = DuplicateObject(baseAttributes, this);
	}
	virtual UBaseAttributes* getFinal() const override { return _final; }
};

///////////////////////////////////////////////////////////////////////////////
#include "BaseTemplate.h"

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UCombatantTemplate : public UBaseTemplate
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UCombatantTemplate")
	UCombatantConfig* _config;
	UPROPERTY(EditAnywhere, Instanced, Category = "UCombatantTemplate")
	UCombatantAttributes* _attributes;
};

#include "Combatant.generated.h"