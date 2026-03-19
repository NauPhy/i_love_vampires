#pragma once
#include "CoreMinimal.h"
//
#include "GameFramework/Actor.h"
//
#include "SpriteEnum.h"
#include "BaseConfig.h"
//
#include "BaseAttributes.h"
#include "EffectStruct.h"
//
#include "BaseAttributeComponent.h"
//
#include "BaseAttributeSet.h"
//
#include "BaseAttributeSetTemplate.h"
#include "unrealHelpers.h"
//
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "AttackActor.generated.h"
class ACombatant;
class UAttackConfig;
class UPaperFlipbookComponent;

UCLASS()
class I_LOVE_VAMPIRES_2_API AAttackActor : public AActor {
	GENERATED_BODY()
	
protected:
	TWeakObjectPtr<APawn> _pawnRef = nullptr;
	TArray<TWeakObjectPtr<APawn>> _effectedPawns;

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = true))
	UPaperFlipbookComponent* _flipbook = nullptr;
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = true))
	UAttackConfig* _attackConfig = nullptr;
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = true))
	UAttackAttributes* _attackAttributes = nullptr;
public:
	AAttackActor();
	void initialise_AAttackActor(APawn* pawnRef, const UAttackConfig*, const UAttackAttributes*);
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
class I_LOVE_VAMPIRES_2_API UAttackAttributes : public UBaseAttributes
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "WeaponAttributes")
	float _damage = 0.f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "WeaponAttributes")
	float _critChance = 0.f;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "WeaponAttributes")
	float _critMultiplier = 2.f;

	static void modifyAttributes(const UCombatantAttributes* modifiers, const UAttackAttributes* baseAttributes, UAttackAttributes* finalAttributes);
	virtual UAttackAttributes* getDiscretizedCopy(UObject* outer) const override {
		UAttackAttributes* ret = DuplicateObject<UAttackAttributes>(this, outer, FName());
		return ret;
	}
	UAttackAttributes(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

UCLASS()
class I_LOVE_VAMPIRES_2_API UAttackComponent : public UBaseAttributeComponent
{
	GENERATED_BODY()
public:
	void initialise_UAttackComponent(const UAttackAttributes* baseAttributes) {
		_base = DuplicateObject(baseAttributes, this);
		_final = DuplicateObject(baseAttributes, this);
		_offsets = DuplicateObject(baseAttributes, this);
		zeroOffsets();
	}
};
///////////////////////////////////////////////////////////////////////////////

class AProjectile;
class AExplosiveProjectile;
class AAOE;

UCLASS()
class I_LOVE_VAMPIRES_2_API AAttackFactory : public ABaseAttributeSet
{
	GENERATED_BODY()

	void shouldNotRunError() const;

protected:
	TWeakObjectPtr<UCombatantAttributes> _combatantAttributes = nullptr;

	UPROPERTY()
	UAttackConfig* _attackConfig = nullptr;
	UPROPERTY()
	UAttackComponent* _attackComponent = nullptr;

public:
	TWeakObjectPtr<APawn> _pawnRef = nullptr;

	// This double dispatch is currently only used so the init function can have specialised AAttackActor subclass parameters. 
	// This parameter is not used for nested function calls, or even for member variable access. It's used because, for example, AAttackActor does not have 
	// initialise_AProjectile. initialise_AProjectile calls AAttackActor::initialise_AAttackActor, but the factory still needs access to the declaration
	// of initialise_AProjectile to call it.
	virtual void initAttack(AAttackActor*);
	virtual void initProjectile(AProjectile*) { shouldNotRunError(); }
	virtual void initAOE(AAOE*) { shouldNotRunError(); }
	virtual void initExplosiveProjectile(AExplosiveProjectile*) { shouldNotRunError(); }

	virtual void launchAttack(const FVector& forward);
	void initialise_AAttackFactory(APawn*, UCombatantAttributes*, const UAttackConfig*, const UAttackAttributes*);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAttackFactoryTemplate : public UBaseAttributeSetTemplate {
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Instanced, Category = "UAttackFactoryTemplate")
	UAttackConfig* _attackConfig;
	UPROPERTY(VisibleAnywhere, Instanced, Category = "UAttackFactoryTemplate")
	UAttackAttributes* _attackAttributes;

	virtual AAttackFactory* createFactory(APawn*, UCombatantAttributes*) const;
	UAttackFactoryTemplate(const FObjectInitializer& init) : Super(init) {
		_attackConfig = init.CreateDefaultSubobject<UAttackConfig>(this, "_attackConfig");
		_attackAttributes = init.CreateDefaultSubobject<UAttackAttributes>(this, "_attackAttributes");
	}
};