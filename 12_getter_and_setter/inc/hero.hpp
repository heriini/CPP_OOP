#ifndef __HERO
#define __HERO

#include <string>
#include <iostream>

class Hero{
    // atribut in private
    private:
        std::string name;
        double attackPower;
        int level;
        int exp;
    
    public:
        // method and constructor in public
        Hero(const char* name);
        std::string getName();  // getter (membuat atribut menjadi read only dalam hal ini adalah antribu nama)
        void addExp(int expValue);  // setter digunakan untuk write data ke class
        void showDisplay();

};

#endif