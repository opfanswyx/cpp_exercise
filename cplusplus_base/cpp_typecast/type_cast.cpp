//
// Created by Administrator on 2019/11/25.
//
#include<iostream>

void printBuf(const char *p)
{
    char *p1 = NULL;
    /* 把只读属性去掉 */
    p1 = const_cast<char *>(p);

    p1[0] = 'Z';
    std::cout<<"p: "<<p<<std::endl;
}

class Tree {};
class Animal{
public:
    virtual void cry() = 0;
};

class Dog : public Animal{
public:
    virtual void cry(){
        std::cout<<"wang wang"<<std::endl;
    }
    void doHome(){
        std::cout<<"look home"<<std::endl;
    }
};

class Cat : public Animal{
public:
    virtual void cry(){
        std::cout<<"miao miao"<<std::endl;
    }
    void doThing(){
        std::cout<<"do do do"<<std::endl;
    }
};

void playObj(Animal *base){
    base->cry();

    Dog *pDog = dynamic_cast<Dog *>(base);
    if(pDog != NULL)
    {
        pDog->doHome();
    }

    Cat *pCat = dynamic_cast<Cat *>(base);
    if(pCat != NULL)
    {
        pCat->doThing();
    }
}

int main()
{
    /***************static_cast<>****************/
    double dpi = 3.1415926;
    int num1 = (int)dpi;    /* c类型转换 */
    int num3 = dpi;         /* c隐式类型转换 */
    /* c语言中隐式类型转换均可使用static_cast<>()进行类型转换 */
    int num2 = static_cast<int>(dpi);

    std::cout<<"num1:"<<num1<<std::endl;
    std::cout<<"num2:"<<num2<<std::endl;
    std::cout<<"num3:"<<num3<<std::endl;

    char *p1 = "hello world";
    int *p2 = NULL;

    p2 = reinterpret_cast<int *>(p1);

    std::cout<<"p1:"<<p1<<std::endl;
    std::cout<<"p2:"<<*p2<<std::endl;

    /*****************const_cast<>*******************/
    char myp[] = "hello world";
    printBuf(myp);
    /***********************************************/
    Dog d1;
    Cat c1;
    Animal *pBase = NULL;
    pBase = &d1;

    pBase = static_cast<Animal *>(&d1);

    pBase = reinterpret_cast<Animal *>(&d1);
    {
        Tree t1;
        pBase = reinterpret_cast<Animal *>(&t1);
    }

    playObj(&d1);
    playObj(&c1);

    return 0;
}

