#include "HealingStrategy.h"

HealingStrategy::HealingStrategy(const std::shared_ptr<const MapReader> &mapReader)
        : SoldierStrategy(mapReader) {}
