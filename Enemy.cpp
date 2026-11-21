//
// Created by Aubrey on 11/21/26.
//

#include "Enemy.h"
Enemy::Enemy(string name, string description, string suit, int rank, int color, int currHP, int maxHP, int critChance, int critBoost, bool alive, double successChance, string speak) : Entity(name, description, suit, rank, color, currHP, maxHP, critChance, critBoost, alive), Enemy(successChance, speak) {
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
    this->successChance = successChance;
    this->speak = speak;
}

//get functions
double Enemy::getSuccessChance() {
    return successChance;
}
string Enemy::getSpeak() {
    return speak;
}

//set functions
void Enemy::setSuccessChance(double sc) {
    successChance = sc;
}
void Enemy::setSpeak(string sp) {
    speak = sp;
}