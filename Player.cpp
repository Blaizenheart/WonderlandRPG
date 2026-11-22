//
// Created by Aubrey on 11/21/26.
//
#include "Player.h"

Player::Player(string name, string description, string suit, int rank, int color, int currHP, int maxHP,
    int critChance, int critBoost, bool alive, vector<Item> items, Weapon weapon, int currSta, int maxSta, vector<Status> statuses){
    this->name = name;
    this->description = description;
    this->suit = suit;
    this->rank = rank;
    this->color = color;
    this->currHP = currHP;
    this->maxHP = maxHP;
    this->critChance = critChance;
    this->critBoost = critBoost;
    this->alive = alive;

    this->currSta = currSta;
    this->maxSta = maxSta;
    this->weapon = weapon;
    this->items = items;
    this->statuses = statuses;
}
//Item functions
void Player::addItem(Item i) {
    items.push_back(i);
}
void Player::removeItem(Item i) {
    for (int j = 0; j < items.size();) {
        if (items.at(j).getName() == i.getName()) {
            items.erase(j);
            j=items.size();
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
    return false;
}

//Weapon Functions
Weapon Player::getWeapon() {
    return weapon;
}
void Player::setWeapon(Weapon W) {
    weapon = W;
}
