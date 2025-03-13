#ifndef __GEAR
#define __GEAR

#include <iostream>
#include <string>

class Gear{
    private:
        std::string name;
        double attack;

    public:
        Gear(const char* name, double attack);
        void display();

};

#endif