// 9. Write a C++ program to find the maximum of two numbers.


#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two number: ";
    cin>>num1>>num2;
    if (num1>num2)
    {
        cout<<"The greater number is "<<num1;
    }
    else
    {
        cout<<"The greater number is "<<num2;
    }
    return 0;
}