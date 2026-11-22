//
// Created by summe on 11/21/2026.
//

#include "Item.h"

// Item::Item() {
//     this-> name = "NO NAME";
//     this-> description = "NO DESCRIPTION";
// }

Item::Item(string n, string d) {
    this-> name = n;
    this-> description = d;
}

string Item::getName() const {
    return this-> name;
}

string Item::getDescription() const {
    return this-> description;
}

void Item::setName(string n) {
    this-> name = n;
}

void Item::setDescription(string d) {
    this-> description = d;
}

