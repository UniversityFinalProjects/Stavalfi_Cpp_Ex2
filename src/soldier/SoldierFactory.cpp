#include <stdexcept>
#include "SoldierFactory.h"

#include "healer/RegularHealer.h"
#include "warrior/RegularWarrior.h"
#include "warrior/SniperWarrior.h"

#define ENUM_TO_STR(ENUM) std::string(#ENUM)

Soldier *SoldierFactory::create(SoldierType soldierType, const Point2d &location, const std::string &playerId) {
    switch (soldierType) {
        case SoldierType::REGULAR_HEALER:
            return new RegularHealer(location, playerId);
        case SoldierType::REGULAR_WARRIOR:
            return new RegularWarrior(location, playerId);
        case SoldierType::SNIPER_WARRIOR:
            return new SniperWarrior(location, playerId);
        default:
            throw std::invalid_argument(ENUM_TO_STR(soldierType));
    }
}
