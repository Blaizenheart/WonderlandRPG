//
// Created by Aubrey on 11/21/26.
//

#ifndef WONDERLANDRPG_ENEMY_H
#define WONDERLANDRPG_ENEMY_H
#include "Entity.h"
#include <string>

using namespace std;

class Enemy : public Entity{
    private:
    double successChance;
    string speak;

public:
    Enemy(string name, string description, string suit, int rank, int color, int currHP, int maxHP, int critChance, int critBoost, bool alive, double successChance, string speak);
    double getSuccessChance();
    void setSuccessChance(double sc);
    string getSpeak();
    void setSpeak(string sp);


};


#endif //WONDERLANDRPG_ENEMY_H
