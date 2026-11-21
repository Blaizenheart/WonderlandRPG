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
