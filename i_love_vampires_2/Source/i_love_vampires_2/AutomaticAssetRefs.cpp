#include "AutomaticAssetRefs.h"
#include "Active.h"
#include "Combatant.h"

UAutomaticAssetRefs::UAutomaticAssetRefs() {
	loadAssets<UWeaponTemplate>(_weapons);
	loadAssets<UCombatantPassive>(_passives);
}

const UWeaponTemplate* UAutomaticAssetRefs::getRandomWeapon(const TArray<UWeaponTemplate*>& ignored) {
	return getRandomAsset<UWeaponTemplate>(_weapons, ignored);
}
const UCombatantPassive* UAutomaticAssetRefs::getRandomPassive(const TArray<UCombatantPassive*>& ignored) {
	return getRandomAsset<UCombatantPassive>(_passives, ignored);
}