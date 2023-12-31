// 1. Define a class Complex to represent a complex number. Declare instance member
// variables to store real and imaginary part of a complex number, also define instance
// member functions to set values of complex number and print values of complex
// number

#include<iostream>
using namespace std;
class Complex
{
    private:
        int real;
        int img;
    
    public:
        void setData(int x,int y){
            real = x;
            img = y;
        }

        void showData()
        {
            cout<<endl<<real<<" + i"<<img;
        }

};

int main()
{
    Complex c1,c2;
    c1.setData(2,5);
    c1.setData(4,5);
    c1.showData();
    return 0;
}