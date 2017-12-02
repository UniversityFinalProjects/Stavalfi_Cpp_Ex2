#include "ItemFactory.h"

#include "armor/BodyArmor.h"
#include "armor/ShieldArmor.h"
#include "weapon/UziRifle.h"
#include "weapon/M16Rifle.h"
#include "weapon/Missile.h"
#include "solid/RegularSolidItem.h"
#include "weapon/HealerWeapon.h"

#include <stdexcept>

#define ENUM_TO_STR(ENUM) std::string(#ENUM)

Armor *ItemFactory::create(enum ArmorTypes armorTypes, const Point2d &location) {
    switch (armorTypes) {
        case ArmorTypes::BODY_ARMOR:
            return new BodyArmor(location);
        case ArmorTypes::SHIELD_ARMOR:
            return new ShieldArmor(location);
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}

Weapon *ItemFactory::create(enum WeaponTypes weaponTypes, const Point2d &location) {
    switch (weaponTypes) {
        case WeaponTypes::M16_RIFLE:
            return new M16Rifle(location);
        case WeaponTypes::UZI_RIFLE:
            return new UziRifle(location);
        case WeaponTypes::MISSILE:
            return new Missile(location);
        case WeaponTypes::HEALER_WEAPON:
            return new HealerWeapon(location);
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}

SolidItem *ItemFactory::create(enum SolidItemTypes solidItemTypes, const Point2d &location) {
    switch (solidItemTypes) {
        case SolidItemTypes::REGULAR_SOLID_ITEM:
            return new RegularSolidItem(location);
        default:
            throw std::invalid_argument(ENUM_TO_STR(armorTypes));
    }
}
