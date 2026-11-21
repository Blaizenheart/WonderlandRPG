//
// Created by Aubrey on 11/21/26.
//

#ifndef WONDERLANDRPG_PLAYER_H
#define WONDERLANDRPG_PLAYER_H
#include <string>

#include "Entity.h"
#include "Item.h"
#include "Weapon.h"
using namespace std;

class Player : public Entity {
private:
    Vector<Item> items;
    Weapon weapon;
    int currSta;
    int maxSta;
public:
    Player(string name, string description, string suit, int rank, int color, int currHP, int maxHP, int critChance, int critBoost, bool alive, Vector<Item> items, Weapon weapon, int currSta, int maxSta);
    void addItem(Item i);
    void removeItem(Item i);
    bool hasItem(Item i);
    Weapon getWeapon();
    void setWeapon(Weapon W);
};



#endif //WONDERLANDRPG_PLAYER_H
