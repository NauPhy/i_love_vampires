#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include <unordered_map>

#include "WeaponTemplate.h"
#include "ProjectileTemplate.h"
#include "AOETemplate.h"

#include "CombatantAttributeSetEnum.h"
#include "WeaponEnum.h"
#include "ProjectileEnum.h"
#include "AOEEnum.h"

#include "Active.generated.h"
class UAssetRefs;
class APawn;

UCLASS()
class I_LOVE_VAMPIRES_2_API UActive : public UObject {
	GENERATED_BODY()

	static const WeaponAttribute::MyEnum _WARMUP = WeaponAttribute::MyEnum::warmup;
	static const WeaponAttribute::MyEnum _CRIT_CHANCE = WeaponAttribute::MyEnum::critChance;
	static const WeaponAttribute::MyEnum _CRIT_MULTIPLIER = WeaponAttribute::MyEnum::critMultiplier;
	static const CombatantAttribute::MyEnum _ATTACK_SPEED = CombatantAttribute::MyEnum::attackSpeed;
	static const CombatantAttribute::MyEnum _COMBATANT_CRIT_CHANCE = CombatantAttribute::MyEnum::critChance;
	static const CombatantAttribute::MyEnum _COMBATANT_CRIT_MULTIPLIER = CombatantAttribute::MyEnum::critMultiplier;
	
	FName _ID = "weapon";
	FString _name = "Weapon";
	float _timeSinceLastActivation = 0;

	FWeaponTemplate* _weaponTemplate = nullptr;
	FProjectileTemplate* _projectileTemplate = nullptr;
	FAOETemplate* _AOETemplate = nullptr;

	UPROPERTY()
	FWeaponTemplate _modifiedWeaponTemplate;
	UPROPERTY()
	FProjectileTemplate _modifiedProjectileTemplate;
	UPROPERTY()
	FAOETemplate _modifiedAOETemplate;

	TWeakObjectPtr<APawn> _pawnRef = nullptr;

	void updateWarmup(const std::unordered_map < CombatantAttribute::MyEnum, float>& snapshot);
	void updateWeaponAttributes(const std::unordered_map<CombatantAttribute::MyEnum, float>& attributeSnapshot);
	void updateProjectileAttributes()
	void updateAOEAttributes()

	bool getTemplateAttribute(WeaponAttribute::MyEnum, float&) const;
	static bool getCombatantAttribute(std::unordered_map<const CombatantAttribute::MyEnum, float>& input, CombatantAttribute::MyEnum, float&);
	void activate(const std::unordered_map<CombatantAttribute::MyEnum, float>& snapshot);
	//bool getWeaponTemplate(FWeaponTemplate&) const;
	//bool getProjectileTemplate(FProjectileTemplate&) const;
	//bool getAOETemplate(FAOETemplate&) const;
	bool getAssetRefs(UAssetRefs*&)const;
	
public:
	Active() = delete;
	Active(const Active& other) = delete;
	Active(const Active&& other) = delete;
	Active& operator=(const Active& other) = delete;
	Active& operator=(const Active&& other) = delete;
	Active(FName ID, const std::unordered_map<CombatantAttribute::MyEnum, float>& attributeSnapshot, APawn* pawnRef);
	virtual void tick(float delta, const std::unordered_map<CombatantAttribute::MyEnum, float>& attributeSnapshot);
};