//
// Created by Aubrey on 11/21/26.
//

#ifndef WONDERLANDRPG_SKILL_H
#define WONDERLANDRPG_SKILL_H
#include <string>
using namespace std;

class Skill {
protected:
    string name;
    string description;
public:
    Skill(string name, string description);
    string getName();
    string getDescription();
    void setName(string name);
    void setDescription(string description);
};

#endif //WONDERLANDRPG_SKILL_H
