#ifndef STAVALFI_CPP_EX2_COMPUTER_MOVING_SOLDIER_STRATEGY_H
#define STAVALFI_CPP_EX2_COMPUTER_MOVING_SOLDIER_STRATEGY_H


#include "MapReader.h"
#include "MovingSoldierStrategy.h"

class ComputerMovingSoldierStrategy : public MovingSoldierStrategy {
public:
    explicit ComputerMovingSoldierStrategy(const std::shared_ptr<const MapReader> &mapReader);

    Point2d chooseNewLocation(const Warrior &warrior) const override;

    Point2d chooseNewLocation(const Healer &healer) const override;

protected:
    Point2d chooseNewLocationByDirection(const Warrior &warrior, const Point2d &direction) const override;

    Point2d chooseNewLocationByDirection(const Healer &healer, const Point2d &direction) const override;
};


#endif //STAVALFI_CPP_EX2_COMPUTER_MOVING_SOLDIER_STRATEGY_H
