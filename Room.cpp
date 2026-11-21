//
// Created by shayl on 11/21/2026.
//
#include "Room.h"
// CONSTRUCTORS
Room::Room(string name, string description, vector<string> paths, vector<Item> items, int encounterChance) {
    this->name = name;
    this->description = description;
    this->paths = paths;
    this->items = items;
    this->encounterChance = encounterChance;
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
//vector<NPC> Room::getNPCS() const;
int Room::getEncounterChance() const {
    return this->encounterChance;
}
//vector<Enemy> getEncounterPool() const;

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
//void Room::setNPCs(vector<NPC> npcs);
void Room::setEncounterChance(int encounterChance) {
    this->encounterChance = encounterChance;
}
//void Room::setEnemies(vector<Enemy> encounterPool);
