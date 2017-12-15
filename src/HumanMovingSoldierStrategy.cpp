#include "HumanMovingSoldierStrategy.h"

Point2d HumanMovingSoldierStrategy::chooseNewLocation(const Warrior &warrior) const {
    return Point2d(-1, -1);
}

HumanMovingSoldierStrategy::HumanMovingSoldierStrategy(const std::shared_ptr<const MapReader> &mapReader)
        : MovingSoldierStrategy(mapReader) {}

Point2d HumanMovingSoldierStrategy::chooseNewLocation(const Healer &healer) const {
    return Point2d(-1, -1);
}
