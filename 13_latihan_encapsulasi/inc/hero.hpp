#ifndef __HERO
#define __HERO

#include <string>

class Hero{
    private:
        std::string name;
        int level;
        int exp;
    
    public:
        Hero(const char* name);
        void display();
};

#endif