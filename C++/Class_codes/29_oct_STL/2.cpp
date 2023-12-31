#include<iostream>
using namespace std;

template <class T, class F,class P>
P add(T x, F y){
    return(x+y);
}

int main()
{
    float sum = add<float, int, float>(2.5,3);
    int sum1 = add<int, int, int>(3,3);
    cout<<"Sum of flaot is "<<sum<<endl;
    cout<<"Sum of int is "<<sum1;
    return 0;
}