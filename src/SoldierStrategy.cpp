#include "SoldierStrategy.h"

SoldierStrategy::~SoldierStrategy() {

}

const std::shared_ptr<const MapReader> &SoldierStrategy::getMapReader() const {
    return this->mapReader;
}

SoldierStrategy::SoldierStrategy(const std::shared_ptr<const MapReader> &mapReader)
        : mapReader(mapReader) {}
