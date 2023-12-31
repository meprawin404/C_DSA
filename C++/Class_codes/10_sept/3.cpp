#include<iostream>
using namespace std;

class Complex
{
    private:
        int real,img;
    
    public:
        Complex()
        {
            real = 0;
            img = 0;
        }

        Complex(int a)
        {
            real = a;
            img = 0;
        }

        Complex(int a, int b)
        {
            real = a;
            img = b;
        }

        Complex(Complex &c)
        {
            real = c.real;
            img = c.img;
        }

        void setData(int x, int y)
        {
            real = x;
            img = y;
        }

        void showData()
        {
            // cout<<endl<<real<<" + i"<<img;
            cout<<"real = "<<real<<" img = "<<img<<endl;
        }

        Complex add(Complex c)
        {
            Complex temp(0,0);
            temp.real = real + c.real;
            temp.img = img = c.img;
            return temp;
        }
};


int main()
{
    Complex c1(2,2),c2(3),c3;
    Complex c4 = c1;
    // c1.showData();
    // c2.showData();
    // c3.showData();

    c4.showData();
    return 0;
}