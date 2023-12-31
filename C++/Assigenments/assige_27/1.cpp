// 1. Define a class Complex with appropriate instance variables and member functions.
// Define following operators in the class:
// a. +
// b. -
// c. *
// d. ==

#include<iostream>
using namespace std;
class Complex{
    private:
        int real;
        int img;

    public:
        void setData(int x, int y){ real = x; img = y;}
        void showData(){
            cout<<endl<<"real = "<<real<<" img = "<<img;
        }

        friend Complex operator+(Complex, Complex);
        friend Complex operator-(Complex,Complex);
        friend Complex operator*(Complex,Complex);
        friend bool operator==(Complex,Complex);
};

Complex operator+(Complex x, Complex y){
    Complex temp;
    temp.real = x.real + y.real;
    temp.img = x.img + y.img;
    return temp;
}

Complex operator-(Complex x, Complex y){
    Complex temp;
    temp.real = x.real - y.real;
    temp.img = x.img - y.img;
    return temp;
}

Complex operator*(Complex x, Complex y){
    Complex temp;
    temp.real = x.real * y.real;
    temp.img = x.img * y.img;
    return temp;
}

bool operator==(Complex x,Complex y){
    if (x.real == y.real && x.img == y.img)
    {
        return true;
    }
    return false;
    
}

int main()
{
    Complex c1,c2,c3,c4,c5,c6;
    c1.setData(5,5);
    c2.setData(5,5);
    c3 = c1+c2;
    c3.showData();

    c4 = c1 - c2;
    c4.showData();

    c5 = c1 * c2;
    c5.showData();

    bool isEqual = (c1 == c2);
    if (isEqual)
    {
        cout<<endl<<"Both the c1 and c2 are equal";
    }
    else
    {
        cout<<endl<<"c1 and c2 aren't equal";
    }
    
    return 0;
}