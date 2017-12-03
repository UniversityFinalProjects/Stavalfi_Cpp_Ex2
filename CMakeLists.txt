cmake_minimum_required(VERSION 3.9)
project(stavalfi_cpp_ex2)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)


add_executable(stavalfi_cpp_ex2 main.cpp tests/test1.cpp src/objects/soldier/Soldier.cpp src/objects/soldier/Soldier.h src/objects/soldier/warrior/Warrior.cpp src/objects/soldier/warrior/Warrior.h src/objects/soldier/healer/Healer.cpp src/objects/soldier/healer/Healer.h src/objects/soldier/warrior/RegularWarrior.cpp src/objects/soldier/warrior/RegularWarrior.h src/objects/soldier/warrior/SniperWarrior.cpp src/objects/soldier/warrior/SniperWarrior.h src/objects/item/CollectableItem.cpp src/objects/item/CollectableItem.h src/objects/item/SolidItem.cpp src/objects/item/SolidItem.h src/objects/item/weapon/Weapon.cpp src/objects/item/weapon/Weapon.h src/objects/item/weapon/LightWeapon.cpp src/objects/item/weapon/LightWeapon.h src/objects/item/weapon/HeavyWeapon.cpp src/objects/item/weapon/HeavyWeapon.h src/objects/item/armor/Armor.cpp src/objects/item/armor/Armor.h src/objects/item/armor/BodyArmor.cpp src/objects/item/armor/BodyArmor.h src/objects/item/armor/ShieldArmor.cpp src/objects/item/armor/ShieldArmor.h src/objects/item/weapon/Missile.cpp src/objects/item/weapon/Missile.h src/objects/item/weapon/M16Rifle.cpp src/objects/item/weapon/M16Rifle.h src/objects/item/weapon/UziRifle.cpp src/objects/item/weapon/UziRifle.h src/objects/Point2d.cpp src/objects/Point2d.h src/objects/MapObject.cpp src/objects/MapObject.h src/objects/soldier/healer/RegularHealer.cpp src/objects/soldier/healer/RegularHealer.h src/objects/SoldierFactory.cpp src/objects/SoldierFactory.h src/objects/item/Item.cpp src/objects/item/Item.h src/objects/ItemFactory.cpp src/objects/ItemFactory.h src/objects/item/solid/RegularSolidItem.cpp src/objects/item/solid/RegularSolidItem.h src/objects/item/weapon/HealerWeapon.cpp src/objects/item/weapon/HealerWeapon.h src/Map.cpp src/Map.h src/Game.cpp src/Game.h)

target_link_libraries(stavalfi_cpp_ex2 gtest gtest_main)



######
#
#set(CMAKE_CXX_STANDARD 11)
#add_subdirectory(lib/googletest-master)
#include_directories(lib/googletest-master/googletest/include)
#include_directories(lib/googletest-master/googlemock/include)
#
#
#set(SOURCE_FILES main.cpp src/FizzBuzz.cpp src/FizzBuzz.h Tests/FizzBuzzTest.cpp)
#add_executable(cpluspluskatas ${SOURCE_FILES})
#
#target_link_libraries(cpluspluskatas gtest gtest_main)