#include <iostream>
#include <string>

#include "../inc/hero.hpp"
#include "../inc/gear.hpp"
    
int main(){

    Hero* hero1 = new Hero("Sangkuriang");
    Gear* gear1 = new Gear("Cambuk", 50);

    // implementasi setter untuk Hero bisa menggunakan Gear
    hero1->useGear(gear1);
    hero1->display();

    Hero* hero2 = new Hero("Jaka Tarub");
    Gear* gear2 = new Gear("Clurit", 75);

    hero2->useGear(gear2);
    hero2->display();

    hero1->attack(hero2);
    hero2->attack(hero1);
    hero1->display();
    hero2->display();
    hero1->attack(hero2);
    hero2->attack(hero1);
    hero1->display();
    hero2->display();

   
    delete hero1;
    delete hero2;
    delete gear1;
    delete gear2;

    return 0;
}
    



