#include "AssetRefs.h"
#include "InputMappingContext.h"
#include "Definitions.h"

#include "ActiveTemplate.h"
#include "CombatantTemplateFull.h"

const UInputMappingContext* UAssetRefs::getKeyboardContext() const {
	return _keyboardInputMappingContext;
}

const FActiveTemplate* UAssetRefs::getActiveTemplate(FName ID) const {
	if (_activeTable == nullptr) {
		LOGERROR("UAssetRefs::getActiveTemplate - weapon table is nullptr");
		return nullptr;
	}
	return _activeTable->FindRow<FActiveTemplate>(ID, ContextString:"bluh");
}

const FCombatantTemplateFull* UAssetRefs::getCombatantTemplateFull(FName ID) const {
	if (_combatantTable == nullptr) {
		LOGERROR("UAssetRefs::getWeaponTemplateAttr - combatant table is nullptr");
		return nullptr;
	}
	return _combatantTable->FindRow<FCombatantTemplateFull>(ID, ContextString:"bluh");
}