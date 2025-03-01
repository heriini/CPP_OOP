#include <iostream>
#include <string>

// kelas Mahasiswa
class Mahasiswa{
    public:
        // atribute
        std::string nama;
        std::string jurusan;
        int nim;
        double ipk;

        // construction dengan parameter
        Mahasiswa(std::string inputNama, std::string inputJurusan, int inputNIM, double inputIPK){
            Mahasiswa::nama = inputNama;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::nim = inputNIM;
            Mahasiswa::ipk = inputIPK;
        }

        // method tanpa pamareter & tanpa return
        void printData(){
            std::cout << "\nNama    : " << nama << std::endl;
            std::cout << "Jurusan : " << jurusan << std::endl;
            std::cout << "NIM     : " << nim << std::endl;
            std::cout << "IPK     : " << ipk << std::endl;
        }

        // method dengan paramater & tanpa return
        void chageName(const char* namaBaru){
            Mahasiswa::nama = namaBaru;
        }

        // method tanpa parameter & dengan return
        std::string getName(){
            return Mahasiswa::nama;
        }

        double getIPK(){
            return Mahasiswa::ipk;
        }

        // method dengan parameter & dengan return
        double bonus(const double &tambahNilai){
            return Mahasiswa::ipk + tambahNilai;
        }
        
};


int main()
{   
    // object mahasiswa-n dengan atribute dari kelas Mahasiswa
    Mahasiswa mahasiswa1 = Mahasiswa("Yunanda", "TPMI", 234, 3.42);
    Mahasiswa mahasiswa2 = Mahasiswa("Indri", "JB", 432, 4.0);

    
    // fungsi printData dari object mahasiswa-n
    mahasiswa1.printData();
    mahasiswa2.printData();
    
    // fungsi ubah nama dari object mahasiswa-n
    mahasiswa1.chageName("Yunandi");
    
    std::cout << "\nData Nama : " << mahasiswa1.getName() << std::endl;
    std::cout << "Data IPK  : " << mahasiswa1.getIPK() << std::endl;
    std::cout << "Nilai Akhir  : " << mahasiswa1.bonus(0.5) << std::endl;

    mahasiswa1.printData();
    mahasiswa2.printData();

    



    return 0;
}
