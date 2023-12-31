#include<iostream>
using namespace std;

template <class T>
T add(T x, T y){
    return x+y;
}


int main()
{
    float sum = add<float>(2.5,3.2);
    int sum1 = add<int>(3,3);

    cout<<"The sum of float is "<<sum<<endl;
    cout<<"The sum of int is "<<sum1;
    return 0;
}