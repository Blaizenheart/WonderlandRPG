//
// Created by summe on 11/21/2026.
//
#include "Consumable.h"

Consumable::Consumable() : Item() {
}

Consumable::Consumable(string name, string description) {
    this->name = name;
    this->description = description;
}
//return string of flavor text. Ex. "You drink the drink"
string Consumable::use(const string& name) {
    string sentence = "You have consumed, " + name;
    return sentence;
}

