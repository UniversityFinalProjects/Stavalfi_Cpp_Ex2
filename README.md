# Game Paper by Stav Alfi and Elior Sastiel

### Main modules:

1. [Map objects: Soldiers and items](#map-objects-soldiers-and-items)
2. [Map](#map)
3. [Soldier strategies](#soldier-strategies)
4. [Read configurations](#read-configurations)
5. [Write reports](#write-reports)

### Introduction

##### Classes which "connect" between different and independent modules:
1. `Game` - Given an initialized map, players (with soldiers) and a module to write reports to, the Game class will start the game, start and end each iteration and then end the game.
2. `GameInitializer` - Given a module to read configurations from and a module to write reports to, the `GameInitializer` class will create and return a `Game` object by reading the configurations and creating the map, players, soldiers and items and place them in the right places.

Both classes are not linked to any specific implementation of any Main module. They are only linking between them. This is because GameInitializer and Game classes recieve as a parameters only interfaces/abstract classes.

All in all, throught out this paper, we arn't going to talk about any specific implementation of any module because this is irelevant. Instead, we will talk about the funcatuality each module provide, how we used _SOLID_ principles and what are the design patterns I used overall in this project.

### Map objects: Soldiers and items

We exemined each object functuality and it's properties. If a property `A` is a property of an obejct (it will not change in any situation), then `A` is defined to be a non-static class member. Else, `A` is a property of a class (`A` will never be changed), then `A` will defined as a drived class.

Even if we defined a drived class which does not have any rule in this `specific` version of the game, it does not mean it won't have any rule in a future version. Also, defining an extra class which represent a behavior, helpes with the readability of the problem and the game expanding later on.

For example, we choosed to save the pre-defined configured directions for a soldier as a member in Soldier class, and this member object provide a way to get the next direction only. 
Now we support pre-defined configured directions for any type of player and the Move strategies, can choose to use this information or not.
This object is of type `SoldierDirections`class and it was improtent to remove this logic from the `Soldier` class logic so we keep the first _SOLID_ principle: _The single responsibility principle_.

### Map

Every other module which need access to `Map` functuality, most likely, need only one access type: _modify_ access or _read_ access.

Every Map implementation inherits from `MapReaderModifier` interface which inherit from `MapReader` and `MapModifier` interfaces. This keep the _SOLID_ principle: _The interface segregation principle_.

`MapModifier` interface declare methods to add and remove entities from the map, while `MapReader` interface declare methods to search in the map. 

A word about `Map` class which implements `MapReaderModifier` interface, I choosed to represent the map in a 2-dementional array. Each cell represent a space of `n` on `m`. Each cell is an object of type `MapCell` class which also implements `MapReaderModifier`.
`MapCell` class contains the following `std::list<std::shared_ptr<...>>` as memebers: soldiers, free weapons, free armors and solid items (`tree inherit from `SolidItem` class`). Also, `Map` class implementation keeps the _SOLID_ principle: _Dependency inversion principle_ (it doesn't know who is `MapCell` class).

__This kind of implementation let me to change the implementation of `Map` and `MapCell` without each one knowing about it.__

### Soldier strategies

##### Choosing the best option

Given a read access to a map and a read access to specific soldier, a given strategy `s` will search and return the best options fit by it's logic. `s` won't apply anything. __Applying a strategy's result is a different responsibility.__

By seperating the responsibilites of choosing the best option and applying a given option, we keep the first _SOLID_ principle: _The single responsibility principle_.

Every abstract class strategy: `MovingSoldierStrategy`,`AttackingStrategy`,`ChoosingArmorStrategy`,`ChoosingWeaponStrategy`,`HealingStrategy` extends `SoldierStrategy` which is an abstract strategy which saved a `MapReader` pointer.

Most strutegies have 2 abstract methods with the same name but each get a different param. One get `Healer` and the other get `Warrior`. Both are abstract classes which inherit from `Soldier` abstract class. We did that because probably, each strategy implementation want to know what is the type of the soldier it calculate the best option on.

The abstract `Player` class saves a pointer to every strategy as well as it's soldiers.
The `Player` class does not have any access to the map so trying to send it's soldiers to a given strategy will be a waste of time. 

##### Applying a strategy's result

We don't see any reason to give the `Player` class a _modify_ access to the map. If we did, then a mistake in unrelated method in `Player` class could remove or add object in the map which are not related to this `Player`. 

Instead, we created a dedicated class which responsible for running a strategy and applying it: `ApplySoldierStrategies`. This class only have _modify_ access to the map. It does not need any _read_ access because the strategies already initialized with a pointer to `MapReader` object.

This method have 3 members: a pointer to a `Player` object, a pointer to a `MapModifier` object and a reference to an object which is responsible for finding players by `id` (after we kill a soldier, we need to remove him from his player's soldier list).

`Player` class does not have a pointer to this object. Instead it get a pointer to this class in it's method: `play`. Remmber that each soldier may be in a different type so different strategies will be applyed on him and also each strategy does not get as a parameter a `Soldier` pointer, but only `Healer` and `Warrior` pointers. Here we are using a version of _The visitor design pattern_: The player send to any of it's soldiers a pointer to `ApplySoldierStrategies` object by invoking the abstract and implementation-less method `play` in `Soldier` class. `Healer` and `Warrior` classes are implementing `play` and invoking the relevant method in `ApplySoldierStrategies` (which is a param in thier method):

1. `void applySoldierStrategies(Warrior &warrior) const`

2. `void applySoldierStrategies(Healer &healer) const`

Each one invoke the relevant strategies of each player on a given soldier and apply the strategies result.

### Read configurations

We may read from different configurations from different sources: files, console, internet and more.
We created an abstract class: `ConfigurationReader`. This class declare abstract methods which responsible for getting the initial configurations of the game: map, player, soldiers and items details.

### Write reports

Agian, I have used the _visitor design pattern_ to implement the reports. After each iteration in the game, we send the details of every player,soldier and item (except `SolidItem`; trees) in the game. Each one of them inherit from `Reportable` interface which have one abstract and implemention-less method: `report` which recieve a `Reporter` reference - the actual reporting object.

Only `Game` class can provide a `Reporter` reference someone try to call`Reportable::report`. This way, we keep the single responsibility of of `Game` class to only manage the iterations of the game and not more.
