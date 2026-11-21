//
// Created by shayl on 11/21/2026.
//
#include "NPC.h"
// CONSTRUCTORS
NPC::NPC() {
    this->name = "NO NAME";
    this->description = "NO DESCRIPTION";
    this->dialogueIndex = -1;
    this->dialogueSize = -1;
    this->dialogue = vector<string>();
    this->dialogueDone = false;
}
NPC::NPC(string name, string description, int dialogueIndex, int dialogueSize, vector<string> dialogue, bool dialogueDone) {
    this->name = name;
    this->description = description;
    this->dialogueIndex = dialogueIndex;
    this->dialogueSize = dialogueSize;
    this->dialogue = dialogue;
    this->dialogueDone = dialogueDone;
}

// GETTERS
string NPC::getName() const {
    return this->name;
}
string NPC::getDescription() const {
    return this->description;
}
int NPC::getDialogueIndex() const {
    return this->dialogueIndex;
}
int NPC::getDialogueSize() const {
    return this->dialogueSize;
}
vector<string> NPC::getDialogue() const {
    return this->dialogue;
}
bool NPC::getDialogueDone() const {
    return this->dialogueDone;
}

// SETTERS
void NPC::setName(string name) {
    this->name = name;
}
void NPC::setDescription(string description) {
    this->description = description;
}
void NPC::setDialogueIndex(int index) {
    this->dialogueIndex = index;
}
void NPC::setDialogueSize(int size) {
    this->dialogueSize = size;
}
void NPC::setDialogueDone(bool done) {
    this->dialogueDone = done;
}

string nextDialogue() { // should be called from the main function to print dialogue
    string temp = dialogue.at(dialogueIndex);
    dialogueIndex++;
    if (dialogueIndex > dialogueSize - 1) {
        dialogueIndex = 0;
        dialogueDone = true;
    }
}

bool isDone() {
    bool result = dialogueDone;
    if (dialogueDone == true) {
        dialogueDone = false;
    }
    return result;
}