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
            if (name == "W1RM-1" || location == nullptr) {
                tempRoom = new Room(name, "A gentle warmth caresses Alice's face. Slowly... her eyes open up to see... a familiar place./n The grass is a pleasant green, a sky somewhere between a deep blue and plum, and trees surround her, enveloping Alice in a shady embrace.", {"forward"},{},{},10,{});
            } else if (name == "W1RM-2") {
                tempRoom = new Room(name, "Passing through what seems to be a path, Alice sees an old friend.../n however, they certainly saw her before she saw them.", {"forward", "back"},{},{},10,{});
            } else if (name == "W1RM-3") {
                tempRoom = new Room(name, "The cat leads Alice through an underbrush, coming out to another clearing...", {"right","left", "back"},{},{},10,{});
            } else if (name == "W1RM-3-1") {
                tempRoom = new Room(name, "Alice walks through the branches, with a glimmer on the floor catching her eye...", {"back"},{},{},10,{});
            } else if (name == "W1RM-4") {
                tempRoom = new Room(name, "The brings Alice to a small spot of the forest, creatures nearby but.../n they didn't seem pleased to be there...", {"forward", "back"},{},{},10,{});
            } else if (name == "W1RM-5") {
                tempRoom = new Room(name, "Alice follows the cat, where they scurry up a tree.../n only for them to reappear over Alice's shoulder...", {"forward", "back"},{},{},10,{});
            } else if (name == "W1RM-6") {
                tempRoom = new Room(name, "Alice hops along her way, nimbly evading the spare branches that hang too low for one's good.../n eventually reaching another clearing, but... a bit more drab than the others...", {"forward","back"},{},{},10,{});
            } else if (name == "W1RM-7") {
                tempRoom = new Room(name, "Unexpectedly", {"forward"},{},{},10,{});
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