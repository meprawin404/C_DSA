#include<iostream>
using namespace std;

template <class T>
T max1(T x, T y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int main()
{
    int x,y;
    cout<<"Enter two number: ";
    cin>>x>>y;
    cout<<max1<int>(x,y);
    return 0;
}