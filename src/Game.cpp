#include "Game.h"
#include <Map.h>
#include <cassert>

Game::Game(signed int mapHigh, signed int mapWidth,
           const std::list<std::shared_ptr<Player>> &players,
           const std::list<std::shared_ptr<Armor>> &armorsInMap,
           const std::list<std::shared_ptr<Weapon>> &weaponsInMap,
           const std::list<std::shared_ptr<const SolidItem>> &solidItemsInMap,
           const std::shared_ptr<const Reporter> &reporter)
        : map(new Map(mapHigh, mapWidth)),
          players(players),
          reporter(reporter) {
}

const std::list<std::shared_ptr<Player>> &Game::getPlayers() const {
    return players;
}

const std::shared_ptr<const MapReader> Game::getMap() const {
    return this->map;
}

void Game::report(const Reporter &reporter) const {
    reporter.report(*this);
}

void Game::endGame() const {
}

void Game::startIteration() const {
    for (auto &player:this->players)
        player->play(ApplySoldierStrategies(this->map, player));
}

void Game::endIteration() const {
    report(*this->reporter);
}

void Game::start() const {
    startIteration();
    endIteration();
}
