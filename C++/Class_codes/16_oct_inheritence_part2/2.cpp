#include<iostream>
using namespace std;

class A
{
    public:
        A(){
            cout<<"A() constructor called"<<endl;
        }
};

class B : virtual public A
{
    public:
        B(){
            cout<<"B() constructor called"<<endl;
        }
};

class C : virtual public A 
{
    public:
        C(){
            cout<<"C() constructor called"<<endl;
        }
};

class D: public B, public C
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