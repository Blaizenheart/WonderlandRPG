//
// Created by shayl on 11/21/2026.
//

#ifndef WONDERLANDRPG_ROOM_H
#define WONDERLANDRPG_ROOM_H
#include <string>
#include <vector>
using namespace std;
class Room{
    private:
        string name; // might just be used internally to identify the rooms
        string description;
        vector<string> paths;
        // vector<Item> items;
        // vector<NPC> npcs;
        int encounterChance;
        // vector<Enemy> encounterPool;
    public:
        Room(string name, string description, int encounterChance); // UPDATE LATER
        string getName() const;
        string getDescription() const;
};

#endif //WONDERLANDRPG_ROOM_H
