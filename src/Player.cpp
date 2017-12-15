#include "Player.h"

void Player::play() {
    for (auto soldier:this->soldiers)
        soldier->play(*this);
}

void Player::addSoldier(std::shared_ptr<Soldier> &soldier) {

}

void Player::removeSoldier(const std::shared_ptr<Soldier> &soldier) {

}

void Player::playWithSoldier(Soldier &soldier) {
    soldier.play(*this);
}

void Player::playWithSoldier(Warrior &warrior) {
    // logic
}

void Player::playWithSoldier(Healer &healer) {
    // logic
}

Player::Player(const std::string &player_id, const FindPlayer &findPlayer, MapModifier &mapModifier,
               const std::shared_ptr<AttackingStrategy> &attackingStrategy,
               const std::shared_ptr<ChoosingWeaponStrategy> &choosingWeaponStrategy,
               const std::shared_ptr<ChoosingArmorStrategy> &choosingArmorStrategy,
               const std::shared_ptr<HealingStrategy> &healingStrategy,
               const std::shared_ptr<MovingSoldierStrategy> &movingSoldierStrategy) : player_id(player_id),
                                                                                      findPlayer(findPlayer),
                                                                                      mapModifier(mapModifier),
                                                                                      attackingStrategy(
                                                                                              attackingStrategy),
                                                                                      choosingWeaponStrategy(
                                                                                              choosingWeaponStrategy),
                                                                                      choosingArmorStrategy(
                                                                                              choosingArmorStrategy),
                                                                                      healingStrategy(healingStrategy),
                                                                                      movingSoldierStrategy(
                                                                                              movingSoldierStrategy) {}
