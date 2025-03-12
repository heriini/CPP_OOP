#include <iostream>
#include "../inc/mahasiswa.hpp"

Mahasiswa::Mahasiswa(const char* name){
    this->namePublic = name;
    this->namePrivate = name;
}

void Mahasiswa::showDisplay(){
    std::cout << "Nama mahasiswa : " << this->namePrivate << std::endl;    
}