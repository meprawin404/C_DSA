// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
inline int sum(int num1, int num2, int num3=0);

int main()
{
    int num1,num2,num3;
    cout<<"Enter two number: ";
    cin>>num1>>num2;
    cout<<"Do you want enter 1 more number:(y/n) ";
    char choise;
    cin>>choise;
    if (choise == 'y' || choise== 'Y')
    {
        cout<<"Enter third number: ";
        cin>>num3;
    }
    cout<<"The sum of all number is "<<sum(num1,num2,num3);
    return 0;  
}

int sum(int num1, int num2, int num3){
    return num1+num2+num3;
}