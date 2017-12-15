#ifndef STAVALFI_CPP_EX2_HUMAN_MOVING_SOLDIER_STRATEGY_H
#define STAVALFI_CPP_EX2_HUMAN_MOVING_SOLDIER_STRATEGY_H


#include "MapReader.h"
#include "MovingSoldierStrategy.h"

class HumanMovingSoldierStrategy : public MovingSoldierStrategy {
public:
    HumanMovingSoldierStrategy(const MapReader &mapReader);

    Point2d chooseNewLocation(const Warrior &warrior) const override {
        return Point2d(-1, -1);
    }

    Point2d chooseNewLocation(const Healer &healer) const override {
        return Point2d(-1, -1);
    }
};
#endif //STAVALFI_CPP_EX2_HUMAN_MOVING_SOLDIER_STRATEGY_H
