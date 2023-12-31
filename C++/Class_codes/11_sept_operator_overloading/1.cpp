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
            cout<<endl<<real<<" "<<img;
        }

        Complex operator+(Complex c)
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
    c1.setData(3,3);
    c2.setData(5,5);
    c3 = c1 + c2;
    c3.showData();
    return 0;
}