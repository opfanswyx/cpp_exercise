//
// Created by Administrator on 2019/11/28.
//
#if 0
#include<iostream>

class complex{
public:
    complex();
    complex(double real, double imag);

public:
    complex operator+(const complex &A) const;
    void display() const;

private:
    double m_real;
    double m_imag;
};

complex::complex():m_real(0.0),m_imag(0.0) {};
complex::complex(double real, double imag):m_real(real),m_imag(imag) {};

complex complex::operator+(const complex &A) const {
    complex B;
    B.m_real = this->m_real + A.m_real;
    B.m_imag = this->m_imag + A.m_imag;
    return B;
}

void complex::display() const {
    std::cout<<m_real<<" + "<<m_imag<<"i"<<std::endl;
}

int main(){
    complex c1(4.3, 5.8);
    complex c2(2.4, 3.7);
    complex c3;
    c3 = c1 + c2;
    c3.display();
    return 0;
}
#endif
#if 1
#include<iostream>
#include<cmath>
using namespace std;
class Complex{
public:
    Complex(double real = 0.0, double imag = 0.0):m_real(real), m_imag(imag){}

public:
    friend Complex operator+(const Complex &c1, const Complex &c2);
    friend Complex operator-(const Complex &c1, const Complex &c2);
    friend Complex operator*(const Complex &c1, const Complex &c2);
    friend Complex operator/(const Complex &c1, const Complex &c2);
    friend bool operator==(const Complex &c1, const Complex &c2);
    friend bool operator!=(const Complex &c1, const Complex &c2);

    Complex & operator+=(const Complex &c);
    Complex & operator-=(const Complex &c);
    Complex & operator*=(const Complex &c);
    Complex & operator/=(const Complex &c);

public:
    double real() const { return m_real; }
    double imag() const { return m_imag; }
private:
    double m_real;
    double m_imag;
};

Complex operator+(const Complex &c1, const Complex &c2){
    Complex c;
    c.m_real = c1.m_real + c2.m_real;
    c.m_imag = c1.m_imag + c2.m_imag;
    return c;
}

Complex operator-(const Complex &c1, const Complex &c2){
    Complex c;
    c.m_real = c1.m_real - c2.m_real;
    c.m_imag = c1.m_imag - c2.m_imag;
    return c;
}

Complex operator*(const Complex &c1, const Complex &c2){
    Complex c;
    c.m_real = c1.m_real * c2.m_real - c1.m_imag * c2.m_imag;
    c.m_imag = c1.m_imag * c2.m_real + c1.m_real * c2.m_imag;
    return c;
}

Complex operator/(const Complex &c1, const Complex &c2){
    Complex c;
    c.m_real = (c1.m_real * c2.m_real + c1.m_imag * c2.m_imag) / (pow(c2.m_real, 2) + pow(c2.m_imag, 2));
    c.m_imag = (c1.m_imag * c2.m_real - c1.m_real * c2.m_imag) / (pow(c2.m_real, 2) + pow(c2.m_imag, 2));
    return c;
}

bool operator==(const Complex &c1, const Complex &c2){
    if(c1.m_real == c2.m_real && c1.m_imag == c2.m_imag){
        return true;
    }else{
        return false;
    }
}

bool operator!=(const Complex &c1, const Complex &c2){
    if(c1.m_real != c2.m_real && c1.m_imag != c2.m_imag){
        return true;
    }else{
        return false;
    }
}

Complex & Complex::operator+=(const Complex &c){
    this->m_real += c.m_real;
    this->m_imag += c.m_imag;
    return *this;
}

Complex & Complex::operator-=(const Complex &c) {
    this->m_real -= c.m_real;
    this->m_imag -= c.m_imag;
    return *this;
}

Complex& Complex::operator*=(const Complex &c) {
    this->m_real = this->m_real * c.m_real - this->m_imag * c.m_imag;
    this->m_imag = this->m_imag * c.m_real + this->m_real * c.m_imag;
    return *this;
}

Complex & Complex::operator/=(const Complex &c){
    this->m_real = (this->m_real*c.m_real + this->m_imag*c.m_imag) / (pow(c.m_real, 2) + pow(c.m_imag, 2));
    this->m_imag = (this->m_imag*c.m_real - this->m_real*c.m_imag) / (pow(c.m_real, 2) + pow(c.m_imag, 2));
    return *this;
}

int main(){
    Complex c1(25, 35);
    Complex c2(10, 20);
    Complex c3(1, 2);
    Complex c4(4, 9);
    Complex c5(34, 6);
    Complex c6(80, 90);

    Complex c7 = c1 + c2;
    Complex c8 = c1 - c2;
    Complex c9 = c1 * c2;
    Complex c10 = c1 / c2;
    cout<<"c7 = "<<c7.real()<<" + "<<c7.imag()<<"i"<<endl;
    cout<<"c8 = "<<c8.real()<<" + "<<c8.imag()<<"i"<<endl;
    cout<<"c9 = "<<c9.real()<<" + "<<c9.imag()<<"i"<<endl;
    cout<<"c10 = "<<c10.real()<<" + "<<c10.imag()<<"i"<<endl;

    c3 += c1;
    c4 -= c2;
    c5 *= c2;
    c6 /= c2;
    cout<<"c3 = "<<c3.real()<<" + "<<c3.imag()<<"i"<<endl;
    cout<<"c4 = "<<c4.real()<<" + "<<c4.imag()<<"i"<<endl;
    cout<<"c5 = "<<c5.real()<<" + "<<c5.imag()<<"i"<<endl;
    cout<<"c6 = "<<c6.real()<<" + "<<c6.imag()<<"i"<<endl;

    if(c1 == c2){
        cout<<"c1 == c2"<<endl;
    }
    if(c1 != c2){
        cout<<"c1 != c2"<<endl;
    }

    return 0;
}
#endif
