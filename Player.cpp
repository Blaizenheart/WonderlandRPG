//
// Created by Aubrey on 11/21/26.
//
#include "Player.h"

//Item functions
void Player::addItem(Item i) {
    items.push_back(i);
}
void Player::removeItem(Item i) {
    for (int j = 0; j < items.size();) {
        if (items.at(j).getName() == i.getName()) {
            i.erase(j);
        }
        j++;
    }
}
bool Player::hasItem(Item i) {
    for (int j = 0; j < items.size();) {
        if (items.at(j).getName() == i.getName()) {
            return true;
        }
        j++;
    }
}

//Weapon Functions
Weapon Player::getWeapon() {
    return weapon;
}
void Player::setWeapon(Weapon W) {
    weapon = W;
}
