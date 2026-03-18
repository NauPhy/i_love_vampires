#pragma once
#include "CoreMinimal.h"
//
#include "GameFramework/Actor.h"
//
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
//
#include "Engine/World.h"
#include "GameFramework/Pawn.h"
#include "AttackActor.generated.h"


class ACombatant;
class UAttackConfig;

UCLASS()
class I_LOVE_VAMPIRES_2_API AAttackActor : public AActor {
	GENERATED_BODY()
	
protected:
	UPROPERTY()
	TWeakObjectPtr<APawn> _pawnRef = nullptr;
	UPROPERTY()
	TArray<TWeakObjectPtr<APawn>> _effectedPawns;
	UPROPERTY() 
	UAttackConfig* _attackConfig = nullptr;
	UPROPERTY()
	UAttackAttributes* _attackAttributes = nullptr;

public:
	AAttackActor() { PrimaryActorTick.bCanEverTick = true; }
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
	UPROPERTY(EditAnywhere, Category = "UAttackConfig")
	TArray<FEffectStruct> _statusEffects;
	UAttackConfig(const FObjectInitializer& init) : Super(init) {}
};
///////////////////////////////////////////////////////////////////////////////

class UCombatantAttributes;

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAttackAttributes : public UBaseAttributes
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponAttributes")
	float _damage = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponAttributes")
	float _critChance = 0.f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponAttributes")
	float _critMultiplier = 2.f;

	static void modifyAttributes(const UCombatantAttributes* modifiers, const UAttackAttributes* baseAttributes, UAttackAttributes* finalAttributes);
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
	UPROPERTY()
	UAttackConfig* _attackConfig = nullptr;
	UPROPERTY()
	UAttackComponent* _attackComponent = nullptr;

	template <typename T>
	T* spawnActor() const;

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

	virtual void launchAttack();
	void initialise_AAttackFactory(APawn*, const UAttackConfig*, const UAttackAttributes*);
};
///////////////////////////////////////////////////////////////////////////////

UCLASS(BlueprintType, EditInlineNew)
class I_LOVE_VAMPIRES_2_API UAttackFactoryTemplate : public UBaseAttributeSetTemplate {
	GENERATED_BODY()

protected:
	virtual bool isValid() const;

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UAttackFactoryTemplate")
	UAttackConfig* _attackConfig;
	UPROPERTY(EditAnywhere, Instanced, Category = "UAttackFactoryTemplate")
	UAttackAttributes* _attackAttributes;

	virtual AAttackFactory* createFactory(APawn*, UObject*) const;
	UAttackFactoryTemplate(const FObjectInitializer& init) : Super(init) {
		_attackConfig = init.CreateDefaultSubobject<UAttackConfig>(this, "_attackConfig");
		_attackAttributes = init.CreateDefaultSubobject<UAttackAttributes>(this, "_attackAttributes");
	}
};
///////////////////////////////////////////////////////////////////////////////
template <typename T>
T* AAttackFactory::spawnActor() const {
	static_assert(std::is_base_of<AAttackActor, T>::value, "T must be derived from AAttackActor");

	if (!_pawnRef.IsValid())
		return nullptr;
	UWorld* world = _pawnRef->GetWorld();
	if (world == nullptr) {
		LOGERROR("AAttackFactory::spawnActor - world is null");
		return nullptr;
	}
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	FVector spawnLocation = _pawnRef->GetActorLocation();
	FRotator spawnRotation = _pawnRef->GetActorRotation();

	// This should create a compile error if T is not a subclass of UObject
	T* actor = world->SpawnActor<T>(spawnLocation, spawnRotation, spawnParams);
	if (actor == nullptr) {
		LOGERROR("AAttackFactory::spawnActor - failed to spawn actor");
		return nullptr;
	}
	return actor;
}