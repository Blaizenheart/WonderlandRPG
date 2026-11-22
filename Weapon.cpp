//
// Created by summe on 11/21/2026.
//

#include "Weapon.h"

Weapon::Weapon() : Item() {
    name = "Nothing";
    description = "Empty";
    damage = 0;
}

Weapon::Weapon(const string &name, const string &description, const int &damage) : Item(name, description) {
    this->damage = damage;
}

void Weapon::setDamage(const int& d) {
    this->damage = d;
}

const int& Weapon::getDamage() const {
    return this->damage;
}


