//
// Created by shayl on 11/21/2026.
//

#include "Enemy.h"
#include "Item.h"
#include "NPC.h"
#include "Room.h"
#include "RoomFactory.cpp"
#include <string>

using namespace std;
static RoomFactory roomFactory;

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
        void move(Room*& location, string direction) {
            saveRoomData(location);
            loadRoomData(location, getNextRoom(location, direction));
        }

        void move(Room* location) {
            // moves directly there
            roomFactory.create(location, "");
        }

        void saveRoomData(Room* location) {
            // check if previously saved
            bool roomSaved = false;
            int saveIndex = -1;
            for (int i = 0; i < roomDataVec.size(); i++) {
                if (roomDataVec.at(i).name == location->getName()) { // room was previously saved into the vector
                    roomSaved = true;
                    saveIndex = i;
                    break;
                }
            }
            if (roomSaved) { // overwrite vector values with current
                roomDataVec.at(saveIndex).name = location->getName();
                roomDataVec.at(saveIndex).description = location->getDescription();
                roomDataVec.at(saveIndex).paths = location->getPaths();
                roomDataVec.at(saveIndex).items = location->getItems();
                roomDataVec.at(saveIndex).npcs = location->getNPCS();
                roomDataVec.at(saveIndex).encounterChance = location->getEncounterChance();
                roomDataVec.at(saveIndex).encounterPool = location->getEncounterPool();
            } else {
                roomDataVec.push_back({location->getName(), location->getDescription(), location->getPaths(),
                location->getItems(), location->getNPCS(), location->getEncounterChance(), location->getEncounterPool()});
            }
        }

        void loadRoomData(Room*& location, string name) {
            delete location;
            location = nullptr;
            bool roomSaved = false;
            int saveIndex = -1;
            for (int i = 0; i < roomDataVec.size(); i++) {
                if (roomDataVec.at(i).name == name) { // NEXT room was previously saved into the vector?
                    roomSaved = true;
                    saveIndex = i;
                    break;
                }
            }
            if (roomSaved) {
                // Create a new room based on the saved parameters
                location = new Room(roomDataVec.at(saveIndex).name, roomDataVec.at(saveIndex).description, roomDataVec.at(saveIndex).paths,
                    roomDataVec.at(saveIndex).items, roomDataVec.at(saveIndex).npcs, roomDataVec.at(saveIndex).encounterChance, roomDataVec.at(saveIndex).encounterPool);
            } else {
                roomFactory.create(location, name);
            }
        }

        string getNextRoom(Room* location, string direction) {
            if (location->getName() == "W1RM-1") {
                return "W1RM-2";
            } else if (location->getName() == "W1RM-2") {
                if (direction == "back") {
                    return "W1RM-1";
                } else {
                    return "W1RM-3";
                }
            } else if (location->getName() == "W1RM-3") {
                if (direction == "back") {
                    return "W1RM-2";
                } else if (direction == "left") {
                    return "W1RM-3-1";
                }
                else { // right
                    return "W1RM-4";
                }
            } else if (location->getName() == "W1RM-3-1") {
                return "W1RM-3";
            } else if (location->getName() == "W1RM-4") {
                if (direction == "back") {
                    return "W1RM-3";
                } else {
                    return "W1RM-5";
                }
            } else if (location->getName() == "W1RM-5") {
                if (direction == "back") {
                    return "W1RM-4";
                } else {
                    return "W1RM-6";
                }
            } else if (location->getName() == "W1RM-6") {
                if (direction == "back") {
                    return "W1RM-5";
                } else {
                    return "W1RM-7";
                }
            } else if (location->getName() == "W1RM-7") {
                if (direction == "back") {
                    return "W1RM-6";
                } else if (direction == "forward") {
                    return "W1RM-8";
                }
                else { // right
                    return "W1RM-7-2";
                }
            } else if (location->getName() == "W1RM-7-2") {
                return "W1RM-7";
            } else if (location->getName() == "W1RM-8") {
                if (direction == "back") {
                    return "W1RM-7";
                } else if (direction == "forward") {
                    return "W1RM-9";
                }
                else { // right
                    return "W1RM-8-3";
                }
            } else if (location->getName() == "W1RM-8-3") {
                return "W1RM-7";
            } else if (location->getName() == "W1RM-9") {
                if (direction == "back") {
                    return "W1RM-8";
                } else {
                    return "W1RM-10";
                }
            } else if (location->getName() == "W1RM-10") {
                if (direction == "back") {
                    return "W1RM-9";
                } else {
                    return "W1RM-11";
                }
            } else if (location->getName() == "W1RM-11") {
                if (direction == "back") {
                    return "W1RM-10";
                } else {
                    return "W2RM-1"; // NEXT WORLD
                }
            } else { // NO MATCH
                return "INVALID LOCATION/DIRECTION";
            }
        }
};