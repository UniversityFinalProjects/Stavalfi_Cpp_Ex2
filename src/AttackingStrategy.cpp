#include "AttackingStrategy.h"

const MapReader &AttackingStrategy::getMapReader() const {
    return this->mapReader;
}

AttackingStrategy::AttackingStrategy(const MapReader &mapReader) : mapReader(mapReader) {

}