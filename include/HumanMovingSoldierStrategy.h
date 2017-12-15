#ifndef STAVALFI_CPP_EX2_HUMAN_MOVING_SOLDIER_STRATEGY_H
#define STAVALFI_CPP_EX2_HUMAN_MOVING_SOLDIER_STRATEGY_H


#include "MapReader.h"
#include "MovingSoldierStrategy.h"

class HumanMovingSoldierStrategy : public MovingSoldierStrategy {
public:
    HumanMovingSoldierStrategy(const std::shared_ptr<const MapReader> &mapReader);

    Point2d chooseNewLocation(const Warrior &warrior) const override;

    Point2d chooseNewLocation(const Healer &healer) const override;
};
#endif //STAVALFI_CPP_EX2_HUMAN_MOVING_SOLDIER_STRATEGY_H
