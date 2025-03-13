#include <iostream>
#include <string>

#include "../inc/gear.hpp"

Gear::Gear(const char* name, double power){
    this->name = name;
    this->power = power;
}


// getter
std::string Gear::getName(){
    return this->name;
}

// getter
double Gear::getPower(){
    return this->power;
}