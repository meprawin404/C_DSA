// 2. Write a C++ program to add two numbers using single inheritance. Accept these two
// numbers from the user in base class and display the sum of these two numbers in
// derived class.


#include<iostream>
using namespace std;

class add
{
    protected:
        int a;
        int b;


    public:
        void input(){
            cout<<"Enter two numbers: ";
            cin>>a>>b;
        }
};

class derived : public add
{
    public:
        void sum()
        {
            cout<<"sum two number is "<<a+b<<endl;
        }
};


int main()
{
    derived d;
    d.input();
    d.sum();
    return 0;
}