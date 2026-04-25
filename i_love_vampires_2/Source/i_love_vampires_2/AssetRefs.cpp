#include "AssetRefs.h"
#include "InputMappingContext.h"
#include "Definitions.h"
#include "Combatant.h"
#include "InputAction.h"
#include "Materials/MaterialInterface.h"
#include "DamageNumber.h"

UInputMappingContext* UAssetRefs::getKeyboardContext() const {
	return _keyboardInputMappingContext;
}

UCombatantTemplate* UAssetRefs::getBasePlayerTemplate() const {
	return _basePlayerTemplate;
}

UInputAction* UAssetRefs::getMoveAction() const {
	return _moveAction;
}

UMaterialInterface* UAssetRefs::getSpriteMaterial() const {
	return _translucentMaterial;
}

TSubclassOf<UDamageNumber> UAssetRefs::getDamagePopupWidgetClass() const {
	return _damagePopupWidgetClass;
}