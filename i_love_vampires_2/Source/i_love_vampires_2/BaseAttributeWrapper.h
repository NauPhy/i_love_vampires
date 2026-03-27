#pragma once
#include "CoreMinimal.h"
#include "EffectStruct.h"
#include "BaseAttributes.h"
#include <type_traits>
#include <utility>

template<typename attrType, typename dataType>
class BaseAttributeWrapper {
	static_assert(std::is_constructible_v<attrType, const dataType*>, "attrType must be constructible from dataType");
	// Objects of type BaseAttributes are meant to be copied and passed around without strict ownership.
	// However, they still need a world context object for some functionality, so that will be
	// stored here, since this object is strictly owned by the attribute-haver.
	TObjectPtr<UObject> _context = nullptr;
	attrType _core;
	

public:
	//not automatic
	// Status effects are owned by attributeClass' owner. The owner is responsible for managing duration and deletion of elements, as well as handling
	// statusEffect subclass-specific internal state.
	// It will also be responsible for modifiers? Maybe not, we'll see.

	// Alternatively, instead of passing GlobalStatusState, just call MyGameplayStatics::GetCombatantManager->getBurnThisFrame()
	void tick(float delta, const TArray<FEffectStruct>& statusEffects) {
		_core.tick(_context.Get(), delta, statusEffects);
	}
	void tick(float delta, const TArray<FEffectStruct>& statusEffects, const CombatantAttributes* combatantAttributes) {
		_core.tick(_context.Get(), delta, statusEffects, combatantAttributes);
	}
	BaseAttributeWrapper();
	//extra copy
	BaseAttributeWrapper(UObject* context, const dataType* attr) : _context(context), _core(attr){}
	const attrType& getCore() const { return _core; }
	float getMember(Stat attrType::* member) const {
		return (_core.*member).getFinal();
	}
	float getMemberDiscretized(Stat attrType::* member) const {
		Stat temp = _core.*member;
		temp.discretize();
		return temp.getFinal();
	}
};