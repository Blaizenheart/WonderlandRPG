//
// Created by shayl on 11/21/2026.
//
#include <string>
#include "Room.h"

using namespace std;

class RoomFactory {
    public:
        static void create(Room*& location, string name) { //(name, description, paths, item, npcs, encounter chance, encounterpool)
            // CREATE THE DEFAULT ROOM CORRESPONDING TO  NAME
            Room* tempRoom = nullptr;
            if (name == "W1RM-1") {
                tempRoom = new Room(name, "The grass is a pleasant green.", {"forward"},{},{},10,{});
            } else if (name == "W1RM-2") {
                tempRoom = new Room();
            } else if (name == "W1RM-3") {
                tempRoom = new Room();
            } else if (name == "W1RM-3-1") {
                tempRoom = new Room();
            } else if (name == "W1RM-4") {
                tempRoom = new Room();
            } else if (name == "W1RM-5") {
                tempRoom = new Room();
            } else if (name == "W1RM-6") {
                tempRoom = new Room();
            } else if (name == "W1RM-7") {
                tempRoom = new Room();
            } else if (name == "W1RM-7-2") {
                tempRoom = new Room();
            } else if (name == "W1RM-8") {
                tempRoom = new Room();
            } else if (name == "W1RM-8-3") {
                tempRoom = new Room();
            } else if (name == "W1RM-9") {
                tempRoom = new Room();
            } else if (name == "W1RM-10") {
                tempRoom = new Room();
            } else if (name == "W1RM-11") {
                tempRoom = new Room();
            } else if (name == "W2RM-1") {
                tempRoom = new Room();
            }
            location = tempRoom;
        }
};