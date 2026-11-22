//
// Created by summe on 11/21/2026.
//

#include "Weapon.h"

// Weapon::Weapon() : Item() {
//     name = "Nothing";
//     description = "Empty";
//     damage = 0;
// }

Weapon::Weapon(string name, string description, int damage) : Item(name, description) {
    this->name = name;
    this->description = description;
    this->name = name;
    this->description = description;
    this->damage = damage;
}

void Weapon::setDamage(int d) {
    this->damage = d;
}

int Weapon::getDamage() const {
    return this->damage;
}


