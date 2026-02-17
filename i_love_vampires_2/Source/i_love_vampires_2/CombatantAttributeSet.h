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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData maxHP;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData damageReduction_flat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData damageReduction_percent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData healthRegen_flat;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData healthRegen_percent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData critChance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData critMultiplier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData attackSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData bonusBounces;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData bonusPierce;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData bonusProjectiles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData projectileSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData projectileSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData AOESize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData movementSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData range;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData contactDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData selfSize;

	// Exactly as mutable as the others in practice
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "CombatantAttributeSet")
	FGameplayAttributeData currentHP;

public :
	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, maxHP)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, damageReduction_flat)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, damageReduction_percent)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, healthRegen_flat)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, healthRegen_percent)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, critChance)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, critMultiplier)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, attackSpeed)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, bonusBounces)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, bonusPierce)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, bonusProjectiles)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, projectileSpeed)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, projectileSize)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, AOESize)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, movementSpeed)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, range)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, contactDamage)

	ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, currentHP)

		ATTRIBUTE_ACCESSORS(UCombatantAttributeSet, selfSize)
};
