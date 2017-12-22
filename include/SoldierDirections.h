#ifndef STAVALFI_CPP_EX2_SOLDIER_DIRECTIONS_H
#define STAVALFI_CPP_EX2_SOLDIER_DIRECTIONS_H

#include "Point2d.h"
#include <memory>
#include <vector>

/**
 * Specify a pre-configured directions for this soldier.
 * It will be used only in the MoveStrategy's drived classes.
 */
class SoldierDirections {
    std::vector<Point2d> directions;
    std::shared_ptr<size_t> iteration;
    const bool areDirectionsEnabled;
public:
    SoldierDirections(std::vector<Point2d> &directions);

    Point2d getNextDirection() const;

    Point2d getCurrent() const;

    /**
     * check if this player have pre-defined directions
     * @return true if he has. else return false.
     */
    bool isEnabled() const;

    bool anyLeft() const;

    const std::vector<Point2d> &getDirections() const;
};


#endif //STAVALFI_CPP_EX2_SOLDIER_DIRECTIONS_H
