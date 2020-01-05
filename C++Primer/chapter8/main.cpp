//
// Created by atticus on 2020/1/1.
//

#if  0 //8.1

#include <iostream>
#include <stdexcept>
using namespace std;

istream & f(istream & in){
    int v;

    while(in >> v, !in.eof()){
        if(in.bad())
            throw runtime_error("IO流错误");
        if(in.fail()){
            cerr<<"数据错误，请重试"<<endl;
            in.clear();
            in.ignore(100,'\n');
            continue;
        }
        cout<<v<<endl;
    }
    in.clear();
    return in;
}

int main(){
    cout<<"输入一些数，然后结束"<<endl;
    f(cin);
    return 0;
}
#endif

#if 0 // 8.3

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main(){
    ifstream in("/Users/atticus/Documents/GitHub/cpp_exercise/C++Primer/chapter8/data");    //打开文件
    if(!in){
        cerr<<"无法打开输入文件"<<endl;
        return -1;
    }

    string line;
    vector<string> words;
    while(getline(in, line)){
        words.push_back(line);
    }

    in.close();

    vector<string>::const_iterator it = words.begin();
    while(it != words.end()){
        cout << *it << endl;
        ++it;
    }

    return 0;

}
#endif


#if 1   //8.10

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    ifstream in("/Users/atticus/Documents/GitHub/cpp_exercise/C++Primer/chapter8/data");    //打开文件
    if(!in){
        cerr<<"无法打开输入文件"<<endl;
        return -1;
    }

    string line;
    vector<string> words;
    while(getline(in, line)){
        words.push_back(line);
    }

    in.close();

    vector<string>::const_iterator it = words.begin();
    while(it != words.end()){
        istringstream line_str(*it);
        string word;
        while(line_str >> word){
            cout << word << " ";
        }
        cout << endl;
        ++it;
    }

    return 0;

}
#endif