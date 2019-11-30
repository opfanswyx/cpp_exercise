//
// Created by Administrator on 2019/11/29.
//
#if 0
#include <iostream>
using namespace std;

template <typename T> void Swap(T *a, T *b){
    T temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n1 = 100, n2 = 200;
    cout<<n1<<", "<<n2<<endl;
    Swap(&n1, &n2);
    cout<<n1<<", "<<n2<<endl;

    float f1 = 12.5, f2 = 56.93;
    cout<<f1<<", "<<f2<<endl;
    Swap(&f1, &f2);
    cout<<f1<<", "<<f2<<endl;

    char c1 = 'A', c2 = 'B';
    cout<<c1<<", "<<c2<<endl;
    Swap(&c1, &c2);
    cout<<c1<<", "<<c2<<endl;

    bool b1 = false, b2 = true;
    cout<<b1<<", "<<b2<<endl;
    Swap(&b1, &b2);
    cout<<b1<<", "<<b2<<endl;

    return 0;
}
#endif

#if 0

#include <iostream>
using namespace std;
template <class T1, class T2>
class Point{
public:
    Point(T1 x, T2 y):m_x(x), m_y(y){}

public:
    T1 getX() const;
    void setX(T1 x);
    T2 getY() const;
    void setY(T2 y);

private:
    T1 m_x;
    T2 m_y;
};

template <class T1, class T2>
T1 Point<T1, T2>::getX() const {
    return m_x;
}

template <class T1, class T2>
void Point<T1, T2>::setX(T1 x) {
    m_x = x;
}

template <class T1, class T2>
T2 Point<T1, T2>::getY() const {
    return m_y;
}

template <class T1, class T2>
void Point<T1, T2>::setY(T2 y) {
    m_y = y;
}

int main(){
    Point<int, int> p1(10, 20);
    cout<<"x="<<p1.getX()<<", y="<<p1.getY()<<endl;
    Point<int, char*> p2(10, "east 180度");
    cout<<"x="<<p2.getX()<<", y="<<p2.getY()<<endl;
    Point<char*, char*> *p3 = new Point<char*, char*>("东经180度", "北纬210度");
    cout<<"x="<<p3->getX()<<", y="<<p3->getY()<<endl;
    return 0;
}
#endif
#if 1
#include <iostream>
#include <cstring>
using namespace std;
template <class T>
class CArray
{
    int size; //数组元素的个数
    T *ptr; //指向动态分配的数组
public:
    CArray(int s = 0);  //s代表数组元素的个数
    CArray(CArray & a);
    ~CArray();
    void push_back(const T & v); //用于在数组尾部添加一个元素v
    CArray & operator=(const CArray & a); //用于数组对象间的赋值
    T length() { return size; }
    T & operator[](int i)
    {//用以支持根据下标访问数组元素，如a[i] = 4;和n = a[i]这样的语句
        return ptr[i];
    }
};
template<class T>
CArray<T>::CArray(int s):size(s)
{
    if(s == 0)
        ptr = NULL;
    else
        ptr = new T[s];
}
template<class T>
CArray<T>::CArray(CArray & a)
{
    if(!a.ptr) {
        ptr = NULL;
        size = 0;
        return;
    }
    ptr = new T[a.size];
    memcpy(ptr, a.ptr, sizeof(T ) * a.size);
    size = a.size;
}
template <class T>
CArray<T>::~CArray()
{
    if(ptr) delete [] ptr;
}
template <class T>
CArray<T> & CArray<T>::operator=(const CArray & a)
{ //赋值号的作用是使"="左边对象里存放的数组，大小和内容都和右边的对象一样
    if(this == & a) //防止a=a这样的赋值导致出错
        return * this;
    if(a.ptr == NULL) {  //如果a里面的数组是空的
        if( ptr )
            delete [] ptr;
        ptr = NULL;
        size = 0;
        return * this;
    }
    if(size < a.size) { //如果原有空间够大，就不用分配新的空间
        if(ptr)
            delete [] ptr;
        ptr = new T[a.size];
    }
    memcpy(ptr,a.ptr,sizeof(T)*a.size);
    size = a.size;
    return *this;
}
template <class T>
void CArray<T>::push_back(const T & v)
{  //在数组尾部添加一个元素
    if(ptr) {
        T *tmpPtr = new T[size+1]; //重新分配空间
        memcpy(tmpPtr,ptr,sizeof(T)*size); //拷贝原数组内容
        delete []ptr;
        ptr = tmpPtr;
    }
    else  //数组本来是空的
        ptr = new T[1];
    ptr[size++] = v; //加入新的数组元素
}
int main()
{
    CArray<int> a;
    for(int i = 0;i < 5;++i)
        a.push_back(i);
    for(int i = 0; i < a.length(); ++i)
        cout << a[i] << " ";
    return 0;
}
#endif

