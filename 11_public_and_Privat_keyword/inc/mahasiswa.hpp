#ifndef __MAHASISWA
#define __MAHASISWA

#include <iostream>
#include <string>

class Mahasiswa{
    // class untuk atribut
    public: // dapat diakses oleh siapapun
        std::string namePublic;
    
    private:  // hanya dapat diakses oleh kelas itu sendiri
        std::string namePrivate;

    // method dan constructor
    public:
        // constructor selalu public
        Mahasiswa(const char* name);
        void showDisplay(); // dapat diakses karena method ada didalam kelas Mahasiswa

};

#endif