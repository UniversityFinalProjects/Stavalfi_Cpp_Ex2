#include "SoldierDirections.h"
#include <cassert>

SoldierDirections::SoldierDirections(std::vector<Point2d> &directions)
        : directions(directions),
          iteration(std::make_shared<size_t>(0)),
          areDirectionsEnabled(directions.size() != 0) {}

Point2d SoldierDirections::getNextDirection() const {
    assert(this->areDirectionsEnabled);
    assert (anyLeft());

    size_t currentIteration = *this->iteration;
    (*this->iteration)++;
    return this->directions[currentIteration];
}

bool SoldierDirections::isEnabled() const {
    return this->areDirectionsEnabled;
}

const std::vector<Point2d> &SoldierDirections::getDirections() const {
    return directions;
}

bool SoldierDirections::anyLeft() const {
    size_t i = *this->iteration;
    return *this->iteration < this->directions.size();
}

Point2d SoldierDirections::getCurrent() const {
    return this->directions[*this->iteration];
}
