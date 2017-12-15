#ifndef STAVALFI_CPP_EX2_SOLDIER_FACTORY_H
#define STAVALFI_CPP_EX2_SOLDIER_FACTORY_H


#include "Soldier.h"

enum SoldierType {
    REGULAR_WARRIOR,
    SNIPER_WARRIOR,
    REGULAR_HEALER
};

class SoldierFactory {
public:
    static std::shared_ptr<Soldier> create(SoldierType soldierType,
                                           const Point2d &location,
                                           const std::list<Point2d> &soldierDirections);
};

#endif //STAVALFI_CPP_EX2_SOLDIER_FACTORY_H
