#include <iostream>
#include <bits/stdc++.h>
// #include "clock.h"
using namespace std;

int hl = 0;

class A {
public:
    A(): i(0) { hl++; cout<< "A:: default constructor : "<<hl<<endl;}
    A(int l): i(l) { hl++; cout<< "A:: constructor : "<<hl<<endl;}
    A( const A &b): i(b.i) {cout<< "A:: copy constructor : "<<hl<<endl;}
    int i;
    static int sum;

    A operator +(const A& n) const {
        return this->i + n.i;
    }
    void print() const {cout<< this->i <<endl;}
    virtual void f(){cout<<"A::f()" <<endl;}
    virtual ~A(){ hl--; cout<< "A:: destructor : "<<hl<<endl;}
};

int A::sum = 1;

class B : public A {
public:
    B() : b(10){}
    int b;
    void f() override {cout<<"B::f()" <<endl;}
    void g() {cout<<"B::g()" <<endl;}

    ~B() override {cout<< "B:: destructor : "<<hl<<endl; delete this;}
};

void f() {
    static int v = 0;
    v++;
    cout<<v <<endl;
}

template <class T>
void s(T & a, T & b) {
    T temp = a;
    a = b;
    b = temp;
}

class a {
public:
    a(){}
    int val = 0;
    virtual void print() {
        cout<< "父类函数" <<endl;
    }
};

class b : public a{
public:
    b(int i){}

    explicit b(const a & c){ cout<< "111"<<endl;}

    void print()  override{
        cout<< "子类函数" <<endl;
    }
};

int main() {
    a * p_a = new b(1);
    b * p_b = dynamic_cast<b*>(p_a);
    p_b->print();
    cout<<"1"<<endl;
    delete p_a;
    return 0;
}
