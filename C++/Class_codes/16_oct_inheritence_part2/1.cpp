#include<iostream>
using namespace std;

class A{

    public:
    A(){
        cout<<"A() constructor called"<<endl;
    }
};


class B: public A
{
    public:
    B() : A()
    {
        cout<<"B() constructor called"<<endl;
    }
}; 

class C: public A
{
    public:
    C() : A()
    {
        cout<<"C() constructor called"<<endl;
    }
};

class D : public B, public C
{
    public:
    D() : B() , C()
    {
        cout<<"D() constructor called"<<endl;
    }
};

int main()
{
    D d;
    return 0;
}