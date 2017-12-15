#include "MovingSoldierStrategy.h"

const MapReader &MovingSoldierStrategy::getMapReader() const {
    return mapReader;
}

MovingSoldierStrategy::MovingSoldierStrategy(const MapReader &mapReader) :mapReader(mapReader)
{

}
