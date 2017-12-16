#include "Player.h"

void Player::addSoldier(std::shared_ptr<Soldier> &soldier) {

}

void Player::removeSoldier(const std::shared_ptr<Soldier> &soldier) {

}


Player::Player(const std::string &playerId,
               const std::shared_ptr<AttackingStrategy> &attackingStrategy,
               const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
               const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
               const std::shared_ptr<HealingStrategy> &healingStrategy,
               const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy)
        : playerId(playerId),
          attackingStrategy(attackingStrategy),
          choosingWeaponStrategy(choosingWeaponStrategy),
          choosingArmorStrategy(choosingArmorStrategy),
          healingStrategy(healingStrategy),
          movingSoldierStrategy(movingSoldierStrategy) {}

const std::string &Player::getPlayerId() const {
    return playerId;
}

const std::list<std::shared_ptr<Soldier>> &Player::getSoldiers() const {
    return soldiers;
}

const std::shared_ptr<AttackingStrategy> &Player::getAttackingStrategy() const {
    return attackingStrategy;
}

void Player::setAttackingStrategy(const std::shared_ptr<AttackingStrategy> &attackingStrategy) {
    Player::attackingStrategy = attackingStrategy;
}

const std::shared_ptr<ChoosingWeaponStrategy> &Player::getChoosingWeaponStrategy() const {
    return choosingWeaponStrategy;
}

void Player::setChoosingWeaponStrategy(const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy) {
    Player::choosingWeaponStrategy = choosingWeaponStrategy;
}

const std::shared_ptr<ChoosingArmorStrategy> &Player::getChoosingArmorStrategy() const {
    return choosingArmorStrategy;
}

void Player::setChoosingArmorStrategy(const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy) {
    Player::choosingArmorStrategy = choosingArmorStrategy;
}

const std::shared_ptr<HealingStrategy> &Player::getHealingStrategy() const {
    return healingStrategy;
}

void Player::setHealingStrategy(const std::shared_ptr<HealingStrategy> &healingStrategy) {
    Player::healingStrategy = healingStrategy;
}

const std::shared_ptr<MovingSoldierStrategy> &Player::getMovingSoldierStrategy() const {
    return movingSoldierStrategy;
}

void Player::setMovingSoldierStrategy(const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy) {
    Player::movingSoldierStrategy = movingSoldierStrategy;
}

Player::~Player() {

}
