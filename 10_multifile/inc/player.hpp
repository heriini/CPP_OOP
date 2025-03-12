#ifndef _PLAYER_HPP
#define _PLAYER_HPP

#include <string>

class Player{
    public:
        std::string name;
        
        // Constructor
        Player(const char*);        //dalam bentuk prototype
        void display();             //dalam bentuk prototype
        std::string getName();
        void setName(const char*);
        
};

#endif