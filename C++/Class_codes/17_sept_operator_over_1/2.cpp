// pre-increment and post-increment


#include<iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;

    public:
        Complex()
        {

        }

        Complex(int r, int i)
        {
            real = r;
            img = i;
        }

        Complex(Complex &c)
        {
            real = c.real;
            img = c.img;
        }

        Complex operator++(Complex c)
        {
            
        }
};


int main()
{
    Complex num1(5,5),num2(10,10),num3;


}