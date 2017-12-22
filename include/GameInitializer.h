#ifndef STAVALFI_CPP_EX2_GAME_INITIALIZER_H
#define STAVALFI_CPP_EX2_GAME_INITIALIZER_H

#include "GameController.h"
#include "ConfigurationReader.h"
#include <Game.h>
#include <Map.h>
#include <memory>
#include <cassert>

class GameInitializer {
public:
    static GameInitializer &getInstance();

    template<typename MapClassImplementation>
    std::shared_ptr<const GameController> initializeGame(const ConfigurationReader &configurationReader,
                                                         const std::shared_ptr<const Reporter> &reporter);

};

template<typename MapClassImplementation>
std::shared_ptr<const GameController>
GameInitializer::initializeGame(const ConfigurationReader &configurationReader,
                                const std::shared_ptr<const Reporter> &reporter) {

    ConfigurationReader::MapSize mapSize = configurationReader.getMapSize();
    std::shared_ptr<MapReaderModifier> map(new MapClassImplementation(mapSize.getMapHigh(), mapSize.getMapWidth()));

    std::list<std::shared_ptr<Player>> players = configurationReader.getPlayers(map);

    // fill map with objects
    for (auto &player:players)
        for (auto &soldier:player->getSoldiers()) {
            bool insertSucceed = map->tryAdd(soldier);
            assert(insertSucceed);
        }

    for (auto &freeArmorInMap:configurationReader.getArmorsInMap()) {
        bool insertSucceed = map->tryAdd(freeArmorInMap);
        assert(insertSucceed);
    }

    for (auto &freeWeaponInMap:configurationReader.getWeaponsInMap()) {
        bool insertSucceed = map->tryAdd(freeWeaponInMap);
        assert(insertSucceed);
    }

    for (auto &freeSolidItemInMap:configurationReader.getSolidItemsInMap()) {
        bool insertSucceed = map->tryAdd(freeSolidItemInMap);
        assert(insertSucceed);
    }

    return std::shared_ptr<const GameController>(new Game(map, players, reporter));
}


#endif //STAVALFI_CPP_EX2_GAME_INITIALIZER_H
