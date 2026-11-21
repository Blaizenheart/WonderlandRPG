//
// Created by Aubrey on 11/21/26.
//
#include "Player.h"

Player::Player() {
    this->name = "Alice";
    this->description = "A lost girl.";
    this->suit = "NO SUIT";
    this->rank = 1;
    this->color = "NO COLOR";
    this->currHP = 15;
    this->maxHP = 15;
    this->critChance = 2;
    this->critBoost = 2;
    this->alive = true;
    this->currSta = 10;
    this->maxSta = 10;
    this->weapon = Weapon();
    this->items = vector<Item>();
}

Player::Player(string name, string description, string suit, int rank, int color, int currHP, int maxHP, int critChance, int critBoost, bool alive, Vector<Item> items, Weapon weapon, int currSta, int maxSta) : Entity(name, description, suit, rank, color, currHP, maxHP, critChance, critBoost, alive), Player(items, weapon, currSta, maxSta) {
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
}

//Weapon Functions
Weapon Player::getWeapon() {
    return weapon;
}
void Player::setWeapon(Weapon W) {
    weapon = W;
}
