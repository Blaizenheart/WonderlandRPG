//
// Created by shayl on 11/21/2026.
//

#include "Enemy.h"
#include "Item.h"
#include "NPC.h"
#include "Room.h"
#include <string>

using namespace std;

class MapHandler {
    private:
        struct roomData {
            string name; // basically the ID
            string description;
            vector<string> paths;
            vector<Item> items;
            vector<NPC> npcs;
            int encounterChance;
            vector<Enemy> encounterPool;
        };
        vector<roomData> roomDataVec = vector<roomData>();
    public:
        void setLocation(Room* location, string name);
        void saveRoomData(Room* location) {
            // check if previously saved
            bool roomSaved = false;
            int saveIndex = -1;
            for (int i = 0; i < roomDataVec.size(); i++) {
                if (roomDataVec[i].name == name) { // room was previously saved into the vector
                    roomSaved = true;
                    saveIndex = i;
                    break;
                }
            }
            if (roomSaved) { // overwrite vector values with current
                roomDataVec.at(saveIndex).name = location->getName();
                roomDataVec.at(saveIndex).description = getDescription();
                roomDataVec.at(saveIndex).paths = getPaths();
                roomDataVec.at(saveIndex).items = getItems();
                roomDataVec.at(saveIndex).npcs = getNPCs();
                roomDataVec.at(saveIndex).encounterChance = getEncounterChance();
                roomDataVec.at(saveIndex).encounterPool = getEncounterPool();
            } else {
                roomDataVec.push_back({location->getName(), location->getDescription(), location->getPaths(),
                location->getItems(), location->getNPCS(), location->getEncounterChance(), location->getEncounterPool()});
            }
        }

        void move(Room*& location, string name) {
            delete location;
            location = nullptr;
            bool roomSaved = false;
            int saveIndex = -1;
            for (int i = 0; i < roomDataVec.size(); i++) {
                if (roomDataVec.at(i).name == name) { // room was previously saved into the vector
                    roomSaved = true;
                    saveIndex = i;
                    break;
                }
            }
            if (roomSaved) {
                // create a new room based on the saved parameters
                location = new Room(roomDataVec.at(saveIndex).name, roomDataVec.at(saveIndex).description, roomDataVec.at(saveIndex).paths,
                    roomDataVec.at(saveIndex).items, roomDataVec.at(saveIndex).npcs, roomDataVec.at(saveIndex).encounterChance, roomDataVec.at(saveIndex).encounterPool);
            } else { // create the original instance of the room
                // location = new RoomFactory.create(string name);
            }
        }
};