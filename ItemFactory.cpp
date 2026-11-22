//
// Created by summe on 11/21/2026.
//

#include "Weapon.h"
#include "Consumable.h"
static Weapon A = Weapon("Two-Handed Broad-Sword", "(Biggest Stick on the Playground!); Permanent 5%(?) health increase plus 5% block", 5);
static Weapon B = Weapon("Rapier" , " (For nipping a problem in the bud!) Perma boost of 5% crit rate and 5% dodge" , 3);
static Weapon C = Weapon("The Hunter's Crossbow" , "(Two birds one arrow!) Permanent boost of 10% crit dmg " , 8);
static Weapon D = Weapon("Glass Shard", "(A young lady's looking glass) increase attack by 2" , 2);
static Weapon E = Weapon("MorningStar Mace" , "(An angel's weapon) stamina boost of 10%" , 6);
static Consumable a = Consumable("Fresh Red Apple" , "(An apple a day…): Lends health boost depending on players health stat; if player is full health no effect, 10% stat regen for health at 90% and +10% each time that number lowers by 10, so at 80% health they heal 20% health and so on");
static Consumable b = Consumable("Juice" , "(Drink Me!): Lends stat boost depending on player's stamina stat; if player full stamina no effect, 10% stat regen for stamina at 90% and +10% each time stamina lowers by 10, at 70% stamina they regen 30% of stat and so on");
static Consumable c = Consumable("Whole Milk" , "(Big and Strong!): Lends a 15% damage boost to players dmg stat");
static Consumable d = Consumable("Special Candy" , "(Sugar Rush!): Lends a substantial stamina boost percent to players base stamina stat.");
static Consumable e = Consumable("Cheshire's Gift" , "Random stat boost and de-buff of 2 limited to 10-20% perma de-buff/ buff");

