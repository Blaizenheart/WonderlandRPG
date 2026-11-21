//
// Created by shayl on 11/21/2026.
//

#ifndef WONDERLANDRPG_STATUS_H
#define WONDERLANDRPG_STATUS_H
#include <string>
using namespace std;
class Status {
    private:
        string name;
        int duration;
    public:
        Status();
        Status(string name, string duration);
        string getName() const;
        int getDuration() const;
        void setName(string name);
        void setDuration(int duration);
};
#endif //WONDERLANDRPG_STATUS_H
