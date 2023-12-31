// 8. Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;
int main()
{
    int a=50,b=20;
    cout<<"Before swap a= "<<a<<" and b="<<b<<endl;
    a = a+b;
    b = a-b;
    a = a - b;
    cout<<"After swap a= "<<a<<" and b="<<b<<endl;
}