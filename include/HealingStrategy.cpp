//
// Created by stava on 12/12/2017.
//

#include "HealingStrategy.h"

const MapReader &HealingStrategy::getMapReader() const {
    return this->mapReader;
}

HealingStrategy::HealingStrategy(const MapReader &mapReader) : mapReader(mapReader) {

}
