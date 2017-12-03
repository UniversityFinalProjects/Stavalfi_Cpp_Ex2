#include "ItemFactory.h"

#include "item/armor/BodyArmor.h"
#include "item/armor/ShieldArmor.h"
#include "item/weapon/UziRifle.h"
#include "item/weapon/M16Rifle.h"
#include "item/weapon/Missile.h"
#include "item/solid/RegularSolidItem.h"
#include "item/weapon/HealerWeapon.h"

#include <stdexcept>

#define ENUM_TO_STR(ENUM) std::string(#ENUM)

Armor *ItemFactory::create(enum ArmorTypes armorTypes, const Point2d &location,bool inUsed) {
    static signed int id=0;

    switch (armorTypes) {
        case ArmorTypes::BODY_ARMOR:
            return new BodyArmor(std::to_string(id),location, inUsed);
        case ArmorTypes::SHIELD_ARMOR:
            return new ShieldArmor(std::to_string(id),location, inUsed);
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}

Weapon *ItemFactory::create(enum WeaponTypes weaponTypes, const Point2d &location,bool inUsed) {
    static signed int id=0;

    switch (weaponTypes) {
        case WeaponTypes::M16_RIFLE:
            return new M16Rifle(std::to_string(id),location, inUsed);
        case WeaponTypes::UZI_RIFLE:
            return new UziRifle(std::to_string(id),location, inUsed);
        case WeaponTypes::MISSILE:
            return new Missile(std::to_string(id),location, inUsed);
        case WeaponTypes::HEALER_WEAPON:
            return new HealerWeapon(std::to_string(id),location, inUsed);
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}

SolidItem *ItemFactory::create(enum SolidItemTypes solidItemTypes, const Point2d &location) {
    static signed int id=0;

    switch (solidItemTypes) {
        case SolidItemTypes::REGULAR_SOLID_ITEM:
            return new RegularSolidItem(std::to_string(id),location);
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}
