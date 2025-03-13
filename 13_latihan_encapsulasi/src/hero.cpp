#include <iostream>
#include <string>

#include "../inc/hero.hpp"
#include "../inc/gear.hpp"

Hero::Hero(const char* name){
    this->name = name;
    this->health = 100;
}

void Hero::display(){
    std::cout << "Hero    : " << this->name << std::endl;
    std::cout << "Health  : " << this->health << std::endl;
    std::cout << "Gear    : " << this->gear->getName() << std::endl;
    std::cout << "Power   : " << this->gear->getPower() << std::endl;
}

void Hero::attack(Hero* hero){
    if(this->health <= 0){
        std::cout << this->name << " is eleminated " << std::endl;
        std::cout << this->name << " cannot attack " << std::endl;
    }else{
        std::cout << std::endl << this->name << " attacked " << hero->getName() << std::endl;
        hero->defence(this->gear->getPower());
    }
}

// getter
std::string Hero::getName(){
    return this->name;
}

// setter
void Hero::useGear(Gear* gear){
    this->gear = gear;
}

void Hero::defence(double damage){
    this->health -= damage;
    std::cout << this->name << " received damage : " << damage << std::endl;

    if(this->health <= 0){
        std::cout << this->name << " eleminated." << std::endl;
    }
}