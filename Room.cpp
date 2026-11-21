//
// Created by shayl on 11/21/2026.
//
#include "Room.h"

// CONSTRUCTORS
Room::Room() {
    this->name = "NO NAME";
    this->description = "NO DESCRIPTION";
    this->paths = vector<string>();
    this->items = vector<Item>();
    this->npcs = vector<NPC>();
    this->encounterChance = -1;
}

Room::Room(string name, string description, vector<string> paths, vector<Item> items, vector<NPC> npcs, int encounterChance, vector<Enemy> encounterPool) {
    this->name = name;
    this->description = description;
    this->paths = paths;
    this->items = items;
    this->npcs = npcs;
    this->encounterChance = encounterChance;
    this->encounterPool = encounterPool;
}

// GETTERS
string Room::getName() const {
    return this->name;
}
string Room::getDescription() const {
    return this->description;
}
vector<string> Room::getPaths() const {
    return this->paths;
}
vector<Item> Room::getItems() const {
    return this->items;
}
vector<NPC> Room::getNPCS() const {
    return this->npcs;
}
int Room::getEncounterChance() const {
    return this->encounterChance;
}
vector<Enemy> Room::getEncounterPool() const {
    return this->encounterPool();
}

// SETTERS
void Room::setName(string name) {
    this->name = name;
}
void Room::setDescription(string description) {
    this->description = description;
}
void Room::setPaths(vector<string> paths) {
    this->paths = paths;
}
void Room::setItems(vector<Item> items) {
    this->items = items;
}
void Room::setNPCs(vector<NPC> npcs){
    this->npcs = npcs;
}
void Room::setEncounterChance(int encounterChance) {
    this->encounterChance = encounterChance;
}
void Room::setEnemies(vector<Enemy> encounterPool) {
    this->encounterPool = encounterPool;
}

void Room::removeItem(Item i) {
    for (int j = 0; j < items.size();) {
        if (items.at(j).getName() == i.getName()) {
            items.erase(j);
            j=items.size();
        }
        j++;
    }
}

string Room::get() {
    string temp;
    //READ OUT ITEMS IN ROOM
    if (items.size() > 0) {
        temp = " There is a ";
        for (int j = 0; j < items.size(); j++) {
            string itemName = items.at(j).getName();
            if (itemName[0] == 'a' || itemName[0] == 'e' || itemName[0] == 'i' || itemName[0] == 'o' || itemName[0] == 'u' ) {
                temp+="an ";
            }else {
                temp+="a ";
            }
            temp += items.at(j).getName();
            if (j<npcs.size()-1) {
                temp += ", ";
            }else {
                temp+=", and ";
            }
        }
        temp+=".";
    }  else{
        temp = " There are no items in the room.";
    }
    //READ OUT NPC IN ROOM
    if (npcs.size() > 0) {
        temp = " There is ";
        for (int j = 0; j < npcs.size(); j++) {
            string npcName = npcs.at(j).getName();
            if (npcName[0] == 'A' || npcName[0] == 'E' || npcName[0] == 'I' || npcName[0] == 'O' || npcName[0] == 'U' ) {
                temp+="an ";
            }else {
                temp+="a ";
            }
            temp += npcs.at(j).getName();
            if (j<npcs.size()-1) {
                temp += ", ";
            }else {
                temp+=", and ";
            }
        }
        temp+=".";
    }
    else{
        temp = " There aren't any people in the room.";
    }
    //READ OUT PATHS IN ROOM
    if (paths.size() > 0) {
        temp = " There is ";
        for (int j = 0; j < paths.size(); j++) {
            string pathName = paths.at(j);
            if (pathName[0] == 'A' || pathName[0] == 'E' || pathName[0] == 'I' || pathName[0] == 'O' || pathName[0] == 'U' ) {
                temp+="an ";
            }else {
                temp+="a ";
            }
            temp += paths.at(j);
            if (j<paths.size()-1) {
                temp += ", ";
            }else {
                temp+=", and ";
            }
        }
        temp+=".";
    }
    else{
        temp = " There are no paths in the room.";
    }
    return temp;
}

//??

