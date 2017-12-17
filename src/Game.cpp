#include "Game.h"
#include <Map.h>
#include <cassert>

Game::Game(signed int mapHigh, signed int mapWidth,
           const std::list<std::shared_ptr<Player>> &players,
           const std::list<std::shared_ptr<Armor>> &armorsInMap,
           const std::list<std::shared_ptr<Weapon>> &weaponsInMap,
           const std::list<std::shared_ptr<const SolidItem>> &solidItemsInMap,
           const std::shared_ptr<const Reporter> &reporter,
           const std::string &beginnerPlayerId)
        : map(new Map(mapHigh, mapWidth)), players(players), reporter(reporter) {
}


Player &Game::getPlayerBySoldier(const Soldier &soldier) const {
    return *this->players.front();
}

const std::list<std::shared_ptr<Player>> &Game::getPlayers() const {
    return this->players;
}

const std::shared_ptr<const MapReader> Game::getMap() const {
    return this->map;
}

void Game::report(const Reporter &reporter) const {
    reporter.report(*this);
}

void Game::playWithSoldier(Soldier &soldier) {
    soldier.play(*this);
}

void Game::playWithSoldier(Warrior &warrior) {
    // logic
}

void Game::playWithSoldier(Healer &healer) {
    // logic
}

void Game::endGame() const {

}

void Game::startIteration() const {
    assert(this->getPlayerTurn()->get() != nullptr);

    Player &playerTurn = *this->getPlayerTurn()->get();
    for (auto soldier:playerTurn.getSoldiers())
        playWithSoldier((*soldier));
}

void Game::endIteration() const {
    report(*this->reporter);
}

void Game::start() const {
    this->startIteration();
}