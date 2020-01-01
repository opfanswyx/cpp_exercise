//
// Created by atticus on 2019/12/1.
//
#if 0 //3.2

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string line;
    cout<< "please input sting:(eof == command+d)" <<endl;
    while(getline(cin,line))
        cout<< line << endl;

    return 0;
}
#endif
#if 0 //3.2

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string world;
    cout<<"please input a world(eof == command+d)"<<endl;
    while(cin>>world)
        cout << world << endl;

    return 0;
}
#endif

#if 0 //3.4

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s1, s2;
    cout<<"please input two sting:"<<endl;
    cin >> s1 >> s2;
    if(s1 == s2)
    {
        cout << "equal" << endl;
    }
    else if(s1 > s2)
    {
        cout << "s1 long" << endl;
    }
    else{
        cout << "s2 long" << endl;
    }

    if(s1.size() == s2.size())
    {
        cout << "equal" << endl;
    }
    else if(s1.size() > s2.size())
    {
        cout << "s1 long" << endl;
    }
    else
    {
        cout << "s2 long" << endl;
    }
    return 0;
}
#endif

#if 0 // 3.5

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char cont = 'y';
    string s, result;
    cout<<"please input the first string:"<<endl;
    while(cin>>s)
    {
        result += s;
        cout << "continue?(y or n)"<< endl;
        cin >> cont;
        if(cont == 'y' || cont == 'Y')
            cout << "please input next string:"<<endl;
        else
            break;
    }
    cout << "thr result string is : "<<result<<endl;

    return 0;
}
#endif

#if 0 // 3.5

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char cont = 'y';
    string s, result;
    cout<<"please input the first string:"<<endl;
    while(cin>>s)
    {
        if(!result.size())
            result += s;
        else
            result = result + " " + s;
        cout << "continue?(y or n)"<< endl;
        cin >> cont;
        if(cont == 'y' || cont == 'Y')
            cout << "please input next string:"<<endl;
        else
            break;
    }
    cout << "thr result string is : "<<result<<endl;

    return 0;
}
#endif

#if 0 // 3.6

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout<<"please input a string(could space):"<<endl;
    getline(cin,s);

    for(auto &c : s)
    {
        c = 'x';
    }
    cout<< s << endl;
    return 0;
}
#endif

#if 0 //3.10

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s, result;
    cout<<"please input a sting:"<<endl;
    getline(cin,s);
    for(decltype(s.size())i=0;i<s.size();i++)
    {
        if(!ispunct(s[i]))
            result += s[i];
    }
    cout<<result<<endl;

    return 0;
}
#endif

#if 0 //3.14

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vInt;
    int i;
    char cont = 'y';
    cout<<"please input a num:"<<endl;
    while(cin>>i)
    {
        vInt.push_back(i);
        cout<<"continu?(y or n)"<<endl;
        cin>>cont;
        if(cont != 'Y' && cont != 'y')
        {
            break;
        }
    }
    for(auto men : vInt)
    {
        cout<< men << " ";
    }
    cout << endl;
    return 0;
}
#endif
#if 0 //3.17

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector<string> vstring;
    string ss;
    char cont = 'y';
    cout<<"please input some string:"<<endl;
    while (cin>>ss)
    {
        for(auto &c : ss)
        {
            c = toupper(c);
        }
        vstring.push_back(ss);
        cout<<"contiune(y or n)?:"<<endl;
        cin>>cont;
        if(cont != 'y' && cont != 'Y')
        {
            break;
        }
        cout<<"please input next string:"<<endl;
    }
    cout<<"the result:"<<endl;
    for(auto s : vstring)
    {
        cout<<s<<endl;
    }
    return 0;
}
#endif

#if 0   //3.20

#include<iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vInt;
    int iVal;
    cout<<"please input some num:"<<endl;
    while(cin >> iVal){
        vInt.push_back(iVal);
        cout<<"please input next num:"<<endl;
    }

    if(vInt.size() == 0){
        cout<<"no num"<<endl;
        return -1;
    }

    cout<<"相邻两项的和依次是："<<endl;
    for(decltype(vInt.size()) i = 0; i < vInt.size() - 1; i += 2){
        cout << vInt[i] + vInt[i+1] << " ";
        if((i + 2) % 10 == 0)
            cout<< endl;
    }
    if(vInt.size() % 2 != 0)
        cout<< vInt[vInt.size() - 1];

    cout<<"前尾两项的和依次是："<<endl;
    for(decltype(vInt.size()) i = 0; i < vInt.size() / 2; i ++){
        cout << vInt[i] + vInt[vInt.size() - i - 1] << " ";
        if((i + 1) % 5 == 0)
            cout<< endl;
    }
    if(vInt.size() % 2 != 0)
        cout<< vInt[vInt.size() - 1];

    return 0;
}
#endif

#if 0 //3.23

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    vector<int> vInt;
    srand((unsigned)time(NULL));
    for(int i = 0; i < 10; i++){
        vInt.push_back( rand() % 1000);
    }
    cout<<"rand num:"<<endl;

    for(auto it = vInt.cbegin(); it != vInt.cend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout<< "orign * 10" << endl;
    for(auto it = vInt.begin(); it != vInt.end(); it++){
        *it *= 2;
        cout << *it << " ";
    }
    cout<<endl;
    return 0;
}
#endif

#if 1

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> vus(11);
    auto it = vus.begin();
    int ival;
    cout<<"请输入一组成绩:"<<endl;
    while(cin >> ival){
        if(ival <= 100){
            ++*(it + ival / 10);
        }
    }
    cout<<"你总共输入了"<<vus.size()<<"个成绩,成绩分布为："<<endl;
    for(auto it = vus.cbegin(); it != vus.cend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
#endif