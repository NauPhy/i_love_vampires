#include "BurnEffect.h"
#include "StatusAttributeSet.h"

UBurnEffect::UBurnEffect() {
    DurationPolicy = EGameplayEffectDurationType::HasDuration;

    FGameplayModifierInfo mod;

	mod.Attribute = UStatusAttributeSet::GetburnAttribute();
    mod.ModifierOp = EGameplayModOp::AddFinal;

    {
        FSetByCallerFloat tempSetByCaller;
        tempSetByCaller.DataName = FName("UCombatantManager_burnEffect_magnitude");
        mod.ModifierMagnitude = FGameplayEffectModifierMagnitude(tempSetByCaller);
        Modifiers.Add(mod);
    }
    {
        FSetByCallerFloat tempSetByCaller;
		tempSetByCaller.DataName = FName("UCombatantManager_burnEffect_duration");
        FGameplayEffectModifierMagnitude duration(tempSetByCaller);
        DurationMagnitude = duration;
    }
    InheritableGameplayEffectTags.AddTag(FGameplayTag::RequestGameplayTag("UCombatantManager_burnEffect"));
}