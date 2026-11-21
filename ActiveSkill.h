//
// Created by Aubrey on 11/21/26.
//

#ifndef WONDERLANDRPG_ACTIVESKILL_H
#define WONDERLANDRPG_ACTIVESKILL_H
#include "Skill.h"

class ActiveSkill : public Skill {
private:
    int damage;
public:
    ActiveSkill(string name, string description, int damage);
    int getDamage();
    void setDamage(int damage);
};

#endif //WONDERLANDRPG_ACTIVESKILL_H
