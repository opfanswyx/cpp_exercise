//
// Created by atticus on 2020/1/1.
//

#if 0 //6.27

#include <iostream>
using namespace std;

int iCount(initializer_list<int> il){
    int count = 0;
    for(auto val : il){
        count += val;
    }
    return count;
}

int main(){
    cout<<"1,6,9 sum is:"<<iCount({1,6,9})<<endl;

    return 0;
}
#endif

#if 0 //6.33

#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> vInt, unsigned index){
    unsigned sz = vInt.size();

    if(!vInt.empty() && index < sz){
        cout<<vInt[index]<<endl;
        print(vInt,index+1);
    }
}

int main(){
    vector<int> v = {1,3,5,7,9,11,13,15};
    print(v,0);
    return 0;
}
#endif

#if 0 //6.51

#include <iostream>
using namespace std;
void f(){
    cout<<"no parm"<<endl;
}

void f(int){
    cout<<"one int"<<endl;
}

void f(int, int){
    cout<<"two int"<<endl;
}


void f(double a, double b = 3.14){
    cout<<"two double"<<endl;
}

int main(){
    //f(2.56,42);
    f(42);
    f(42,0);
    f(2.56,3.14);
    return 0;
}

#endif

#if 1 //6.56

#include <iostream>
#include <vector>
using namespace std;

int func1(int a, int b){
    return a + b;
}

int func2(int a, int b){
    return a - b;
}

int func3(int a, int b){
    return a * b;
}

int func4(int a, int b){
    return a / b;
}

void Compute(int a, int b, int(*p)(int, int));
int main(){
    int i = 5, j = 10;

    decltype(func1) *p1 = func1, *p2 = func2, *p3 = func3, *p4 = func4;

    vector<decltype(func1) *> vf = {p1,p2,p3,p4};
    for(auto p : vf){
        Compute(i,j,p);
    }

    return 0;
}

void Compute(int a, int b, int (*p)(int, int)){
    cout << p(a,b)<< endl;
}
#endif