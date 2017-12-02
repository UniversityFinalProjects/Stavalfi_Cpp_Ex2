cmake_minimum_required(VERSION 3.9)
project(stavalfi_cpp_ex2)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)


add_executable(stavalfi_cpp_ex2 main.cpp tests/test1.cpp src/soldier/Soldier.cpp src/soldier/Soldier.h src/soldier/warrior/Warrior.cpp src/soldier/warrior/Warrior.h src/soldier/healer/Healer.cpp src/soldier/healer/Healer.h src/soldier/warrior/RegularWarrior.cpp src/soldier/warrior/RegularWarrior.h src/soldier/warrior/SniperWarrior.cpp src/soldier/warrior/SniperWarrior.h src/item/CollectableItem.cpp src/item/CollectableItem.h src/item/SolidItem.cpp src/item/SolidItem.h src/item/weapon/Weapon.cpp src/item/weapon/Weapon.h src/item/weapon/LightWeapon.cpp src/item/weapon/LightWeapon.h src/item/weapon/HeavyWeapon.cpp src/item/weapon/HeavyWeapon.h src/item/armor/Armor.cpp src/item/armor/Armor.h src/item/armor/BodyArmor.cpp src/item/armor/BodyArmor.h src/item/armor/ShieldArmor.cpp src/item/armor/ShieldArmor.h src/item/weapon/Missile.cpp src/item/weapon/Missile.h src/item/weapon/M16Rifle.cpp src/item/weapon/M16Rifle.h src/item/weapon/UziRifle.cpp src/item/weapon/UziRifle.h src/Point2d.cpp src/Point2d.h src/MapObject.cpp src/MapObject.h src/soldier/healer/RegularHealer.cpp src/soldier/healer/RegularHealer.h src/soldier/SoldierFactory.cpp src/soldier/SoldierFactory.h src/item/Item.cpp src/item/Item.h src/item/ItemFactory.cpp src/item/ItemFactory.h src/item/solid/RegularSolidItem.cpp src/item/solid/RegularSolidItem.h src/item/weapon/HealerWeapon.cpp src/item/weapon/HealerWeapon.h)
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