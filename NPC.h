//
// Created by shayl on 11/21/2026.
//

#ifndef WONDERLANDRPG_NPC_H
#define WONDERLANDRPG_NPC_H
#include <string>
#include <vector>
using namespace std;
class NPC {
    private:
        string name;
        string description;
        int dialogueIndex;
        int dialogueSize;
        vector<string> dialogue;
        bool dialogueDone;
    public:
        NPC();
        NPC(string name, string description, int dialogueIndex, int dialogueSize, vector<string> dialogue, bool dialogueDone);
        string getName() const;
        string getDescription() const;
        int getDialogueIndex() const;
        int getDialogueSize() const;
        vector<string> getDialogue() const;
        bool getDialogueDone() const;
        void setName(string name);
        void setDescription(string description);
        void setDialogueIndex(int index);
        void setDialogueSize(int size);
        void setDialogueDone(bool done);
};
#endif //WONDERLANDRPG_NPC_H
