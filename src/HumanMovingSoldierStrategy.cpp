#include "HumanMovingSoldierStrategy.h"

HumanMovingSoldierStrategy::HumanMovingSoldierStrategy(const std::shared_ptr<const MapReader> &mapReader)
        : MovingSoldierStrategy(mapReader) {}

Point2d HumanMovingSoldierStrategy::chooseNewLocation(const Warrior &warrior) const {
    if (warrior.arePreDefinedDirectionsEnabled()) {
        const std::shared_ptr<Point2d> direction = warrior.getNextPreDefinedDirection();
        if (direction != nullptr)
            chooseNewLocationByDirection(warrior, *direction);
        else
            // by the rules of this game,
            // if there are no more directions,
            // a soldier shouldn't move.
            return warrior.getLocation();
    }
    // directions are disabled:
    return warrior.getLocation();
}

Point2d HumanMovingSoldierStrategy::chooseNewLocation(const Healer &healer) const {
    if (healer.arePreDefinedDirectionsEnabled()) {
        const std::shared_ptr<Point2d> direction = healer.getNextPreDefinedDirection();
        if (direction != nullptr)
            chooseNewLocationByDirection(healer, *direction);
        else
            // by the rules of this game,
            // if there are no more directions,
            // a soldier shouldn't move.
            return healer.getLocation();
    }
    // directions are disabled:
    return healer.getLocation();
}

Point2d
HumanMovingSoldierStrategy::chooseNewLocationByDirection(const Warrior &warrior, const Point2d &direction) const {
    if (warrior.getLocation().distance(direction) <= warrior.getRunningDistance())
        return direction;
    return warrior.getLocation();
}

Point2d HumanMovingSoldierStrategy::chooseNewLocationByDirection(const Healer &healer, const Point2d &direction) const {
    if (healer.getLocation().distance(direction) <= healer.getRunningDistance())
        return direction;
    return healer.getLocation();
}


