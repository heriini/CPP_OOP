#include <iostream>
#include <string>

#include "../inc/mahasiswa.hpp"
    

int main(){

    Mahasiswa* mahasiswa1 = new Mahasiswa("Suwardi");
    mahasiswa1->showDisplay();
    delete mahasiswa1;
    
    Mahasiswa* mahasiswa2 = new Mahasiswa("John");
    mahasiswa2->showDisplay();
    delete mahasiswa2;

    Mahasiswa* mahasiswa3 = new Mahasiswa("Rozak");
    mahasiswa3->showDisplay();
    delete mahasiswa3;
    
    return 0;
}
    



