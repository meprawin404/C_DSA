#include<iostream>
using namespace std;

class item
{
    public:
        int a,b;
        int static k;
};

int item::k;

int main()
{
    // item i1,i2;
    // i1.k = 4;
    // cout<<i2.k;

    // other way to access static variable 
    item::k=4;
    cout<<item::k;
    return 0;
}