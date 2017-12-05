#include "Healer.h"

Healer::Healer(const std::string& id,const Point2d &location, const std::string &playerId,
               short lifePoints, short walkingSpeed,Weapon& weapon)
        : Soldier(id,location, playerId,&weapon,lifePoints, walkingSpeed) {}
