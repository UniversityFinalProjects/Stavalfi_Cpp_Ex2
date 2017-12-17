#include "ConfigurationReader.h"

ConfigurationReader::~ConfigurationReader() {

}

ConfigurationReader::ConfigurationReader(const std::string &fileConfigurationLocation)
        : fileConfigurationLocation(fileConfigurationLocation) {}

ConfigurationReader::MapSize::MapSize(int mapWidth, int mapLength)
        : mapWidth(mapWidth), mapHigh(mapLength) {}

const int ConfigurationReader::MapSize::getMapWidth() const {
    return mapWidth;
}

const int ConfigurationReader::MapSize::getMapHigh() const {
    return mapHigh;
}
