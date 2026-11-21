//
// Created by Aubrey on 11/21/26.
//

#include "ActiveSkill.h"
ActiveSkill::ActiveSkill(string name, string description, int damage) : Skill(name, description), ActiveSkill(damage) {
    this->name = name;
    this->description = description;
    this->damage = damage;
}

//gets
int ActiveSkill::getDamage() {
    return damage;
}

//sets
void ActiveSkill::setDamage(int damage) {
    this->damage = damage;
}