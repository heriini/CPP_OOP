#include <iostream>
#include <string>

#include "../inc/gear.hpp"

Gear::Gear(const char* name, double attack){
    this->name = name;
    this->attack = attack;
}

void Gear::display(){
    std::cout << "Gear   : " << this->name << std::endl;
    std::cout << "Attack : " << this->attack << std::endl;
}

