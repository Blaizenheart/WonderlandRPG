//
// Created by summe on 11/21/2026.
//

#ifndef WONDERLANDRPG_ITEMFIND_H
#define WONDERLANDRPG_ITEMFIND_H

#include <string>
#include "Player.h"

using namespace std;

class ItemFind {
    private:
        Item item;
    public:
        Item getName() const;
        Item getDescription() const;
        string pickUp(Player p);
};

#endif //WONDERLANDRPG_ITEMFIND_H
