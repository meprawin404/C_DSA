#include<iostream>
int add(int a,int b=10);
using namespace std;
int main()
{
    int a=20,b;
    // cout<<"Enter two numbers: ";
    // cin>>a>>b;
    cout<<"Sum of two number is: "<<add(a);
    return 0;
}

int add(int a, int b)
{
    return a+b;
}