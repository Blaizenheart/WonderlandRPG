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
        Weapon();
        Weapon(const string &name, const string& description, const int &damage);
        void setDamage(const int& damage);
        const int& getDamage() const;

};

#endif //WONDERLANDRPG_WEAPON_H
