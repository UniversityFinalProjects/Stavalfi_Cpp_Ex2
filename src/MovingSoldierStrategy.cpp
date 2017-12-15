#include "MovingSoldierStrategy.h"

MovingSoldierStrategy::~MovingSoldierStrategy() {

}

MovingSoldierStrategy::MovingSoldierStrategy(const std::shared_ptr<const MapReader> &mapReader)
        : SoldierStrategy(mapReader) {}
