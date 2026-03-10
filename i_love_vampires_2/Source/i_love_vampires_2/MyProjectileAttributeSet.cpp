#include "MyProjectileAttributeSet.h"
#include "MyCombatantAttributeSet.h"
#include "MyGameplayStatics.h"
#include "AssetRefs.h"

void UMyProjectileAttributeSet::initialise_UProjectileAttributeSet(FName ID, const FProjectileTemplate_Attr* rowReference, UMyCombatantAttributeSet* modifiers) {
	_modifiers = TWeakObjectPtr<UMyCombatantAttributeSet>(modifiers);
	UAssetRefs* assetRefs = nullptr;
	if (!MyGameplayStatics::getAssetRefs(assetRefs)) {
		return;
	}
	FProjectileTemplate_Attr* rowReference = assetRefs->getProjectileTemplate_Attr(ID);
	if (rowReference == nullptr) {
		LOGERROR("UMyProjectileAttributeSet::initialise_UMyProjectileAttributeSet - rowReference is null");
		return;
	}
	Initialise_UMyAttributeSet(ID, rowReference);
}

void UMyProjectileAttributeSet::updateFromModifiers() {
	// The parent object is in the middle of destruction or creation (or there's a bug)
	if (!_modifiers.IsValid()) {
		return;
	}
	const FCombatantTemplate_Attr& combatantAttributes = _modifiers->_finalAttributes;
	_finalAttributes._radius = _baseAttributes._radius * combatantAttributes.projectileSize;
	_finalAttributes._speed = _baseAttributes._speed * combatantAttributes.projectileSpeed;
	_finalAttributes._pierce = _baseAttributes._pierce + combatantAttributes.bonusPierce;
	_finalAttributes._bounce = _baseAttributes._bounce + combatantAttributes.bonusBounces;
	_finalAttributes._projectileCount = _baseAttributes._projectileCount + combatantAttributes.bonusProjectiles;
}