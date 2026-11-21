//
// Created by shayl on 11/21/2026.
//

#ifndef WONDERLANDRPG_ROOM_H
#define WONDERLANDRPG_ROOM_H
#include <string>
#include <vector>
#include "Item.h"
#include "NPC.h"
#include "Enemy.h"

using namespace std;
class Room{
    private:
        string name; // might just be used internally to identify the rooms
        string description;
        vector<string> paths;
        vector<Item> items;
        vector<NPC> npcs;
        int encounterChance;
        vector<Enemy> encounterPool;
    public:
        Room();
        Room(string name, string description, vector<string> paths, vector<Item> items, vector<NPC> npcs, int encounterChance, vector<Enemy> encounterPool);
        string getName() const;
        string getDescription() const;
        vector<string> getPaths() const;
        vector<Item> getItems() const;
        vector<NPC> getNPCS() const;
        int getEncounterChance() const;
        vector<Enemy> getEncounterPool() const;
        void setName(string name);
        void setDescription(string description);
        void setPaths(vector<string> paths);
        void setItems(vector<Item> items);
        void setNPCs(vector<NPC> npcs);
        void setEncounterChance(int encounterChance);
        void setEnemies(vector<Enemy> encounterPool);
        void removeItem(Item i);
        string get();
};

#endif //WONDERLANDRPG_ROOM_H
