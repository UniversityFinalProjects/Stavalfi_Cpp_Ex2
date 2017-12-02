//
// Created by stavalfi on 02/12/17.
//

#include "Healer.h"
#include "../../item/weapon/HealerWeapon.h"

Healer::Healer(const Point2d &location, const std::string &playerId,
               short lifePoints, short walkingSpeed)
        : Soldier(location, playerId,new  HealerWeapon(location),lifePoints, walkingSpeed) {}
