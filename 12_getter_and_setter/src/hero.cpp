#include <iostream>
#include <string>

#include "../inc/hero.hpp"

// constructor
Hero::Hero(const char* name){
    this->name = name;
    this->attackPower = 100;
    this->level = 1;
    this->exp = 0;
}

// getter atribute name
std::string Hero::getName(){
    return this->name;
}

// setter atribut attack & level by exp
void Hero::addExp(int expValue){
    int maxExp = 100;
    std::cout << "Mendapatkan exp : " << expValue << std::endl; 
    this->exp += expValue;
        if(this->exp >= maxExp){
            this->level++;
            this->attackPower += 100;
            std::cout << "LEVEL UP!!!" << std::endl;
            this->exp = 0;
        }
}

// show to the terminal
void Hero::showDisplay(){
    std::cout << "Name    : " << this->name << std::endl;
    std::cout << "Attack  : " << this->attackPower << std::endl;
    std::cout << "Level   : " << this->level << std::endl;
    std::cout << "Exp     : " << this->exp << std::endl << std::endl;
}