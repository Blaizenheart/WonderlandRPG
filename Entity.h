//
// Created by Aubrey on 11/21/26.
//
#ifndef WONDERLANDRPG_ENTITY_H
#define WONDERLANDRPG_ENTITY_H
#include <string>
using namespace std;
class Entity {
    private:
        string name;
        string description;
        string suit;
        int rank;
        int color;
        int currHP;
        int maxHP;
        int critChance;
        double critBoost;
        bool alive;
    // vector<Status> status;
    public:
        Entity(string name);
        string getName();
        string getDescription();\
        string getSuit();
        int getRank();
        int getColor();
        int getCurrHP();
        int getMaxHP();
        int getCritChance();
        double getCritBoost();
        bool isAlive();
        int setRank();
        int setCurrHP();
        int setMaxHP();
        int setCritChance();
        double setCritBoost();
       /* vector<Status> getStatus();
        vector<Status> addStatus();
        vector<Status> updateStatus();*/
};
#endif //WONDERLANDRPG_ENTITY_H
