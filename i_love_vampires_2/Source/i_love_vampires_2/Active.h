#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SubActiveTemplate.h"
#include "MyCombatantAttributeSet.h"
#include "StructUtils/InstancedStruct.h"
#include "WeaponConfig.h"
#include "WeaponAttributes.h"
#include <memory>
#include <vector>
#include "Active.generated.h"
class APawn;


UCLASS()
class I_LOVE_VAMPIRES_2_API UActive : public UObject {
	GENERATED_BODY()
	
	float _timeSinceLastActivation = 0;
	// not a UObject
	std::vector<std::unique_ptr<UMyAttributeSet>> _attributeSets;

	// I may at some point need separate _config and MyAttributeSet for UActive, but for now the only float I have is warmup.
	UPROPERTY()
	FSubActiveTemplate _myTemplate;
	std::unique_ptr<FWeaponConfig> _config = nullptr;
	UPROPERTY()
	TWeakObjectPtr<APawn> _pawnRef = nullptr;
	TWeakPtr<UMyCombatantAttributeSet> _combatantAttributeSet = nullptr;

	void updateWarmup(float delta);
	template<typename attackType>
	void activate();
	bool initConfigAndAttributes(const TInstancedStruct<FWeaponConfig>&, const TInstancedStruct<FWeaponAttributes>&);

public:
	void initialise_UActive(const APawn* caller, FName ID, const TSharedPtr<UMyCombatantAttributeSet>& callerAttributes);
	virtual void tick(float delta);
};