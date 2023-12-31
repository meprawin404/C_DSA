// 1. Define a class Complex to represent a complex number with instance variables a and
// b to store real and imaginary parts. Also define following member functions
// a. void setData(int,int)
// b. void showData()
// c. Complex add(Complex)

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

        void showData()
        {
            cout<<endl<<"real = "<<real<<" img = "<<img;
        }

        Complex add(Complex c)
        {
            Complex temp;
            temp.real = real + c.real;
            temp.img = img + c.img;
            return temp;
        }
};

int main()
{
    Complex c1,c2,c3;
    c1.setData(5,5);
    c2.setData(5,6);
    c3 = c1.add(c2);
    c3.showData();
    return 0;
}