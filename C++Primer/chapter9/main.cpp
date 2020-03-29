//
// Created by atticus on 2020/1/2.
//

#if 0
#include<iostream>
#include<vector>

using namespace std;

bool search_vec(vector<int>::iterator beg,
                vector<int>::iterator end, int val){
    for(;beg != end; beg++){
        if(*beg == val){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int>ilist = {1,2,3,4,5,6,7};

    cout<<search_vec(ilist.begin(), ilist.end(), 3)<<endl;
    cout<<search_vec(ilist.begin(), ilist.end(), 8)<<endl;
    return 0;
}
#endif

#if 0
#include<iostream>
#include<vector>

using namespace std;

vector<int>::iterator search_vec(vector<int>::iterator beg,
                vector<int>::iterator end, int val){
    for(;beg != end; beg++){
        if(*beg == val){
            return beg;
        }
    }
    return end;
}

int main(){
    vector<int>ilist = {1,2,3,4,5,6,7};

    cout<<search_vec(ilist.begin(), ilist.end(), 3) - ilist.begin()<<endl;
    cout<<search_vec(ilist.begin(), ilist.end(), 8) - ilist.begin() <<endl;
    return 0;
}
#endif

#if 0
#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
    list<int> ilist = {1,2,3,4,5,6,7};
    vector<int> ivec = {7,6,5,4,3,2,1};
    list<char *>slist = {"hello","world","!"};


    vector<double> devc(ilist.begin(), ilist.end());

    vector<double> dvec1(ivec.begin(), ivec.end());

    vector<string> svec;

    svec.assign(slist.begin(),slist.end());

    cout<<devc.capacity()<<" "<<devc.size()<<" "
        << devc[0] << " "<<devc[devc.size()-1]<<endl;

    cout<<dvec1.capacity()<<" "<<dvec1.size()<<" "
        << dvec1[0] << " "<<dvec1[dvec1.size()-1]<<endl;

    cout<<svec.capacity()<<" "<<svec.size()<<" "
        << svec[0] << " "<<svec[svec.size()-1]<<endl;
    return 0;
}
#endif

#if 0
#include<iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> ivec = {1,2,3,4,5,6,7};
    vector<int> ivec1 = {1,2,3,4,5,6,7};
    vector<int> ivec2 = {1,2,3,4,5};
    vector<int> ivec3 = {1,2,3,4,5,6,8};
    vector<int> ivec4 = {1,2,3,4,5,7,6};

    cout<< (ivec == ivec1) <<endl;
    cout<< (ivec == ivec2) <<endl;
    cout<< (ivec == ivec3) <<endl;
    cout<< (ivec == ivec4) <<endl;
    cout<<ivec1.capacity()<<" "<<ivec1.size()<<endl;
    ivec1.push_back(8);
    ivec1.pop_back();
    cout<<ivec1.capacity()<<" "<<ivec1.size()<<endl;
    cout<< (ivec == ivec1) <<endl;

    return 0;
}
#endif

#if 0

#include <iostream>
#include <vector>
#include <list>

using namespace std;

bool list_vector_equal(vector<int> &ivec, list<int> &ilist){
    if(ilist.size() != ivec.size()){
        return false;
    }

    auto lb = ilist.cbegin();
    auto le = ilist.cend();
    auto vb = ivec.cbegin();

    for(;lb != le; lb++, vb++){
        if(*lb != *vb)
            return false;
    }
    return true;
}

int main()
{
    vector<int> ivec = {1,2,3,4,5,6,7};
    list<int> ilist = {1,2,3,4,5,6,7};
    list<int> ilist1 = {1,2,3,4,5};
    list<int> ilist2 = {1,2,3,4,5,6,8};
    list<int> ilist3 = {1,2,3,4,5,7,6};

    cout<< list_vector_equal(ivec,ilist)<<endl;
    cout<< list_vector_equal(ivec,ilist1)<<endl;
    cout<< list_vector_equal(ivec,ilist2)<<endl;
    cout<< list_vector_equal(ivec,ilist3)<<endl;

    return 0;
}
#endif

#if 0

#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque<string> ds;
    string world;
    while(cin >> world){
        ds.push_back(world);
    }

    for(auto si = ds.cbegin(); si != ds.cend(); si++){
        cout << *si << endl;
    }
    return 0;
}
#endif

#if 1

#include <iostream>
#include <list>
#include <queue>

using namespace std;

int main()
{
    list<int> ilist = {1,2,3,4,5,6,7};
    vector<int> odd,even;

    for(auto iter = ilist.cbegin(); iter != ilist.cend(); iter++){
        if(*iter & 1){
            odd.push_back(*iter);
        } else{
            even.push_back(*iter);
        }
    }

    cout<<"odd:"<<endl;
    for(auto iter = odd.cbegin(); iter != odd.cend(); iter++){
        cout << *iter << " " ;
    }
    cout<<endl;
    cout<<"even:"<<endl;
    for(auto iter = even.cbegin(); iter != even.cend(); iter++){
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
#endif