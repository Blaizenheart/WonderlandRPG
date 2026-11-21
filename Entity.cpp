//
// Created by Aubrey on 11/21/26.
//
#include "Entity.h"
Entity::Entity(string name) {
    this->name = name;
}
//get functions :3
string Entity::getName() {
    return name;
}
string Entity::getDescription() {
    return description;
}
string Entity::getSuit() {
    return suit;
}
int Entity::getRank() {
    return rank;
}
int Entity::getColor() {
    return color;
}
int Entity::getCurrHP() {
    return currHP;
}
int Entity::getMaxHP() {
    return maxHP;
}
int Entity::getCritChance() {
    return critChance;
}
double Entity::getCritBoost() {
    return critBoost;
}
bool Entity::getAlive() {
    return alive;
}

//set functions .w.
void Entity::setRank(int rank) {
    this->rank = rank;
}
void Entity::setCurrHP(int currHP) {
    this->currHP = currHP;
}
void Entity::setMaxHP(int maxHP) {
    this->maxHP = maxHP;
}
void Entity::setCritChance(int critChance) {
    this->critChance = critChance;
}
void Entity::setCritBoost(int critBoost) {
    this->critBoost = critBoost;
}
