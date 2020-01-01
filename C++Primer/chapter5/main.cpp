//
// Created by atticus on 2020/1/1.
//

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    cout<<"请输入被除数和除数"<<endl;
    int ival1,ival2;
    while(cin>>ival1>>ival2){
        try{
            if(ival2 == 0){
                throw runtime_error("除数不能为0");
            }
            cout<<"两数相除的结果是:"<<ival1/ival2<<endl;
        }catch(runtime_error err){
            cout<<err.what()<<endl;
            cout<<"continue?";
            char ch;
            cin>>ch;
            if(ch != 'y' && ch != 'Y')
                break;
        }
    }
    return 0;
}