#include <iostream>
#include <string>

// kelas dengan nama Mahasiswa dengan atribut berupa nama, jurusan, nim
class Mahasiswa{
    public:
        std::string nama;
        std::string jurusan;
        int nim;
        double ipk;
};

int main(){ 

    // kelas Mahasiswa dengan object mahasiswa1
    Mahasiswa mahasiswa1;
    mahasiswa1.nama = "Waluyo";
    mahasiswa1.jurusan = "Teknik Kendaraan Ringan";
    mahasiswa1.nim = 123;
    mahasiswa1.ipk = 3.34;

    // kelas Mahasiswa dengan object mahasiswa2
    Mahasiswa mahasiswa2;
    mahasiswa2.nama = "Yono";
    mahasiswa2.jurusan = "Teknik Komputer Jaringan";
    mahasiswa2.nim = 321;
    mahasiswa2.ipk = 3.68;

    std::cout << "Data Mahasiswa lulus 2025" << std::endl;

    std::cout <<  "\nNama    : " << mahasiswa1.nama << std::endl;
    std::cout <<  "Jurusan : " << mahasiswa1.jurusan << std::endl;
    std::cout <<  "NIM     : " << mahasiswa1.nim << std::endl;
    std::cout <<  "IPK     : " << mahasiswa1.ipk << std::endl;
    
    std::cout <<  "\nNama    : " << mahasiswa2.nama << std::endl;
    std::cout <<  "Jurusan : " << mahasiswa2.jurusan << std::endl;
    std::cout <<  "NIM     : " << mahasiswa2.nim << std::endl;
    std::cout <<  "IPK     : " << mahasiswa2.ipk << std::endl;
    return 0;
}
