#include <iostream>
#include <string>

// kelas dengan constructor
class Constructor{
    public:
        std::string data;

        Constructor(const char* data){
            Constructor::data = data;
        }

        void show(){
            std::cout << "ini " << Constructor::data << std::endl;
        }
};

// kelas tanpa constructor
class WithoutConstructor{
    public:
        std::string data;

        void show(){
            std::cout << "ini " << WithoutConstructor::data << std::endl;
        }

};

int main(){

    // 1. membuat object tanpa constructor
    WithoutConstructor object1;
    object1.data = "tanpa constructor";
    object1.show();

    // 2. membuat object dengan constructor
    Constructor object2 = Constructor("dengan constructor");
    object2.show();

    // 3. membuat object dengan constructor (cara lain)
    Constructor object3("juga dengan constructor");
    object3.show();

    // 4. membuat object pada heap memory
    Constructor* object4 = new Constructor("dengan constructor tapi di heap momory");
    object4->show();

    Constructor* object5;
    object5 = new Constructor("dengan constructor tapi di heap momory");
    object5->show();

    return 0;
}
