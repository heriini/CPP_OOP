#include <iostream>
#include <string>

class ClassType{
    public:
        std::string dataStr;
        double dataDouble;
        double m_dataDouble;

        ClassType(const char* dataStr, double dataDouble){

            //menggunakan namespace dari class
            ClassType::dataStr = dataStr;

            //menggunakan "this"
            this->dataDouble = dataDouble;
        }
};

int main(){

    ClassType* object1 = new ClassType("object 1", 1.8); 
    std::cout << object1->dataStr << std::endl;

    return 0;
}

