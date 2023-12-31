#include<iostream>
using namespace std;
int power(int, int);

int main()
{
    int num,pow;
    cout<<"Enter a number and power to rise: ";
    cin>>num>>pow;
    cout<<"The result is "<<power(num,pow);
    return 0;
}

int power(int num, int pow)
{
    int result=1;
    for (int i = 1; i <= pow; i++)
    {
        result = result * num;
    }
    
    return result;
}