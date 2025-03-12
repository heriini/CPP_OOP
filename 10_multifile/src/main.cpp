#include <iostream>
#include <string>
#include "../inc/player.hpp"
    
int main(){
        
    Player* playerObject = new Player("Surono");
    playerObject->display();

    std::cout << "Get Name : " << playerObject->getName() << std::endl;

    std::cout << "\nUbah Nama" << std::endl;
    playerObject->setName("Luxo");
    playerObject->display();

    return 0;
}
    



