#include "MovingSoldierStrategy.h"

MovingSoldierStrategy::~MovingSoldierStrategy() = default;

MovingSoldierStrategy::MovingSoldierStrategy(const std::shared_ptr<const MapReader> &mapReader)
        : SoldierStrategy(mapReader) {}
