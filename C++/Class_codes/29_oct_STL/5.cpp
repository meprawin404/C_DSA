#include<iostream>
using namespace std;

template <class T1, class T2, class T3>

class Multi
{
    public:
        T1 x;
        T2 y;

    
        T3 multiplication(){
            return (x*y);
        }
};

int main()
{
    Multi <int,int,int>m;
    m.x = 5;
    m.y = 5;

    cout<<"Multiplication of num is "<<m.multiplication();
    return 0;

}