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

std::shared_ptr<Armor> ItemFactory::create(enum ArmorType armorTypes, const Point2d &location, bool inUsed) {
    static signed int id = 0;

    switch (armorTypes) {
        case ArmorType::BODY_ARMOR:
            return std::shared_ptr<Armor>(new BodyArmor(std::to_string(id), location, inUsed));
        case ArmorType::SHIELD_ARMOR:
            return std::shared_ptr<Armor>(new ShieldArmor(std::to_string(id), location, inUsed));
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}

std::shared_ptr<Weapon> ItemFactory::create(enum WeaponType weaponTypes,
                                            const Point2d &location,
                                            bool inUsed) {
    static signed int id = 0;

    switch (weaponTypes) {
        case WeaponType::M16_RIFLE:
            return std::shared_ptr<Weapon>(new M16Rifle(std::to_string(id), location, inUsed));
        case WeaponType::UZI_RIFLE:
            return std::shared_ptr<Weapon>(new UziRifle(std::to_string(id), location, inUsed));
        case WeaponType::MISSILE:
            return std::shared_ptr<Weapon>(new Missile(std::to_string(id), location, inUsed));
        case WeaponType::HEALER_WEAPON:
            return std::shared_ptr<Weapon>(new HealerWeapon(std::to_string(id), location, inUsed));
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}

std::shared_ptr<const SolidItem> ItemFactory::create(enum SolidItemType solidItemTypes, const Point2d &location) {
    static signed int id = 0;

    switch (solidItemTypes) {
        case SolidItemType::REGULAR_SOLID_ITEM:
            return std::shared_ptr<const SolidItem>(new RegularSolidItem(std::to_string(id), location));
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}
