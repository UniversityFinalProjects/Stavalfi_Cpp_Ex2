#include "FileConfigurationReader.h"
#include <fstream>
#include <string.h>
#include <cassert>
#include <map>
#include "PlayerFactory.h"
#include "SoldierStrategyFactory.h"

FileConfigurationReader::FileConfigurationReader(const std::string &fileConfigurationLocation) : ConfigurationReader(
        fileConfigurationLocation) {
    soldierTypes["human"] = PlayerType::HUMAN;
    soldierTypes["computer"] = PlayerType::COMPUTER;
}

ConfigurationReader::MapSize FileConfigurationReader::getMapSize() const {
    std::ifstream reader;
    //reader.exceptions(std::ifstream::failbit | std::ifstream::badbit | std::ifstream::eofbit | std::ifstream::goodbit);
    reader.open("../init.txt", std::ios::in);
    std::string s1 = "";
    while (s1 != "battlefieldSize") {
        assert(reader.good());
        reader >> s1;
    }

    signed int mapWidth, mapHigh;
    reader >> mapWidth >> mapHigh;
    assert(reader.good());

    reader.close();
    return MapSize(mapWidth, mapHigh);

}

std::list<std::shared_ptr<Player>>
FileConfigurationReader::getPlayers(const std::shared_ptr<const MapReader> &map) const {
    std::ifstream reader;
    //reader.exceptions(std::ifstream::failbit | std::ifstream::badbit | std::ifstream::eofbit | std::ifstream::goodbit);
    reader.open("../init.txt", std::ios::in);
    std::list<std::shared_ptr<Player>> players;

    std::string s1 = "";
    while (s1 != "players") {
        assert(reader.good());
        reader >> s1;
    }

    std::size_t playersAmount, SoldiersAmountForPlayer;
    // s1 here is equal too "soldier".
    // file structure:
    // players	2
    // soldiers	3
    reader >> playersAmount >> s1 >> SoldiersAmountForPlayer;
    assert(s1 == "soldiers");
    assert(reader.good());

    std::shared_ptr<Player> player = getPlayer(map, reader, SoldiersAmountForPlayer);
    while (player != nullptr) {
        players.push_back(player);
        player = getPlayer(map, reader, SoldiersAmountForPlayer);
    }

    return players;
}

std::shared_ptr<Player>
FileConfigurationReader::getPlayer(const std::shared_ptr<const MapReader> &map, std::ifstream &reader,
                                   std::size_t SoldiersAmountForPlayer) const {
    assert(reader.good());

    std::shared_ptr<Player> player;
    std::list<std::shared_ptr<Soldier>> soldiers;

    std::string playerType;
    // file structure:
    // p1	human
    reader >> playerType >> playerType;
    assert(reader.good());

    switch (soldierTypes[playerType]) {
        case PlayerType::HUMAN:
            player = PlayerFactory::create(soldierTypes[playerType],
                                           soldiers,
                                           SoldierStrategyFactory::get(
                                                   AttackingStrategyType::DEFAULT_ATTACKING_STRATEGY, map),
                                           SoldierStrategyFactory::get(
                                                   ChoosingWeaponStrategyType::DEFAULT_CHOOSING_WEAPON_STRATEGY, map),
                                           SoldierStrategyFactory::get(
                                                   ChoosingArmorStrategyType::DEFAULT_CHOOSING_ARMOR_STRATEGY, map),
                                           SoldierStrategyFactory::get(
                                                   HealingStrategyType::DEFAULT_HEALING_STRATEGY, map),
                                           SoldierStrategyFactory::get(
                                                   MovingSoldierStrategyType::HUMAN_MOVING_SOLDIER_STRATEGY, map));
        case PlayerType::COMPUTER:
            player = PlayerFactory::create(soldierTypes[playerType],
                                           soldiers,
                                           SoldierStrategyFactory::get(
                                                   AttackingStrategyType::DEFAULT_ATTACKING_STRATEGY, map),
                                           SoldierStrategyFactory::get(
                                                   ChoosingWeaponStrategyType::DEFAULT_CHOOSING_WEAPON_STRATEGY, map),
                                           SoldierStrategyFactory::get(
                                                   ChoosingArmorStrategyType::DEFAULT_CHOOSING_ARMOR_STRATEGY, map),
                                           SoldierStrategyFactory::get(
                                                   HealingStrategyType::DEFAULT_HEALING_STRATEGY, map),
                                           SoldierStrategyFactory::get(
                                                   MovingSoldierStrategyType::COMPUTER_MOVING_SOLDIER_STRATEGY, map));

    }

    return std::shared_ptr<Player>();
}

std::shared_ptr<Soldier> FileConfigurationReader::getSoldier(std::ifstream &reader) const {
    return std::shared_ptr<Soldier>();
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