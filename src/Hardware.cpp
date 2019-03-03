//
// Created by Ted Pochmara on 2019-03-02.
//
#include<string>
#include "Hardware.hpp"

Hardware::Hardware(std::string hwName): hwName(hwName), inUse(false) {}

std::string Hardware::getHWName() const{
    return hwName;
}

bool Hardware::available() const { return inUse; }

void Hardware::setInUse() {
    inUse = true;
}

void Hardware::setFree() {
    inUse = false;
}
