//
// Created by Aubrey on 11/21/26.
//
#include "Entity.h"

// constructors
// Entity::Entity() {
//     this->name = "NO NAME";
//     this->description = "NO DESCRIPTION";
//     this->suit = "NO SUIT";
//     this->rank = -1;
//     this->color = -1;
//     this->currHP = -1;
//     this->maxHP = -1;
//     this->critChance = -1;
//     this->critBoost = -1;
//     this->alive = true;
//     this->statuses = vector<Status>();
// }

Entity::Entity(string name, string description, string suit, int rank, int color, int currHP, int maxHP, int critChance,
    int critBoost, bool alive, vector<Status> statuses) {
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
    this->statuses = statuses;
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
bool Entity::isAlive() {
    return alive;
}
vector<Status> getStatus() {
    return this->statuses;
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
void addStatus(Status status) {
    statuses.push_back(status);
}
// vector<Status> updateStatus();
