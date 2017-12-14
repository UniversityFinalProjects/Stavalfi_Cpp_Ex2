#include "Healer.h"
#include "SoldierActions.h"

Healer::Healer(const std::string &id, const Point2d &location, const std::string &playerId,
               short lifePoints, short walkingSpeed, Weapon &weapon)
        : Soldier(id, location, playerId, &weapon, lifePoints, walkingSpeed) {}

void Healer::play(SoldierActions &soldierActions) {
    soldierActions.play(*this);
}
