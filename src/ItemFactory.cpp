#include "ItemFactory.h"
#include <BodyArmor.h>
#include <ShieldArmor.h>
#include <M16Rifle.h>
#include <UziRifle.h>
#include <HealerWeapon.h>
#include <Missile.h>
#include <RegularSolidItem.h>

std::shared_ptr<Armor> ItemFactory::create(enum ArmorType armorTypes, const Point2d &location, bool inUsed) {
    static signed int id = 0;

    switch (armorTypes) {
        case ArmorType::BODY_ARMOR:
            return std::make_shared<BodyArmor>(std::to_string(id++), location, inUsed);
        case ArmorType::SHIELD_ARMOR:
            return std::make_shared<ShieldArmor>(std::to_string(id++), location, inUsed);
    }
}

std::shared_ptr<Weapon> ItemFactory::create(enum WeaponType weaponTypes,
                                            const Point2d &location,
                                            bool inUsed) {
    static signed int id = 0;

    switch (weaponTypes) {
        case WeaponType::M16_RIFLE:
            return std::make_shared<M16Rifle>(std::to_string(id++), location, inUsed);
        case WeaponType::UZI_RIFLE:
            return std::make_shared<UziRifle>(std::to_string(id++), location, inUsed);
        case WeaponType::MISSILE:
            return std::make_shared<Missile>(std::to_string(id++), location, inUsed);
        case WeaponType::HEALER_WEAPON:
            return std::make_shared<HealerWeapon>(std::to_string(id++), location, inUsed);
    }
}

std::shared_ptr<const SolidItem> ItemFactory::create(enum SolidItemType solidItemTypes, const Point2d &location) {
    static signed int id = 0;

    switch (solidItemTypes) {
        case SolidItemType::REGULAR_SOLID_ITEM:
            return std::make_shared<RegularSolidItem>(std::to_string(id++), location);
    }
}
