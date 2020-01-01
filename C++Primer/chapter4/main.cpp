//
// Created by atticus on 2020/1/1.
//

#if 0   //4.21

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    vector<int> vInt;
    const int sz = 10;

    srand((unsigned)time(NULL));

    cout<<"orign vector:"<<endl;
    for(int i = 0; i != sz; ++i){
        vInt.push_back(rand() % 100);
        cout << vInt[i] << " ";
    }
    cout << endl;

    for(auto &val : vInt){
        val = (val % 2 != 0) ? val *= 2 : val;
    }

    cout<<"charge orign is:"<<endl;
    for(auto it = vInt.cbegin(); it != vInt.cend(); it++){
        cout<< *it <<" ";
    }
    cout << endl;
    return 0;
}
#endif

#if 1   // 4.28

#include <iostream>
 using namespace std;

int main(){
    cout << "bool\t\t" << sizeof(bool) <<endl;
    cout << "char\t\t" << sizeof(char) <<endl;
    cout << "wchar\t\t" << sizeof(wchar_t) <<endl;
    cout << "char16\t\t" << sizeof(char16_t) <<endl;
    cout << "char32\t\t" << sizeof(char32_t) <<endl;
    cout << "short\t\t" << sizeof(short) <<endl;
    cout << "int\t\t" << sizeof(int) <<endl;
    cout << "long\t\t" << sizeof(long) <<endl;
    cout << "long long\t\t" << sizeof(long long) <<endl;
    cout << "float\t\t" << sizeof(float) <<endl;
    cout << "double\t\t" << sizeof(double) <<endl;
    cout << "long double\t\t" << sizeof(long double) <<endl;

    return 0;
}
#endif