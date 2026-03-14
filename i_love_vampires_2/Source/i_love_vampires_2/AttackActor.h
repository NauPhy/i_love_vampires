#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EffectStruct.h"
#include "UObject/Object.h"
#include "BaseAttributes.h"
#include "AttackActor.generated.h"
class ACombatant;
class UAttackData;
class UAttackConfig;
class UAttackAttributes;
class UCombatantAttributes;

UCLASS(Blueprintable)
class AAttackActor : public AActor {
	GENERATED_BODY()

	FName _ID = "attackActor";

protected:
	UPROPERTY()
	TWeakObjectPtr<APawn> _pawnRef = nullptr;
	UPROPERTY()
	TArray<TWeakObjectPtr<APawn>> _effectedPawns;
	UPROPERTY() 
	UAttackConfig* _config = nullptr;
	UPROPERTY()
	UAttackAttributes* _attributes = nullptr;

	template<typename castType>
	bool castConfig(castType*&);
	template<typename castType>
	bool castAttributes(castType*&);

	FName getID() const { return _ID; }
	void initialise_AAttackActor(APawn* pawnRef);

public:
	AAttackActor() {PrimaryActorTick.bCanEverTick = true;}

	void initialise_AAttackActor(APawn* pawnRef, const UAttackData*);
	void initialise_AAttackActor(APawn* pawnRef, UAttackConfig*, UAttackAttributes*);

	virtual void Tick(float delta) override;
	void applyEffect(ACombatant* target); 
};

// FAttackData and FAttackConfig mirror the inheritance of AAttackActor. FAttackData does not mirror the inheritance, because then it would essentially inherit twice, duplicating the properties.
UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAttackData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Instanced, Category = "AttackData")
	UAttackConfig* _config;
	UPROPERTY(EditAnywhere, Instanced, Category = "AttackData")
	UAttackAttributes* _attributes;
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UAttackConfig : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "AttackData")
	TSubclassOf<AAttackActor> _attackClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WeaponConfig")
	TArray<FEffectStruct> _statusEffects;
	UAttackConfig() { _attackClass = AAttackActor::StaticClass(); }
};

UCLASS(BlueprintType)
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

	virtual void modifyAttributes(const UCombatantAttributes* modifiers, const UAttackAttributes* baseAttributes, UAttackAttributes* finalAttributes);
};