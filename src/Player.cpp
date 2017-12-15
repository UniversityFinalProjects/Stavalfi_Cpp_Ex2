#include "Player.h"

void Player::play() {
    for (auto soldier:this->soldiers)
        soldier->play(this->applySoldierStrategies);
}

Player::Player(const std::string &player_id, const ApplySoldierStrategies &applySoldierStrategies) : player_id(
        player_id), applySoldierStrategies(applySoldierStrategies) {}

void Player::addSoldier(std::shared_ptr<Soldier> &soldier) {

}

void Player::removeSoldier(const std::shared_ptr<Soldier> &soldier) {

}
