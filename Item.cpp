//
// Created by summe on 11/21/2026.
//

#include "Item.h"

Item::Item() {
    this-> name = "noname";
    this-> description = "none";
}

Item::Item(const string& n, const string& d) {
    this-> name = n;
    this-> description = d;
}

const string& Item::getName() const {
    return this-> name;
}

const string& Item::getDescription() const {
    return this-> description;
}

void Item::setName(const string& n) {
    this-> name = n;
}

void Item::setDescription(const string& d) {
    this-> description = d;
}

