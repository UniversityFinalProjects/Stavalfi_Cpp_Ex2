//
// Created by stava on 12/12/2017.
//

#include "MovingSoldierStrategy.h"

const MapReader &MovingSoldierStrategy::getMapReader() const {
    return mapReader;
}

MovingSoldierStrategy::MovingSoldierStrategy(const MapReader &mapReader) :mapReader(mapReader)
{

}
