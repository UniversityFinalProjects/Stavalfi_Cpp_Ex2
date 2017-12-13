#ifndef STAVALFI_CPP_EX2_MOVING_SOLDIER_STRATEGY_H
#define STAVALFI_CPP_EX2_MOVING_SOLDIER_STRATEGY_H

#include "Soldier.h"
#include "MapReader.h"

class MovingSoldierStrategy {
    const MapReader &mapReader;
protected:
    const MapReader &getMapReader() const;

public:
    MovingSoldierStrategy(const MapReader &mapReader);

    virtual const Point2d choose_new_location(const Soldier &soldier) = 0;

    virtual ~MovingSoldierStrategy() = default;
};


#endif //STAVALFI_CPP_EX2_MOVING_SOLDIER_STRATEGY_H
