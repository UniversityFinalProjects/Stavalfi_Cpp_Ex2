#include "ItemFactory.h"
#include <stdexcept>
#include <BodyArmor.h>
#include <ShieldArmor.h>
#include <M16Rifle.h>
#include <UziRifle.h>
#include <HealerWeapon.h>
#include <Missile.h>
#include <RegularSolidItem.h>

#define ENUM_TO_STR(ENUM) std::string(#ENUM)

std::shared_ptr<Armor> ItemFactory::create(enum ArmorTypes armorTypes, const Point2d &location, bool inUsed) {
    static signed int id = 0;

    switch (armorTypes) {
        case ArmorTypes::BODY_ARMOR:
            return std::shared_ptr<Armor>(new BodyArmor(std::to_string(id), location, inUsed));
        case ArmorTypes::SHIELD_ARMOR:
            return std::shared_ptr<Armor>(new ShieldArmor(std::to_string(id), location, inUsed));
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}

std::shared_ptr<Weapon> ItemFactory::create(enum WeaponTypes weaponTypes, const Point2d &location, bool inUsed) {
    static signed int id = 0;

    switch (weaponTypes) {
        case WeaponTypes::M16_RIFLE:
            return std::shared_ptr<Weapon>(new M16Rifle(std::to_string(id), location, inUsed));
        case WeaponTypes::UZI_RIFLE:
            return std::shared_ptr<Weapon>(new UziRifle(std::to_string(id), location, inUsed));
        case WeaponTypes::MISSILE:
            return std::shared_ptr<Weapon>(new Missile(std::to_string(id), location, inUsed));
        case WeaponTypes::HEALER_WEAPON:
            return std::shared_ptr<Weapon>(new HealerWeapon(std::to_string(id), location, inUsed));
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}

std::shared_ptr<const SolidItem> ItemFactory::create(enum SolidItemTypes solidItemTypes, const Point2d &location) {
    static signed int id = 0;

    switch (solidItemTypes) {
        case SolidItemTypes::REGULAR_SOLID_ITEM:
            return std::shared_ptr<const SolidItem>(new RegularSolidItem(std::to_string(id), location));
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}
