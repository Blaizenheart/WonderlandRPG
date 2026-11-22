//
// Created by Aubrey on 11/21/26.
//
#ifndef WONDERLANDRPG_ENTITY_H
#define WONDERLANDRPG_ENTITY_H
#include <string>
#include <vector>
#include "Status.h"
using namespace std;
class Entity {
    protected:
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
        vector<Status> statuses;
    public:
        Entity() = default;
        Entity(string name, string description, string suit, int rank, int color, int currHP, int maxHP, int critChance,
            int critBoost, bool alive, vector<Status> statuses);
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
        vector<Status> getStatus();
        void setRank(int rank);
        void setCurrHP(int currHP);
        void setMaxHP(int maxHP);
        void setCritChance(int critChance);
        void setCritBoost(int critBoost);
        void addStatus(Status status);
        //vector<Status> updateStatus();
};
#endif //WONDERLANDRPG_ENTITY_H
