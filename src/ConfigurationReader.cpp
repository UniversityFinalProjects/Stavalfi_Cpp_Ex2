#include "ConfigurationReader.h"

ConfigurationReader::~ConfigurationReader() {

}

ConfigurationReader::MapSize::MapSize(int mapWidth, int mapLength)
        : mapWidth(mapWidth), mapLength(mapLength) {}
