#include "AssetRefs.h"
#include "InputMappingContext.h"
#include "Definitions.h"

#include "WeaponTemplate.h"
#include "WeaponTemplate_Attr.h"
#include "ProjectileTemplate.h"
#include "ProjectileTemplate_Attr.h"
#include "AOETemplate.h"
#include "AOETemplate_Attr.h"
#include "CombatantTemplate.h"
#include "CombatantTemplate_Attr.h"

const UInputMappingContext* UAssetRefs::getKeyboardContext() const {
	return _keyboardInputMappingContext;
}

const FWeaponTemplate* UAssetRefs::getWeaponTemplate(FName ID) const {
	if (_weaponTable == nullptr) {
		LOGERROR("UAssetRefs::getWeaponTemplate - weapon table is nullptr");
		return nullptr;
	}
	return _weaponTable->FindRow<FWeaponTemplate>(ID, ContextString:"bluh");
}

const FWeaponTemplate_Attr* UAssetRefs::getWeaponTemplate_Attr(FName ID) const {
	if (_weaponTable_Attr == nullptr) {
		LOGERROR("UAssetRefs::getWeaponTemplateAttr - weapon table attr is nullptr");
		return nullptr;
	}
	return _weaponTable->FindRow<FWeaponTemplate_Attr>(ID, ContextString:"bluh");
}

const FProjectileTemplate* UAssetRefs::getProjectileTemplate(FName ID) const {
	if (_projectileTable == nullptr) {
		LOGERROR("UAssetRefs::getProjectileTemplate - Projectile table is nullptr");
		return nullptr;
	}
	return _projectileTable->FindRow<FProjectileTemplate>(ID, ContextString:"bluh");
}

const FProjectileTemplate_Attr* UAssetRefs::getProjectileTemplate_Attr(FName ID) const {
	if (_projectileTable_Attr == nullptr) {
		LOGERROR("UAssetRefs::getProjectileTemplateAttr - Projectile table attr is nullptr");
		return nullptr;
	}
	return _projectileTable->FindRow<FProjectileTemplate_Attr>(ID, ContextString:"bluh");
}

const FAOETemplate* UAssetRefs::getAOETemplate(FName ID) const {
	if (_AOETable == nullptr) {
		LOGERROR("UAssetRefs::getAOETemplate - AOE table is nullptr");
		return nullptr;
	}
	return _AOETable->FindRow<FAOETemplate>(ID, ContextString:"bluh");
}

const  FAOETemplate_Attr* UAssetRefs::getAOETemplate_Attr(FName ID) const {
	if (_AOETable_Attr == nullptr) {
		LOGERROR("UAssetRefs::getAOETemplateAttr - AOE table attr is nullptr");
		return nullptr;
	}
	return _AOETable->FindRow<FAOETemplate_Attr>(ID, ContextString:"bluh");
}

const FCombatantTemplate* UAssetRefs::getCombatantTemplate(FName ID) const {
	if (_combatantTable == nullptr) {
		LOGERROR("UAssetRefs::getCombatantTemplate - Combatant table is nullptr");
		return nullptr;
	}
	return _combatantTable->FindRow<FCombatantTemplate>(ID, ContextString:"bluh");
}

const FCombatantTemplate_Attr* UAssetRefs::getCombatantTemplate_Attr(FName ID) const {
	if (_combatantTable_Attr == nullptr) {
		LOGERROR("UAssetRefs::getCombatantTemplateAttr - Combatant table attr is nullptr");
		return nullptr;
	}
	return _combatantTable_Attr->FindRow<FCombatantTemplate_Attr>(ID, ContextString:"bluh");
}