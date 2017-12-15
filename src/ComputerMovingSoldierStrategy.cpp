#include "ComputerMovingSoldierStrategy.h"

ComputerMovingSoldierStrategy::ComputerMovingSoldierStrategy(const std::shared_ptr<const MapReader> &mapReader) : MovingSoldierStrategy(
        mapReader) {}

Point2d ComputerMovingSoldierStrategy::chooseNewLocation(const Warrior &warrior) const {
    return Point2d(-1, -1);
}

Point2d ComputerMovingSoldierStrategy::chooseNewLocation(const Healer &healer) const {
    return Point2d(-1, -1);
}
