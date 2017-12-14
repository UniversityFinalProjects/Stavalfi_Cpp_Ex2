#include "HealingStrategy.h"

const MapReader &HealingStrategy::getMapReader() const {
    return this->mapReader;
}

HealingStrategy::HealingStrategy(const MapReader &mapReader) : mapReader(mapReader) {

}
