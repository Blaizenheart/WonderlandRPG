//
// Created by shayl on 11/21/2026.
//
#include <string>
#include "Room.h"
using namespace std;
static class RoomFactory {
    public:
        Room create(string name) { //(name, description, paths, item, npcs, encounter chance, encounterpool)
            // CREATE THE DEFAULT ROOM CORRESPONDING TO THE NAME
            if (name == "W1RM-1") {
                return Room();
            } else if (name == "W1RM-2") {
                return Room();
            } else if (name == "W1RM-3") {
                return Room();
            } else if (name == "W1RM-3-1") {
                return Room();
            } else if (name == "W1RM-4") {
                return Room();
            } else if (name == "W1RM-5") {
                return Room();
            } else if (name == "W1RM-6") {
                return Room();
            } else if (name == "W1RM-7") {
                return Room();
            } else if (name == "W1RM-7-2") {
                return Room();
            } else if (name == "W1RM-8") {
                return Room();
            } else if (name == "W1RM-8-3") {
                return Room();
            } else if (name == "W1RM-9") {
                return Room();
            } else if (name == "W1RM-10") {
                return Room();
            } else if (name == "W1RM-11") {
                return Room();
            } else if (name == "W2RM-1") {
                return Room();
            }
        }
};