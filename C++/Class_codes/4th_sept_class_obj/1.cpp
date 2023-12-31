#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;
    public:
        void setData(int x, int y)
        {
            real = x;
            img = y;
        }

        void showDAta()
        {
            // cout<<endl<<"real="<<real<<" img="<<img;
            cout<<endl<<real<<" + i"<<img;
        }
}; 

int main()
{
    Complex c1,c2;
    c1.setData(2,4);
    c1.showDAta();
    return 0;
}