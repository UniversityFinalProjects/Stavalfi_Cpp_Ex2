#include "ChoosingArmorStrategy.h"
#include "SoldierStrategy.h"

ChoosingArmorStrategy::~ChoosingArmorStrategy() {

}

ChoosingArmorStrategy::ChoosingArmorStrategy(const std::shared_ptr<const MapReader> &mapReader) : SoldierStrategy(mapReader) {}
