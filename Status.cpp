//
// Created by shayl on 11/21/2026.
//
#include "Status.h"

// CONSTRUCTORS
Status::Status() {
    this->name = "NO NAME";
    this->duration = -1;
}
Status::Status(string name, string duration) {
    this->name = name;
    this->duration = duration;
}

// GETTERS
string Status::getName() const {
    return name;
}
int Status::getDuration() const {
    return duration;
}

// SETTERS
void Status::setName(string name) {
    this->name = name;
}
void Status::setDuration(int duration) {
    this->duration = duration;
}