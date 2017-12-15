#include "SoldierStrategyFactory.h"
#include "DefaultHealingStrategy.h"
#include "DefaultAttackingStrategy.h"
#include "ComputerMovingSoldierStrategy.h"
#include "HumanMovingSoldierStrategy.h"
#include "DefaultChoosingArmorStrategy.h"
#include "DefaultChoosingWeaponStrategy.h"

#define ENUM_TO_STR(ENUM) std::string(#ENUM)

std::shared_ptr<HealingStrategy>
SoldierStrategyFactory::get(HealingStrategyType strategyType,
                            const std::shared_ptr<const MapReader> &mapReader) {
    switch (strategyType) {
        case HealingStrategyType::DEFAULT_HEALING_STRATEGY:
            return std::shared_ptr<HealingStrategy>(new DefaultHealingStrategy(mapReader));
        default:
            throw std::invalid_argument(ENUM_TO_STR(strategyType));
    }
}

std::shared_ptr<AttackingStrategy>
SoldierStrategyFactory::get(AttackingStrategyType strategyType,
                            const std::shared_ptr<const MapReader> &mapReader) {
    switch (strategyType) {
        case AttackingStrategyType::DEFAULT_ATTACKING_STRATEGY:
            return std::shared_ptr<AttackingStrategy>(new DefaultAttackingStrategy(mapReader));
        default:
            throw std::invalid_argument(ENUM_TO_STR(strategyType));
    }
}

std::shared_ptr<MovingSoldierStrategy>
SoldierStrategyFactory::get(MovingSoldierStrategyType strategyType,
                            const std::shared_ptr<const MapReader> &mapReader) {
    switch (strategyType) {
        case MovingSoldierStrategyType::COMPUTER_MOVING_SOLDIER_STRATEGY:
            return std::shared_ptr<MovingSoldierStrategy>(new ComputerMovingSoldierStrategy(mapReader));
        case MovingSoldierStrategyType::HUMAN_MOVING_SOLDIER_STRATEGY:
            return std::shared_ptr<MovingSoldierStrategy>(new HumanMovingSoldierStrategy(mapReader));
        default:
            throw std::invalid_argument(ENUM_TO_STR(strategyType));
    }
}

std::shared_ptr<ChoosingArmorStrategy>
SoldierStrategyFactory::get(ChoosingArmorStrategyType strategyType,
                            const std::shared_ptr<const MapReader> &mapReader) {
    switch (strategyType) {
        case ChoosingArmorStrategyType::DEFAULT_CHOOSING_ARMOR_STRATEGY:
            return std::shared_ptr<ChoosingArmorStrategy>(new DefaultChoosingArmorStrategy(mapReader));
        default:
            throw std::invalid_argument(ENUM_TO_STR(strategyType));
    }
}

std::shared_ptr<ChoosingWeaponStrategy>
SoldierStrategyFactory::get(ChoosingWeaponStrategyType strategyType,
                            const std::shared_ptr<const MapReader> &mapReader) {
    switch (strategyType) {
        case ChoosingWeaponStrategyType::DEFAULT_CHOOSING_WEAPON_STRATEGY:
            return std::shared_ptr<ChoosingWeaponStrategy>(new DefaultChoosingWeaponStrategy(mapReader));
        default:
            throw std::invalid_argument(ENUM_TO_STR(strategyType));
    }
}
