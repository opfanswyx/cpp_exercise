//
// Created by atticus on 2019/12/1.
//
#if 0   // 1.3
#include<iostream>

int main()
{
    std::cout<<"Hello, World."<<std::endl;
    return 0;
}
#endif

#if 0 // 1.4
#include <iostream>
int main()
{
    int a1,a2;
    std::cout << "please input two number:" << std::endl;
    std::cin >> a1 >> a2;
    std::cout<< "a1 * a2 = "<< a1 * a2 <<std::endl;

    return 0;
}
#endif

#if 0// 1.9

#include <iostream>
int main()
{
    int a=50;
    int count = 0;

    while(a<=100)
    {
        count += a;
        a++;
    }

    std::cout<<"count = "<< count <<std::endl;
    return 0;
}
#endif

#if 0   //1.10

#include <iostream>
int main()
{
    int a = 10;
    while(a>=0)
    {
        std::cout<< a << std::endl;
        a--;
    }

    return 0;
}
#endif

#if 1 //1.11

#include <iostream>
int main()
{
    int a, b;
    std::cout<< "please input two number:"<< std::endl;
    std::cin>> a >> b;
    while(a<=b)
    {
        std::cout<<a<<" ";
        a++;
    }
    std::cout<<std::endl;
    return 0;
}
#endif