#include "ChoosingArmorStrategy.h"
#include "SoldierStrategy.h"

ChoosingArmorStrategy::~ChoosingArmorStrategy() {

}

ChoosingArmorStrategy::ChoosingArmorStrategy(const MapReader &mapReader) : SoldierStrategy(mapReader) {}
