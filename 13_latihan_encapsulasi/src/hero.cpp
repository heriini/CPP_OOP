#include <iostream>
#include <string>

#include "../inc/hero.hpp"

Hero::Hero(const char* name){
    this->name = name;
    this->level = level;
    this->exp = exp;
}

void Hero::display(){
    std::cout << "Hero   : " << this->name << std::endl;
    std::cout << "Level  : " << this->level << std::endl;
    std::cout << "Exp    : " << this->exp << std::endl;
}