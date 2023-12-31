// 3. Write a C++ program to add two complex numbers using operator overloaded by a
// friend function.


#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;

    public:
        // void setData(int x, int y){ real = x; img = y;}

        Complex()
        {
            real = 0;
            img = 0;
        }
        Complex(int x,int y){
            real = x;
            img = y;
        }
        void showData()
        {
            cout<<endl<<"real = "<<real<<" img = "<<img;
        }

        friend Complex operator+(Complex,Complex);
};

Complex operator+(Complex x, Complex y){
    Complex temp;
    temp.real = x.real + y.real;
    temp.img = x.img + y.img;
    return temp;
}

int main()
{
    Complex c1(5,5),c2(6,6),c3;
    c3 = c1 + c2;
    c3.showData();
    return 0;
    
}