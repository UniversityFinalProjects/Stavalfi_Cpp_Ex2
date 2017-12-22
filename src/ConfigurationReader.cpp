#include "ConfigurationReader.h"

ConfigurationReader::ConfigurationReader(const std::string &fileGameConfigurationLocation,
                                         const std::string &fileSoldierDirectionsLocation)
        : fileGameConfigurationLocation(fileGameConfigurationLocation),
          fileSoldierDirectionsLocation(fileSoldierDirectionsLocation) {}

ConfigurationReader::MapSize::MapSize(int mapWidth, int mapLength)
        : mapWidth(mapWidth), mapHigh(mapLength) {}

const int ConfigurationReader::MapSize::getMapWidth() const {
    return mapWidth;
}

const int ConfigurationReader::MapSize::getMapHigh() const {
    return mapHigh;
}

const std::string &ConfigurationReader::getFileGameConfigurationLocation() const {
    return fileGameConfigurationLocation;
}

const std::string &ConfigurationReader::getFileSoldierDirectionsLocation() const {
    return fileSoldierDirectionsLocation;
}

ConfigurationReader::~ConfigurationReader() {

}