#include "Game.h"
#include <Map.h>

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

void Game::endIteration() {

}

void Game::changeTurnToNextPlayer() {

}

void Game::report(const Reporter &reporter) const {
    reporter.report(*this);
}

const std::list<std::shared_ptr<Player>>::iterator &Game::getPlayerTurn() const {
    return playerTurn;
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

void Game::endGame() {

}

void Game::startIteration() {

}

void Game::playCurrentWithPlayer() {

}

void Game::start() {

}
