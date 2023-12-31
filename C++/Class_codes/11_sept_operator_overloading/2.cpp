#include<iostream>
using namespace std;

class item
{
    private:
        int a;
        int b;

    public:
        void setData(int x, int y){ a=x; b=y;}

        friend void f1(item l);

};

void f1(item l)
{
    cout<<"The sum is "<<l.a+l.b;
}
int main()
{
    item i1;
    i1.setData(5,5);
    f1(i1);
    return 0;
}