#include "AssetRefs.h"
#include "InputMappingContext.h"
#include "Definitions.h"
#include "Combatant.h"

const UInputMappingContext* UAssetRefs::getKeyboardContext() const {
	return _keyboardInputMappingContext;
}

const UCombatantTemplate* UAssetRefs::getBasePlayerTemplate() const {
	return _basePlayerTemplate;
}