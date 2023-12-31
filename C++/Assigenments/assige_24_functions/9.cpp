// 9. Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.

#include<iostream>
using namespace std;
int max(int,int);
float max(float,float);
int main()
{
    int num1,num2;
    float a,b;
    cout<<"\nDo U want to enter integer or real number?";
    cout<<"\npress A for integer and B for real: ";
    char choise;
    cin>>choise;
    if (choise == 'a' || choise == 'A')
    {
        cout<<"Enter two integer number: ";
        cin>>num1>>num2;
        cout<<"The max of two number is "<<max(num1,num2);
    }
    else
    {
        cout<<"Enter two real number: ";
        cin>>a>>b;
        cout<<"The max of two number is "<<max(a,b);
    }


    return 0;
}

int max(int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
    
}


float max(float a, float b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}