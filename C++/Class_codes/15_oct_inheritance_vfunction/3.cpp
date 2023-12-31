#include<iostream>
using namespace std;

class Base
{
    public:
        void printBase(){
            cout<<"Base function called"<<endl;
        }
};


class Derived : public Base
{
    public:
        void printBase(){
            cout<<"Base Modified function called"<<endl;
        }


        void printDerived(){
            cout<<"Derived function called"<<endl;
        }
};

int main()
{
    Base *B;
    Derived *D;
    Base obj1;
    Derived obj2;

    B = &obj1;
    B->printBase();

    D = &obj2;
    D->printBase();
    D->printDerived();

    B = &obj2;
    B->printBase();
    // B->printDerived();

    // D = obj1;
    return 0;
}