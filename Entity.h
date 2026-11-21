//
// Created by Aubrey on 11/21/26.
//
#ifndef WONDERLANDRPG_ENTITY_H
#define WONDERLANDRPG_ENTITY_H
#include <string>
using namespace std;
class Entity {
    private:
        string name;
    public:
        Entity(string name);
        string getName();
};
#endif //WONDERLANDRPG_ENTITY_H
