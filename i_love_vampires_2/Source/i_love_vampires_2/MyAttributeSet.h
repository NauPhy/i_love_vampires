#include "CoreMinimal.h"
#include "UObject/Object.h"
#include <vector>
#include <unordered_map>
#include <functional>
#include "MyAttributeSet.generated.h"
class StatusEffect;
class UAssetRefs;

// This class only supports float members. Non-float members should be placed in 
// a sister data table with the same ID
UClass()
template<typename TRow>
class I_LOVE_VAMPIRES_2_API UMyAttributeSet : public UObject {
	GENERATED_BODY()

	size_t rowSize = 1;
	std::vector<std::unique_ptr<StatusEffect>> _instantStatusQueue;
	std::vector<std::unique_ptr<StatusEffect>> _statusEffects;
	std::unordered_map < size_t, std::function<void(float, float)> _callbacks;

protected:
	FName _ID = "default";
	UPROPERTY()
	TRow _baseAttributes;
	UPROPERTY()
	TRow _finalAttributes;
	// Status effects that are recalculated every frame, including those that never change (such as a passive that gives +25% damage) are deleted and reapplied inside reconstruct().
	// 
	// Certain status effects (particularly damage dealt) are intended to apply once and then be destroyed, meaning they will not be able to reapply their effect in future frames.
	// Such status effects should instead apply their effect to _attributeOffsets, which is never reset. During reconstruction, status effects will be passed both _finalAttributes
	// and _attributeOffsets. It is their responsibility to modify the correct one.
	// 
	// For example, a burn effect would apply its damage to _attributeOffsets, despite being persistent, because it calculates its damage based on the current state of the game, and cannot calculate it 
	// again in later frames without storing that state. 
	// 
	// From a performance standpoint, a persistent status effect that gives a permanent +25% damage only needs to store 1 float, and during reconstruction only needs to apply 1 float. If a bleed
	// effect were to store the damage it's dealt in every previous frame, it would need to store and apply thousands of floats.
	UPROPERTY()
	TRow _attributeOffsets;

private:
	void reconstruct(float delta);
	float getFinalValue(size_t offset) const;
	float getBaseValue(size_t offset) const;

protected:
	// calculates size_t from address
	static size_t calculateOffset(const TRow& structRef, const float& memberRef);
	void addCallback(size_t offset, std::function<void(float,float)> callback);
	// not automatic
	virtual void tick(delta);
	// i.e. from combatant attributes
	// Inheritor is responsible for initialising this
	TWeakObjectPtr<UMyAttributeSet> = nullptr;
	// This should overwrite the values of _finalAttributes using baseAttributes. It is used in reconstruct.
	virtual void updateFromModifiers() = 0;

	//not used in base class
	bool getAssetRefs(UAssetRefs*&) const;
	const std::vector<std::unique_ptr<StatusEffect>>& getStatusEffects() const { return _statusEffects; }

public:
	UMyAttributeSet() = default;
	initialise_UMyAttributeSet(FName ID, const TRow* rowReference);
	void inflictInstantStatus(std::unique_ptr<StatusEffect>);
	void inflictStatus(std::unique_ptr<StatusEffect>);
	const TRow& getAttributes() const { return _finalAttributes };
};
// Example of inheriting from UMyAttributeSet
//UClass()
//UInheritor : public UMyAttributeSet<ThisSpecificRow>{
//	UInheritor::UInheritor() = default;
//	Initialise_UInheritor(FName ID, const OtherInheritor* otherAttributes) {
//		ThisSpecificRow* myRow = Inheritor::lookupRow(ID);
//		if (myRow == nullptr) {
//			LOGERROR("UInheritor::UInheritor - myRow is nullptr");
//			Destroy();
//			return;
//		}
//		Initialise_UMyAttributeSet(ID, myRow);
//		_modifiers = TWeakObjectPtr<OtherInheritor>(otherAttributes);
//	}
//	static ThisSpecificRow* Inheritor::lookupRow(ID);
//  virtual void updateFromModifiers() override;
//};