#include "MyAOEAttributeSet.h"
#include "MyAOEAttributeSet.h"

void UMyAOEAttributeSet::initialise_UMyAOEAttributeSet(FName ID, const FAOETemplate_Attr* rowReference, UMyAOEAttributeSet* modifiers) {
	_modifiers = TWeakObjectPtr<UMyAOEAttributeSet>(modifiers);
	UAssetRefs* assetRefs = nullptr;
	if (!MyGameplayStatics::getAssetRefs(assetRefs)) {
		return;
	}
	FAOETemplate_Attr* rowReference = assetRefs->getAOETemplate_Attr(ID);
	if (rowReference == nullptr) {
		LOGERROR("UMyAOEAttributeSet::initialise_UMyAOEAttributeSet - rowReference is null");
		return;
	}
	Initialise_UMyAttributeSet(ID, rowReference);
}

void UMyAOEAttributeSet::updateFromModifiers() {
	// The parent object is in the middle of destruction or creation (or there's a bug)
	if (!_modifiers.IsValid()) {
		return;
	}
	const FAOETemplate_Attr& combatantAttributes = _modifiers->_finalAttributes;
	_finalAttributes._radius = _baseAttributes._radius * combatantAttributes.projectileSize;
}