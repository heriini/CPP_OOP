#include <iostream>
#include <string>

#include "../inc/mahasiswa.hpp"
    

int main(){

    Mahasiswa* mahasiswa1 = new Mahasiswa("Suwardi");
    std::cout << "Nama mahasiswa : " << mahasiswa1->namePublic << std::endl;
    
    Mahasiswa* mahasiswa2 = new Mahasiswa("John");
    mahasiswa2->showDisplay();

    Mahasiswa* mahasiswa3 = new Mahasiswa("Rozak");
    mahasiswa3->showDisplay();

    return 0;
}
    



