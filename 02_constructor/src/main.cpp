#include <iostream>
#include <string>

// kelas dengan nama Mahasiswa dengan atribut berupa nama, jurusan, nim
class Mahasiswa{

    // kelas public (bisa diakses kelas diluarnya)
    public:
        std::string nama;           //atribut
        std::string jurusan;        //atribut
        int nim;                    //atribut
        double ipk;                 //atribut

        // constructor dengan parameter
        Mahasiswa(std::string inputNama, std::string inputJurusan, int inputNIM, double inputIPK){

            // awali dengan namespace kemudian parameter
            Mahasiswa::nama    = inputNama;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::nim     = inputNIM;
            Mahasiswa::ipk     = inputIPK;

            // bisa digunakan seperti ini untuk print di terminal
            std::cout <<  "\nNama    : " << Mahasiswa::nama << std::endl;
            std::cout <<  "Jurusan : " << Mahasiswa::jurusan << std::endl;
            std::cout <<  "NIM     : " << Mahasiswa::nim << std::endl;
            std::cout <<  "IPK     : " << Mahasiswa::ipk << std::endl;
        }
};

int main(){ 

    std::cout << "Data Mahasiswa lulus 2025" << std::endl;

    // kelas Mahasiswa dengan object mahasiswa1
    Mahasiswa mahasiswa1 = Mahasiswa("Waluyo", "TKR", 123, 3.34);
    
    // kelas Mahasiswa dengan object mahasiswa2
    Mahasiswa mahasiswa2 = Mahasiswa("Yono", "TKJ", 321, 3.68);

    return 0;
}
