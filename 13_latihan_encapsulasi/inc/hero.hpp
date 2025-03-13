#ifndef __HERO
#define __HERO

#include <string>

#include "gear.hpp"

class Hero{
    private:
        std::string name;
        double health;
        Gear* gear;

    
    public:
        Hero(const char* name);
        void display();
        void attack(Hero* hero);

        std::string getName();
        void useGear(Gear* gear);
        void defence(double damage);
};

#endif