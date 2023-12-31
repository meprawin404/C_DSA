#include<iostream>
using namespace std;

template <class T, class F = int, class P = int>
P add(T x, F y){
    return x+y;
} 

int main()
{
    float sum = add<float,int,float>(3.5,2);
    int sum1= add<int>(2,3);
    cout<<"The sum of float is "<<sum<<endl;
    cout<<"The sum of int is "<<sum1;
    return 0;
}