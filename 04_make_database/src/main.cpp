#include <iostream>
#include <string>
#include <fstream>

class Mahasiswa{

    public:
        std::string nama;
        std::string nim;
        std::string jurusan;

        // constructor dengan parameter
        Mahasiswa(std::string nama, std::string nim, std::string jurusan){
            Mahasiswa::nama = nama;
            Mahasiswa::nim = nim;
            Mahasiswa::jurusan = jurusan;
        }

        std::string getString(){
            return "\n" + nama + " " + nim + " " + jurusan;
        }
};
    
class DB{

    public:
        std::ifstream in;
        std::ofstream out;
        std::string fileName; 
        
        // constructor dengan parameter
        DB(const char* fileName){
            DB::fileName = fileName;
        }

        // fungsi / method saveData
        void saveData(Mahasiswa data){
            std::cout << "\nData Input Mahasiswa" << std::endl;
            std::cout << "Nama    : " << data.nama << std::endl;
            std::cout << "NIM     : " << data.nim << std::endl;
            std::cout << "Jurusan : " << data.jurusan << std::endl;

            DB::out.open(DB::fileName, std::ios::app);
            DB::out << data.getString();
            DB::out.close();
        }

        // fungsi / method menampilkan data mahasiswa
        void showAll(){
            DB::in.open(DB::fileName, std::ios::in);
            std::string nama,nim,jurusan;
            int index = 1;

            while(!DB::in.eof()){
                DB::in >> nama;
                DB::in >> nim;
                DB::in >> jurusan;

                std::cout << index++ << ".\t";
                std::cout << nama << "\t"; 
                std::cout << nim << "\t";
                std::cout << jurusan << std::endl;
            }
            
            DB::in.close();
        }

};

int main(){
    
    // membuat database data.txt
    DB database = DB("data.txt");
    
    std::cout << "\nDaftar Mahasiswa Aktif" << std::endl;
    // menampilkan data mahasiswa
    database.showAll();

    // input data
    std::string nama,nim,jurusan;
    std::cout << "\nMasukan Data Mahasiswa" << std::endl;
    std::cout << "Nama    : ";
    std::cin >> nama;
    std::cout << "NIM     : ";
    std::cin >> nim;
    std::cout << "Jurusan : ";
    std::cin >> jurusan;

    // Membuat object
    Mahasiswa mahasiswa1 = Mahasiswa(nama, nim, jurusan);

    // save data mahasiswa ke database
    database.saveData(mahasiswa1);

    return 0;
}
