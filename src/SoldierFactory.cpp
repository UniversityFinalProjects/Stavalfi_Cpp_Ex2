#include <stdexcept>
#include "SoldierFactory.h"

#include "RegularHealer.h"
#include "RegularWarrior.h"
#include "SniperWarrior.h"
#include "ItemFactory.h"
#include <memory>

#define ENUM_TO_STR(ENUM) std::string(#ENUM)

std::shared_ptr<Soldier> SoldierFactory::create(SoldierType soldierType,
                                                const Point2d &location,
                                                const std::string &playerId) {
    static signed int id = 0;

    switch (soldierType) {
        case SoldierType::REGULAR_HEALER: {
            std::shared_ptr<Weapon> weapon(ItemFactory::create(WeaponTypes::HEALER_WEAPON, location, true));
            return std::shared_ptr<Soldier>(new RegularHealer(std::to_string(++id), location, playerId, weapon));
        }
        case SoldierType::REGULAR_WARRIOR:
            return std::shared_ptr<Soldier>(new RegularWarrior(std::to_string(++id), location, playerId));
        case SoldierType::SNIPER_WARRIOR:
            return std::shared_ptr<Soldier>(new SniperWarrior(std::to_string(++id), location, playerId));
        default:
            throw std::invalid_argument(ENUM_TO_STR(soldierType));
    }
}
