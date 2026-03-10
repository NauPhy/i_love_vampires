#include "MyWeaponAttributeSet.h"
#include "MyCombatantAttributeSet.h"
#include "MyGameplayStatics.h"
#include "AssetRefs.h"

void UMyWeaponAttributeSet::initialise_UWeaponAttributeSet(FName ID, UMyCombatantAttributeSet* modifiers) {
	_modifiers = TWeakObjectPtr<UMyCombatantAttributeSet>(modifiers);
	UAssetRefs* assetRefs = nullptr;
	if (!MyGameplayStatics::getAssetRefs(assetRefs)) {
		return;
	}
	FWeaponTemplate_Attr* rowReference = assetRefs->getWeaponTemplate_Attr(ID);
	if (rowReference == nullptr) {
		LOGERROR("UMyWeaponAttributeSet::initialise_UMyWeaponAttributeSet - rowReference is null");
		return;
	}
	Initialise_UMyAttributeSet(ID, rowReference);
}

void UMyWeaponAttributeSet::updateFromModifiers() {
	// The parent object is in the middle of destruction or creation
	if (!_modifiers.IsValid()) {
		return;
	}
	const FCombatantTemplate_Attr& combatantAttributes = _modifiers->_finalAttributes;
	// damage currently does not have a corresponding attribute
	_finalAttributes._warmup = _baseAttributes._warmup * (1.0f/combatantAttributes.attackSpeed);
	_finalAttributes._critChance = _baseAttributes._critChance + combatantAttributes.critChance;
	_finalAttributes._critMultiplier = _baseAttributes._critMultiplier + combatantAttributes.critMultiplier;
}