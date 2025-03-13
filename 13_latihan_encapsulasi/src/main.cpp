#include <iostream>
#include <string>

#include "../inc/hero.hpp"
#include "../inc/gear.hpp"
    
int main(){

    Hero* hero1 = new Hero("Sangkuriang");
    Gear* gear1 = new Gear("Cambuk", 50);

    hero1->Hero::display();
    gear1->Gear::display();
    
    return 0;
}
    



