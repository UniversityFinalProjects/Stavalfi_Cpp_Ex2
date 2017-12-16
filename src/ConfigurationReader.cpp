#include "ConfigurationReader.h"

ConfigurationReader::~ConfigurationReader() {

}

ConfigurationReader::ConfigurationReader(const std::string &fileConfigurationLocation)
        : fileConfigurationLocation(fileConfigurationLocation) {}

ConfigurationReader::MapSize::MapSize(int mapWidth, int mapLength)
        : mapWidth(mapWidth), mapLength(mapLength) {}
