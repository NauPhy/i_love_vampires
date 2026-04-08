#include "AssetRefs.h"
#include "InputMappingContext.h"
#include "Definitions.h"
#include "Combatant.h"
#include "InputAction.h"
#include "Materials/MaterialInterface.h"

const UInputMappingContext* UAssetRefs::getKeyboardContext() const {
	return _keyboardInputMappingContext;
}

const UCombatantTemplate* UAssetRefs::getBasePlayerTemplate() const {
	return _basePlayerTemplate;
}

const UInputAction* UAssetRefs::getMoveAction() const {
	return _moveAction;
}

UMaterialInterface* UAssetRefs::getSpriteMaterial() const {
	return _translucentMaterial;
}