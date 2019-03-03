//
// Created by Ted Pochmara on 2019-03-02.
//
#include<string>

#ifndef OPENHARDWARE_HARDWARE_HPP
#define OPENHARDWARE_HARDWARE_HPP


class Hardware {
public:
    Hardware(std::string hwName);
    std::string getHWName() const;
    bool available() const;
    void setInUse();
    void setFree();

private:
    std::string hwName;
    bool inUse;
};


#endif //OPENHARDWARE_HARDWARE_HPP
