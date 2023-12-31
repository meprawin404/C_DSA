#include<iostream>
using namespace std;

class Complex{

    private:
        int real;
        int img;

    public:
        void setData(int x, int y){real = x; img = y;}
        void showData(){
            cout<<endl<<"real = "<<real<<" img = "<<img;
        }

        friend Complex operator+(Complex x, Complex y);
        friend Complex operator-(Complex c);
};

Complex operator+(Complex x, Complex y){
    Complex temp;
    temp.real = x.real + y.real;
    temp.img = x.img + y.img;
    return temp;
}

Complex operator-(Complex c){
    Complex temp;
    temp.real = -c.real;
    temp.img = -c.img;
    return temp;
}

int main()
{
    Complex c1,c2,c3,c4;
    c1.setData(5,5);
    c2.setData(8,8);
    c3 = c1 + c2;
    c3.showData();
    c4 = -c3;
    c4.showData();
    return 0;
}