//
// Created by Administrator on 2019/11/25.
//
#include<iostream>
#if 0 //基础引用
using namespace std;
void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a,b;
    cout<<"please input two nums: "<<endl;
    cin>> a >> b;
    swap(a,b);
    cout<<"swap: "<< a <<" "<< b <<endl;
    return 0;
}
#endif
#if 0   //数组引用
#include<stdlib.h>
int main1()
{
    int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int(&ra)[10](a);//引用就是给原来的变量有一个别名同一个地址
    int i = 0;
    for (auto data: ra)//C++11的循环
    {
        data = i + 5;
        std::cout << data << std::endl;
    }
    std::cout << a << ra << std::endl;
    std::cout << &a << &ra << std::endl;
    return 0;
}
int main()
{
    int a[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int(&ra)[2][5](a);//引用二维数组
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            std::cout << " " << ra[i][j];
        }
        std::cout << "\n";
    }
    std::cout << a << ra << std::endl;
    std::cout << &a << &ra << std::endl;
    return 0;
}
#endif
#if 0 //指针的引用
#include<iostream>
using namespace std;

struct Teacher
{
    char name[64];
    int age;
};

int getTeacher(Teacher*& myp)
{
    myp = (Teacher *)malloc(sizeof(Teacher));
    if(myp == NULL)
    {
        return -1;
    }
    myp->age = 36;
    return 0;
}
void FreeTeacher(Teacher *pT1)
{
    if(pT1 == NULL)
    {
        return ;
    }
    free(pT1);
}
int main()
{
    Teacher *p1 = NULL;
    getTeacher(p1);
    cout<<"age: "<<p1->age<<endl;
    FreeTeacher(p1);
    return 0;
}
#endif
#if 1 //函数指针的引用
//int(* z(int x,int(*y)(int)))(int)
//int(* &z(int x,int(* &y)(int)))(int)

#endif