#ifndef STAVALFI_CPP_EX2_SOLDIER_STRATEGY_FACTORY_H
#define STAVALFI_CPP_EX2_SOLDIER_STRATEGY_FACTORY_H

#include <memory>
#include "HealingStrategy.h"
#include "AttackingStrategy.h"
#include "ChoosingArmorStrategy.h"
#include "MovingSoldierStrategy.h"
#include "ChoosingWeaponStrategy.h"

enum HealingStrategyType {
    DEFAULT_HEALING_STRATEGY
};

enum AttackingStrategyType {
    DEFAULT_ATTACKING_STRATEGY
};

enum MovingSoldierStrategyType {
    COMPUTER_MOVING_SOLDIER_STRATEGY,
    HUMAN_MOVING_SOLDIER_STRATEGY
};

enum ChoosingArmorStrategyType {
    DEFAULT_CHOOSING_ARMOR_STRATEGY
};

enum ChoosingWeaponStrategyType {
    DEFAULT_CHOOSING_WEAPON_STRATEGY
};

class SoldierStrategyFactory {
public:
    static std::shared_ptr<HealingStrategy> get(HealingStrategyType strategyType,
                                                const std::shared_ptr<const MapReader> &mapReader);

    static std::shared_ptr<AttackingStrategy> get(AttackingStrategyType strategyType,
                                                  const std::shared_ptr<const MapReader> &mapReader);

    static std::shared_ptr<MovingSoldierStrategy> get(MovingSoldierStrategyType strategyType,
                                                const std::shared_ptr<const MapReader> &mapReader);

    static std::shared_ptr<ChoosingArmorStrategy> get(ChoosingArmorStrategyType strategyType,
                                                const std::shared_ptr<const MapReader> &mapReader);

    static std::shared_ptr<ChoosingWeaponStrategy> get(ChoosingWeaponStrategyType strategyType,
                                                const std::shared_ptr<const MapReader> &mapReader);
};


#endif //STAVALFI_CPP_EX2_SOLDIER_STRATEGY_FACTORY_H
