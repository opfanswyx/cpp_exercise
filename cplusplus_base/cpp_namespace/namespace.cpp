#include <iostream>

namespace NameSpaceA{
    int a = 0;
}

namespace NameSpaceB{
    int a = 1;
    namespace NameSpaceC{
        struct Teacher{
            char name[10];
            int age;
        };
    }
}

int main() {
    using namespace NameSpaceA;
    using NameSpaceB::NameSpaceC::Teacher;

    std::cout<<"a = "<<a<<std::endl;
    std::cout<<"a = "<<NameSpaceB::a<<std::endl;

    Teacher t1 = {"aaa",3};

    std::cout<<"t1.name = "<<t1.name<<std::endl;
    std::cout<<"t1.age = "<<t1.age<<std::endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}