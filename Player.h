//
// Created by Aubrey on 11/21/26.
//

#ifndef WONDERLANDRPG_PLAYER_H
#define WONDERLANDRPG_PLAYER_H
#include <string>
#include "Entity.h"
using namespace std;

class Player : public Entity {
private:
    Vector<Item> items;
    Weapon weapon;
    int currSta;
    int maxSta;
public:
    void addItem(Item i);
    void removeItem(Item i);
    bool hasItem(Item i);
    Weapon getWeapon();
    void setWeapon(Weapon W);
};



#endif //WONDERLANDRPG_PLAYER_H
