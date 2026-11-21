//
// Created by summe on 11/21/2026.
//

#ifndef WONDERLANDRPG_CONSUMABLE_H
#define WONDERLANDRPG_CONSUMABLE_H
#include <string>
using namespace std;
#include "Item.h"

class Consumable : public Item {
    public:
        Consumable();
        Consumable(const string& name, const string& description);

        static string use(const string& name);
};

#endif //WONDERLANDRPG_CONSUMABLE_H
