#include <iostream>
#include <string>
#include "../inc/player.hpp"


// constructor
Player::Player(const char* name){
    this->name = name;
}

// show data
void Player::display(){
    std::cout << "Nama player : " << this->name << std::endl;
}

// getname
std::string Player::getName(){
    return this->name;
}

// setname
void Player::setName(const char* name){
    this->name = name;
}