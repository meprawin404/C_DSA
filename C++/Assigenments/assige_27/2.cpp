// 2. Write a C++ program to overload unary operators that is increment and decrement.

#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int img;

    public:
        void setData(int x, int y){ real = x; img = y;}
        void showData()
        {
            cout<<endl<<"real = "<<real<<" img = "<<img;
        }

        friend Complex operator++(Complex );
        friend Complex operator--(Complex );
};

Complex operator++(Complex x){
    Complex temp;
    temp.real = x.real+1;
    temp.img = x.img+1;
    return temp;
}

Complex operator--(Complex x){
    Complex temp;
    temp.real = x.real - 1;
    temp.img = x.img - 1;
    return temp;
}

int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(11,11);
    c2.setData(6,6);
    c3 = ++c1;
    c4 = --c2;
    c3.showData();
    c4.showData();
    return 0;
}