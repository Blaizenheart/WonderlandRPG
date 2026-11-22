//
// Created by summe on 11/21/2026.
//

#ifndef WONDERLANDRPG_ITEM_H
#define WONDERLANDRPG_ITEM_H
#include <string>

using namespace std;

class Item {
    protected:
        string name;
        string description;
    public:
        Item() = default;
        Item(string name, string description);
        string getName() const;
        string getDescription() const;
        void setDescription(string description);
        void setName(string name);
};

#endif //WONDERLANDRPG_ITEM_H
