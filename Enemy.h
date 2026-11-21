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
    double critChance;
    double successChance;
    string speak;
    public:
    double getCritChance();
    double getSuccessChance();
    void setCritChance(double critChance);
    void setSuccessChance(double successChance);
    string getSpeak();
    void setSpeak(string speak);


};


#endif //WONDERLANDRPG_ENEMY_H
