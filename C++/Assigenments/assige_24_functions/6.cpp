// 6. Define a function to swap data of two int variables using call by reference
#include<iostream>
void swap(int &, int &);
using namespace std;
int main()
{
    int a=6,b=10;
    cout<<"The value of a = "<<a<<" and b = "<<b<<endl;
    swap(a,b);
    cout<<"The value of a = "<<a<<" and b = "<<b;
    return 0;
}

void swap(int &p, int &q)
{
    int temp;
    temp = p;
    p = q;
    q = temp;
}