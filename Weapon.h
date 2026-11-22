//
// Created by summe on 11/21/2026.
//

#ifndef WONDERLANDRPG_WEAPON_H
#define WONDERLANDRPG_WEAPON_H

#include <string>
#include "Item.h"
using namespace std;

class Weapon : public Item {
    private:
        int damage;
    public:
        Weapon() = default;
        Weapon(string name, string description, int damage);
        void setDamage(int damage);
        int getDamage() const;
};

#endif //WONDERLANDRPG_WEAPON_H
