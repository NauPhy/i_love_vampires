#include "AutomaticAssetRefs.h"
#include "Active.h"
#include "Combatant.h"

UAutomaticAssetRefs::UAutomaticAssetRefs() {
	loadAssets<UWeaponTemplate>(_weapons);
	loadAssets<UPassiveData>(_passives);
}

const UWeaponTemplate* UAutomaticAssetRefs::getRandomWeapon(const TArray<UWeaponTemplate*>& ignored) {
	return getRandomAsset<UWeaponTemplate>(_weapons, ignored);
}
const UPassiveData* UAutomaticAssetRefs::getRandomPassive(const TArray<UPassiveData*>& ignored) {
	return getRandomAsset<UPassiveData>(_passives, ignored);
}