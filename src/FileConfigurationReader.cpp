#include "FileConfigurationReader.h"

ConfigurationReader::MapSize FileConfigurationReader::getMapSize() const {
    return MapSize(1, 2);
}

std::list<std::shared_ptr<Player>> FileConfigurationReader::getPlayers() const {
    return std::list<std::shared_ptr<Player>>();
}

std::list<std::shared_ptr<Armor>> FileConfigurationReader::getArmorsInMap() const {
    return std::list<std::shared_ptr<Armor>>();
}

std::list<std::shared_ptr<Weapon>> FileConfigurationReader::getWeaponsInMap() const {
    return std::list<std::shared_ptr<Weapon>>();
}

std::list<std::shared_ptr<const SolidItem>> FileConfigurationReader::getSolidItemsInMap() const {
    return std::list<std::shared_ptr<const SolidItem>>();
}

FileConfigurationReader::FileConfigurationReader(const std::string &fileConfigurationLocation) : ConfigurationReader(
        fileConfigurationLocation) {}
