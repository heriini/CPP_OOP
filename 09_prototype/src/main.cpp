#include <iostream>
#include <string>

// Deklarasi class
class Player{
    public:
        std::string name;
        
        // Constructor
        Player(const char*);        //dalam bentuk prototype
        void display();             //dalam bentuk prototype
        std::string getName();
        void setName(const char*);
        
    };
    
    int main(){
        
        Player* playerObject = new Player("Yono");
        playerObject->display();

        std::cout << "Get Name : " << playerObject->getName() << std::endl;

        std::cout << "\nUbah Nama" << std::endl;
        playerObject->setName("Yuda");
        playerObject->display();

        return 0;
    }
    
// Penjabaran method


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
