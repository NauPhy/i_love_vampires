#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "SpriteEnum.h"
#include "UObject/PrimaryAssetId.h"
#include "Engine/DataAsset.h"
#include "Combatant.generated.h"
class UCombatantConfig;
class UCombatantAttributes;
class UCombatantTemplate;
class UStatusEffect;
class UMyCombatantAttributeSet;
class UPaperFlipbookComponent;
class UActive;

UCLASS()
class I_LOVE_VAMPIRES_2_API ACombatant : public APawn
{
	GENERATED_BODY()

	bool _isInitialised = false;

protected:
	void initialise_ACombatant();
	UPROPERTY()
	UCombatantConfig* _config = nullptr;
	UPROPERTY()
	UCombatantAttributes* _attributes = nullptr;
	UPROPERTY()
	UMyCombatantAttributeSet* _attributeSet = nullptr;
	UPROPERTY()
	TArray<UActive*> _activeAbilities;

	virtual void onCurrentHPChanged(float oldHP, float newHP);
	static void exchangeContactDamage(ACombatant* left, ACombatant* right);

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "ACombatant")
	UPaperFlipbookComponent* _combatantFlipbook;

	ACombatant();
	void initialise_ACombatant(const UCombatantTemplate*);
	void initialise_ACombatant(const UCombatantConfig*, const UCombatantAttributes*);
	virtual void myInitialise(const UCombatantTemplate* temp) { initialise_ACombatant(temp); }
	virtual void EndPlay(EEndPlayReason::Type EndPlayReason) override;
	void burnTick();
	virtual void Tick(float DeltaTime) override;
	void inflictStatus(UStatusEffect*);
	//FName getID() const { return _ID; }
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UCombatantTemplate : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Instanced, Category = "UCombatantTemplate")
	UCombatantConfig* _config;
	UPROPERTY(EditAnywhere, Instanced, Category = "UCombatantTemplate")
	UCombatantAttributes* _attributes;
};

UCLASS(BlueprintType)
class I_LOVE_VAMPIRES_2_API UCombatantConfig : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "UCombatantTemplate")
	TSubclassOf<ACombatant> _combatantClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantConfig")
	FString _name = "Combatant";
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantConfig")
	ESprite _sprite = static_cast<ESprite>(0);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UCombatantConfig")
	TArray<FPrimaryAssetId> _startingWeapons;
};

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