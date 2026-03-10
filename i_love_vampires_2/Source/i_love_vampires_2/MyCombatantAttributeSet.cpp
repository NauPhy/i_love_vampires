#include "MyCombatantAttributeSet.h"
#include "StatusEffect_Burn.h"
#include "MyGameplayStatics.h"
#include "AssetRefs.h"

void UMyCombatantAttributeSet::initialise_UMyCombatantAttributeSet(const UObject* caller, FName ID) {
	UAssetRefs* assetRefs = nullptr;
	if (!MyGameplayStatics::getAssetRefs(caller, assetRefs)) {
		return;
	}
	FCombatantTemplate_Attr* rowReference = assetRefs->getCombatantTemplate_Attr(ID);
	if (rowReference == nullptr) {
		LOGERROR("UMyCombatantAttributeSet::initialise_UMyCombatantAttributeSet - rowReference is null");
		return;
	}
	Initialise_UMyAttributeSet(ID, rowReference);
}

void UMyCombatantAttributeSet::burnTick() {
	const std::vector<std::unique_ptr<StatusEffect>>& statusEffects = getStatusEffects();
	for (const auto& statusEffect : statusEffects) {
		StatusEffect_Burn* burnEffect = dynamic_cast<StatusEffect_Burn*>(statusEffect.get());
		if (burnEffect != nullptr) {
			burnEffect->burnTick();
		}
	}
}