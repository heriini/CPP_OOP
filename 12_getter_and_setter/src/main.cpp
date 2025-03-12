#include <iostream>
#include <string>

#include "../inc/hero.hpp"
    
int main(){

    Hero* hero1 = new Hero("Gatot Kaca");
    hero1->showDisplay();

    Hero* hero2 = new Hero("Gundala");
    

    // std::cout << hero1->getName() << std::endl;  // penggunaan getter

    // Kegiatan bertarung
    std::cout << "Bertarung" << std::endl << std::endl;

    // penggunaan setter
    hero1->addExp(25);  
    hero1->showDisplay();
    hero1->addExp(35);
    hero1->showDisplay();
    hero1->addExp(25);
    hero1->showDisplay();
    hero1->addExp(15);
    hero1->showDisplay();

    // Kegiatan bertarung
    std::cout << "Bertarung" << std::endl << std::endl;

    // penggunaan setter
    hero1->addExp(15);  
    hero1->showDisplay();
    hero1->addExp(35);
    hero1->showDisplay();
    hero1->addExp(25);
    hero1->showDisplay();
    hero1->addExp(40);
    hero1->showDisplay();

    return 0;
}
    



