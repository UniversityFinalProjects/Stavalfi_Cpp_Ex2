#include "ApplySoldierStrategies.h"
#include "Player.h"
#include <cassert>

ApplySoldierStrategies::ApplySoldierStrategies(const std::shared_ptr<MapModifier> &map,
                                               const std::shared_ptr<Player> &player,
                                               const FindPlayer &findPlayer)
        : map(map), player(player), findPlayer(findPlayer) {}

void ApplySoldierStrategies::applySoldierStrategies(Warrior &warrior) const {

    // call and apply move strategy
    Point2d newLocation = this->player->getMovingSoldierStrategy()->chooseNewLocation(warrior);
    this->map->remove(warrior);
    warrior.setLocation(newLocation.getY(), newLocation.getX());
    this->map->tryAdd(this->player->getSoldierById(warrior.getId()));

    // call and apply attack strategy
    if (warrior.getWeapon() != nullptr) {
        std::shared_ptr<Soldier> enemy = this->player->getAttackingStrategy()->chooseEnemyToAttack(warrior);
        enemy->setLifePoints(warrior.getWeapon()->getWeaponStrength());
        if (enemy->getLifePoints() <= 0) {
            // remove enemy from map and his player's soldier list
            this->map->remove(*enemy);
            this->findPlayer.getPlayerById(enemy->getPlayerId())->removeSoldier(enemy);
        }
    }

    // call and apply choose armor strategy
    std::shared_ptr<Armor> newArmor = this->player->getChoosingArmorStrategy()->chooseArmor(warrior);
    if (newArmor != nullptr) {
        this->map->remove(*newArmor);
        warrior.changeArmor(newArmor);
    }

    // call and apply choose weapon strategy
    std::shared_ptr<Weapon> newWeapon = this->player->getChoosingWeaponStrategy()->chooseWeapon(warrior);
    if (newWeapon != nullptr) {
        this->map->remove(*newWeapon);
        warrior.setWeapon(newWeapon);
    }
}

void ApplySoldierStrategies::applySoldierStrategies(Healer &healer) const {
    // call and apply move strategy
    Point2d newLocation = this->player->getMovingSoldierStrategy()->chooseNewLocation(healer);
    this->map->remove(healer);
    healer.setLocation(newLocation.getY(), newLocation.getX());
    this->map->tryAdd(this->player->getSoldierById(healer.getId()));

    // call and apply attack strategy
    if (healer.getWeapon() != nullptr) {
        std::shared_ptr<Soldier> enemy = this->player->getAttackingStrategy()->chooseEnemyToAttack(healer);
        assert(enemy != nullptr);// if its nullptr then we shouldn't continue the game because this->player won.
        enemy->setLifePoints(healer.getWeapon()->getWeaponStrength());
        if (enemy->getLifePoints() <= 0) {
            // remove enemy from map and his player's soldier list
            this->map->remove(*enemy);
            this->findPlayer.getPlayerById(enemy->getPlayerId())->removeSoldier(enemy);
        }
    }

    // call and apply choose armor strategy
    std::shared_ptr<Armor> newArmor = this->player->getChoosingArmorStrategy()->chooseArmor(healer);
    if (newArmor != nullptr) {
        this->map->remove(*newArmor);
        healer.changeArmor(newArmor);
    }

    // call and apply heal strategy
    std::shared_ptr<Soldier> allie = this->player->getHealingStrategy()->chooseAllieToHeal(healer);
    if (allie != nullptr)
        allie->setLifePoints(180);
}
