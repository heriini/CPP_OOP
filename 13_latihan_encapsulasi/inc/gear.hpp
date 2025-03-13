#ifndef __GEAR
#define __GEAR

#include <iostream>
#include <string>

class Gear{
    private:
        std::string name;
        double power;

    public:
        Gear(const char* name, double power);
        std::string getName();
        double getPower();

};

#endif