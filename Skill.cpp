//
// Created by Aubrey on 11/21/26.
//

#include "Skill.h"
Skill::Skill(string name, string description) {
    this->name = name;
    this->description = description;
}

//get functions
string Skill::getName() {
    return name;
}
string Skill::getDescription() {
    return description;
}
//set functions
void Skill::setName(string name) {
    this->name = name;
}
void Skill::setDescription(string description) {
    this->description = description;
}