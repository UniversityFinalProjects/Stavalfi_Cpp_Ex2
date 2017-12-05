#ifndef STAVALFI_CPP_EX2_SOLDIER_FACTORY_H
#define STAVALFI_CPP_EX2_SOLDIER_FACTORY_H


#include "Soldier.h"

enum SoldierType
{
    REGULAR_WARRIOR,
    SNIPER_WARRIOR,
    REGULAR_HEALER
};

class SoldierFactory {
public:
    static Soldier* create(SoldierType soldierType,const Point2d &location, const std::string &playerId);
};

#endif //STAVALFI_CPP_EX2_SOLDIER_FACTORY_H
