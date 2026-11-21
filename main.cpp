#include <iostream>
#include "Room.h"
using namespace std;

enum Mode {STORY, ENDLESS};
enum State {EXPLORATION, COMBAT, DIALOGUE};

static int input = 0;
static bool validInput = false;
static Mode gameMode = STORY;
static State gameState = EXPLORATION;
static Room* location = nullptr;

static void explorationMode();
static void combatMode();
static void dialogueMode();

int main() {
    // VARIABLES
    bool playing = true;

    // prompt user for the gamemode
    cout << "WELCOME!" << endl;
    cout << "Wonderland is a text-based RPG that relies on numerical inputs to navigate the world." << endl;
    cout << "Would you like to play in Story or Endless mode?" << endl;
    cout << "1) Story Mode" << endl;
    cout << "2) Endless Mode" << endl << endl;

    // input validation
    while (!validInput) {
        cin >> input;
        switch (input) {
            case 1:
                cout << "Starting story mode..." << endl;
                gameMode = STORY;
                validInput = true;
                break;
            case 2:
                cout << "Starting endless mode..." << endl;
                gameMode = ENDLESS;
                validInput = true;
                break;
            default:
                cout << "Invalid input." << endl;
                break;
        }
    }

    validInput = false; // reset flag

    while (playing){
        if (gameState == EXPLORATION) {
            explorationMode();
        } else if (gameState == COMBAT) {
            combatMode();
        } else { // DIALOGUE
            dialogueMode();
        }
    }
    return 0;
}

static void explorationMode() {
    while (gameState == EXPLORATION) {
        system("CLS"); // clears the console
        // 1) Print description of current Room

        // 2) Print description of the objects/NPCs/paths

        // 3) Prompt user for input
        cout << "What would you like to do?:" << endl;
        cout << "1) Inspect" << endl;
        cout << "2) Move" << endl;
        // input validation
        while (!validInput) {
            cin >> input;
            switch (input) {
                case 1:
                    cout << "What would you like to inspect?" << endl;
                    // ADD CODE
                    // location has: items, npcs, paths
                    break;
                case 2:
                    cout << "Where would you like to move?" << endl;
                    // ADD CODE
                    // if location.getRoom()
                    // calls the MapHandler
                    // cout << MapHandler.move(location, direction);
                    break;
                default:
                    cout << "Invalid input." << endl;
                    break;
            }
        }

    }
}
void combatMode() {
    while (gameState == COMBAT) {
        cout << "cojgh";
    }
}
void dialogueMode() {
    while (gameState == DIALOGUE) {
        cout << "disafg";
    }
}