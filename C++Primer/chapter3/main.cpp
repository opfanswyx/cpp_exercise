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
#if 1 //3.17

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