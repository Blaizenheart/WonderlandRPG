//
// Created by summe on 11/21/2026.
//


#include "Consumable.h"

Consumable::Consumable() : Item() {
}

Consumable::Consumable(const string& name, const string& description) : Item(name, description) {
}
//return string of flavor text. Ex. "You drink the drink"
string Consumable::use(const string& name) {
    string sentence = "You have consumed, " + name;
    return sentence;
}

