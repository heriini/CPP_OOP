#include <iostream>
#include <string>

class Player{
    public:
        std::string nama;

        //Construtor
        Player(const char* nama){
            Player::nama = nama;
            std::cout << "player " << Player::nama << " dibuat" << std::endl;
        }

        //Destructor
        ~Player(){
            std::cout << "player " << Player::nama << " dihapus" << std::endl;
        }
};

void membuatPlayerStack(){
    Player stackPlayer = Player("stack ");
}

void membuatPlayerHeap(){
    Player* heapPlayer = new Player("heap");
    delete heapPlayer;
}


int main(){ 

    membuatPlayerStack();
    membuatPlayerHeap();
    
    return 0;
}

