//
// Created by Administrator on 2019/11/26.
//

#include<iostream>
#include <cstring>

using namespace std;

class Animal
{
public:
    Animal(char *name);
    void print_name();
    virtual void print_color();
    virtual void speak();
    virtual ~Animal();

private:
    char *m_pAnimalName;
};

Animal::Animal(char *name)
{
    int len = strlen(name) + 1;
    m_pAnimalName = new char[len];
    strcpy(m_pAnimalName, name);
}

Animal::~Animal()
{
    cout<<"Animal destructor!"<<endl;
    if(m_pAnimalName){
        delete[] m_pAnimalName;
    }
}

void Animal::print_name()
{
    cout << "name:" << m_pAnimalName << endl;
}
void Animal::print_color()
{

}

void Animal::speak()
{
    cout << "animal language!" << endl;
}

class Cat : public Animal
{
public:
    Cat(char* name, char *catcolor);
    virtual void print_color();
    virtual void speak();
    virtual ~Cat();

private:
    char *m_pCatColor;
};

Cat::Cat(char* name, char* color):Animal(name)
{
    cout << "Cat constructor!" << endl;
    m_pCatColor = new char[strlen(color) + 1];
    strcpy(m_pCatColor, color);
}
Cat::~Cat()
{
    cout << "cat destructor!" << endl;
    if(m_pCatColor)
    {
        delete[] m_pCatColor;
    }
}

void Cat::print_color()
{
    cout << "cat color :" << m_pCatColor << endl;
}

void Cat::speak()
{
    cout << "cat language: miaomiao!" << endl;
}

int main()
{
    Animal *p[2];
    int i;
    p[0] = new Cat("short_haired_cat", "white");
    p[0]->print_name();
    p[0]->print_color();
    p[0]->speak();

    p[1] = new Cat("persian_cat", "brown");
    p[1]->print_name();
    p[1]->print_color();

    for(i = 0; i < 2; i++)
    {
        delete p[i];
    }
    return 0;
}