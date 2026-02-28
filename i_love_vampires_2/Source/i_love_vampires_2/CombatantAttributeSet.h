// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "Definitions.h"
#include "CombatantAttributeSet.generated.h"
struct FCombatantData;

UCLASS()
class I_LOVE_VAMPIRES_2_API UCombatantAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public :
	UCombatantAttributeSet();

	ATTRIBUTE_MACRO(UCombatantAttributeSet, maxHP);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, damageReduction_flat);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, damageReduction_percent);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, healthRegen_flat);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, healthRegen_percent);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, critChance);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, critMultiplier);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, attackSpeed);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, bonusBounces);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, bonusPierce);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, bonusProjectiles);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, projectileSpeed);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, projectileSize);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, AOESize);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, movementSpeed);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, range);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, contactDamage);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, selfSize);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, iFrameDuration);
	ATTRIBUTE_MACRO(UCombatantAttributeSet, currentHP);
};
