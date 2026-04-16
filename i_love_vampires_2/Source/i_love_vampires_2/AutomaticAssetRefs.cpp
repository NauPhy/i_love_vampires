#include "AutomaticAssetRefs.h"
#include "Active.h"

UAutomaticAssetRefs::UAutomaticAssetRefs() {
	loadAssets<UWeaponTemplate>(_weapons);
}

const UWeaponTemplate* UAutomaticAssetRefs::getRandomWeapon(TArray<UWeaponTemplate*> ignored) const {
	if (_weapons.Num() == 0) {
		LOGERROR("UAutomaticAssetRefs::getRandomWeapon - no weapons found");
		return nullptr;
	}
	int index = -1;
	if (ignored.Num() == 0) {
		index = FMath::RandRange(0, _weapons.Num() - 1);
	}
	else {
		TArray<const UWeaponTemplate*> temp;
		for (const auto& weapon : _weapons) {
			if (!ignored.Contains(weapon)) {
				temp.Add(weapon);
			}
		}
		if (temp.Num() == 0)
			index = -1;
		else
			index = FMath::RandRange(0, temp.Num() - 1);
	}
	if (index == -1) {
		LOGWARNING("UAutomaticAssetRefs::getRandomWeapon - no valid weapons");
		return nullptr;
	}
	return _weapons[index];
}