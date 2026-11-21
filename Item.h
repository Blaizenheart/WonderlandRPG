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
        Item();
        Item(const string& name, const string& description);
        const string& getName() const;
        const string& getDescription() const;
        void setDescription(const string& description);
        void setName(const string& name);
};

#endif //WONDERLANDRPG_ITEM_H
